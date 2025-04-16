"""
Given a program, check and return term, non-term or unk
"""


import os
import os.path
import shutil
import subprocess
import xml.etree.ElementTree as ET
from collections import namedtuple

import requests

import utils as u
from config import Config as c
from validate_test import validate


import logging
l = logging.getLogger( __name__ )

import promptlibrary
pl = vars( promptlibrary )




def extract_loops( code_fpath ):
    """
    Extract loops for given code path.
    
    Returns: A list of partially filled LoopData entries.
    """
    l.info( "Extracting loops from {}".format( code_fpath ))

    # Check extension
    if not (os.path.splitext( code_fpath )[1] == '.c' or
            os.path.splitext( code_fpath )[1] == '.i' ):
        l.warning( "Given file {} does not have .c or .i extension".format(
            code_fpath ))

    # Run command
    u.clear_tmp()
    instrumenter_res = subprocess.run( 
        args = [ 
            os.path.relpath( c.INSTRUMENTER_PATH, c.TMP_PATH ),
            '-in', 
            os.path.relpath( code_fpath, c.TMP_PATH ),
            '-le', ],
        check = False,
        cwd = c.TMP_PATH,
    )

    # Check status
    if instrumenter_res.returncode != 0:
        msg = ( "Instrumenter failed for {}. XML may not be generated".format(
            code_fpath ))
        if c.IGNORE_EXTRACTOR_RET_CODE:
            l.warning( msg )
        else:
            l.error( msg )
            raise RuntimeError( msg )
    l.info( "insrumenter bin succeeded for {}".format( code_fpath ))

    # Check xml file exists
    xml_fpath = os.path.join( 
        c.TMP_PATH,
        os.path.basename( os.path.splitext( code_fpath )[0] ) + ".xml" )
    if not os.path.exists(xml_fpath):
        msg = "{} does not exist. ".format( xml_fpath )
        l.error( msg ) 
        raise RuntimeError( msg )

    # Add root tag to xml file
    with open( xml_fpath, 'r' ) as xml_file:
        xml_content = xml_file.read()
        l.debug("Extracted xml content: {}".format( xml_content ))
        xml_content = "<root>" + xml_content + "</root>"
    with open( xml_fpath, 'w') as xml_file:
        xml_file.write(xml_content)

    # Parse xml file
    tree = ET.parse( xml_fpath )
    root = tree.getroot()

    # Source code
    with open( code_fpath, 'r' ) as f:
        full_code = f.read()

    # For each loop in program, extract and store
    loops = []
    for loopinfo in root.findall("loopinfo"):
        l.debug("Found loop!")
        # pytype: disable=attribute-error
        loops.append( u.LoopData(
            loop_id = loopinfo.find("loopID").text, 
            loop_code = loopinfo.find("fullBodyCode").text,
            beg_line = loopinfo.find("beginLineNum").text,
            end_line = loopinfo.find("endLineNum").text,
            loop_type = loopinfo.find("loopType").text,
            full_code = full_code,
        ))
        # pytype: enable=attribute-error

    return loops


def extract_sanitize_llm_response( response_text, begintag, endtag ):
    """ 
    Helper frunction to extract data from llm response

    Arguments:
    
    response        -   Extracts from here
    begintag,endtag -   Tags within which the string is stored

    Returns: A result containing extracted string. Failure reasons may be:

    LLM_FAILED      -   Parsing errors that prevents respones from llm from
                        being interpreted. Includes tags not being present,
                        contents inside being empty, etc.
    LLM_GAVE_UP     -   Contents inside tag is 'UNK', ie, llm gave up
    """
    # Extract the response between the begintag and endtag
    santized_response = ""
    if begintag in response_text and endtag in response_text:
        l.info( "Tags present, extracting" )
        santized_response = response_text.split(begintag)[1].split(endtag)[0]
    
    # Tags not present
    else:
        l.info( "Begin or end tag not found in response" )
        return u.Result( None, 'LLM_FAILED' )

    santized_response = santized_response.strip()

    if santized_response == "":
        l.info( "Response empty" )
        return u.Result( None, 'LLM_FAILED')

    if santized_response == "UNK":
        l.info( "LLM returned unk" )
        return u.Result( None, 'LLM_GAVE_UP' )

    return u.Result( santized_response, None )


def llm_generate_variant_invariant(model_name, loop_data):
    """
    Uses Ollama API to generate variant and invariant
    
    Arguments:
    
    model_name  -   Name of the Ollama model to use
    loop_data   -   Data with loop details, dict like each entry in return of
                    extract_loops.

    Writes variant, invariant and assigns to passed loop_data

    Returns: Status object. Failure reasons may be:

    LLM_FAILED      -   Parsing errors that prevents respones from llm from
                        being interpreted. Includes tags not being present,
                        contents inside being empty, etc.
    LLM_GAVE_UP     -   Contents inside tag is 'UNK', ie, llm gave up
    API_ERROR       -   Error communicating with Ollama API
    """
    # Configure Ollama API endpoint
    OLLAMA_API = "http://localhost:11434/api/generate"

    # Assemble prompt
    dyn_prompt = "<sourcecode> " \
        + loop_data.full_code \
        + "</sourcecode> " \
        + "<loopcode> " \
        + loop_data.loop_code \
        + "</loopcode> " \
        + "<loopid> " \
        + loop_data.loop_id \
        + "</loopid>"
    prompt_text = (
        pl[ c.PROMPT ] + " " + dyn_prompt
    )
    l.debug( "Generated prompt: {}".format( prompt_text ))

    # Call Ollama API
    try:
        response = requests.post(OLLAMA_API, json={
            "model": model_name,
            "prompt": prompt_text,
            "stream": False
        })
        response.raise_for_status()
        response_text = response.json()["response"]
        l.debug("Response from Ollama: {}".format(response_text))
    except Exception as e:
        l.error("Failed to generate response: {}".format(e))
        return u.Status(False, 'API_ERROR')

    # Extract assigns, variant and invariant
    variant = extract_sanitize_llm_response(
        response_text, "<variant>", "</variant>" )
    if variant.result is None: return u.Status( False, variant.failure_reason )
    invariant = extract_sanitize_llm_response(
        response_text, "<invariant>", "</invariant>" )
    if invariant.result is None: return u.Status( False, invariant.failure_reason )
    assigns = extract_sanitize_llm_response(
        response_text, "<assigns>", "</assigns>" )
    if assigns.result is None: return u.Status( False, assigns.failure_reason )

    # Write loop data and return
    loop_data.variant = variant.result
    loop_data.invariant = invariant.result
    loop_data.assigns = assigns.result
    return u.Status( True, None )


def check_ter(c_fpath, model_name):
    """
    Check termination of given c program using specified Ollama model

    Returns: A Status that is True if the program is believed to be terminating,
        False if it may be non-terminating. Reports many reasonsss for
        failure, see docs of  llm_generate_variant_invaraint() and
        validate(). Other than that:

    LOOP_EXTRACTION -   Loop extraction failed, check logs.

    Also, if no loops are present, returns True with reason NO_LOOPS
    """
    u.clear_tmp()

    # Load code, do early check for presense of loops
    with open( c_fpath, 'r' ) as code_file:
        full_code = code_file.read()
    if not ('for' in full_code or 'while' in full_code or 'do' in full_code):
        l.warning( "Given file {} does not have loops returning True".format(
            c_fpath ))
        return u.Status( False, 'NO_LOOPS' )

    # Extract loops
    try: 
        loops = extract_loops( c_fpath )
    except RuntimeError:
        return u.Status( False, 'LOOP_EXTRACTION' )

    
    # Generate variant, inv etc for each loop
    for loop_data in loops:
        status = llm_generate_variant_invariant(
            model_name=model_name, loop_data=loop_data)
        l.debug("Extracted data for first loop, loop data: {}, status: {}".format(
            loop_data, status ))
        if not status.success:
            return status

        # Validate each loop separately - that is the only way the instrumenter
        # will work
        status = validate( loop_data )
        l.debug( "Validate returned: {}".format( status ))
        if not status.success:
            return status

    return u.Status( True, None )

    
if __name__ == "__main__":
    
    import argparse
    import sys

    log_levels = {
        'debug' : logging.DEBUG,
        'info'  : logging.INFO,
    }
    parser = argparse.ArgumentParser()
    parser.add_argument( '--in-file', type=str, required=True,
        help = "Path to c file to check" )
    parser.add_argument('--model', type=str, required=True,
        help="Name of the Ollama model to use")
    parser.add_argument('--log-level', type=str, default='info',
        choices = log_levels.keys(),
        help = "Log level")
    args = parser.parse_args()
    

    u.init_logging()
    logging.getLogger( __name__ ).setLevel( log_levels[ args.log_level ] )

    ret = check_ter(args.in_file, args.model)
    
    # Set exit code
    if ret.success: sys.exit( 0 )
    else: sys.exit( 1 )

