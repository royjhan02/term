"""
Validates variant, invariant using testing
"""
# TODO is the ranking function > 0 check in place
import os
import os.path
import re
import subprocess

# from tqdm import tqdm

import utils as u
from config import Config as c
from bracer import brace_control_bodies


import logging
l = logging.getLogger( __name__ )
l.setLevel( logging.DEBUG )

def extract_while_condition(code: str, idx: int) -> str:
    """Given full C code and the index of the 'w' in 'while', return the text inside the matching parentheses."""
    # find the '(' after 'while'
    start = code.find('(', idx)
    if start < 0:
        raise RuntimeError(f"No '(' after 'while' at index {idx}")
    depth = 0
    for i in range(start, len(code)):
        if code[i] == '(':
            depth += 1
        elif code[i] == ')':
            depth -= 1
            if depth == 0:
                return code[start+1 : i].strip()
    raise RuntimeError(f"Unbalanced parentheses for while at index {idx}")

def extract_for_condition(code: str, idx: int) -> str:
    """Given full C code and the index of the 'f' in 'for', return the middle clause of 'for(init; cond; post)'."""
    # find the '(' after 'for'
    start = code.find('(', idx)
    if start < 0:
        raise RuntimeError(f"No '(' after 'for' at index {idx}")
    depth = 0
    for i in range(start, len(code)):
        if code[i] == '(':
            depth += 1
        elif code[i] == ')':
            depth -= 1
            if depth == 0:
                parts = code[start+1 : i].split(';')
                if len(parts) >= 2:
                    return parts[1].strip()
                else:
                    raise RuntimeError(f"Malformed for(...) at index {idx}")
    raise RuntimeError(f"Unbalanced parentheses for for at index {idx}")

def extract_do_condition(code: str, idx: int) -> str:
    """
    Given full C code and the index of the 'd' in 'do',
    return the text inside the 'while(...)' that follows the matching '}'.
    """
    # 1) find the '{' that starts the do-body
    body_start = code.find('{', idx)
    if body_start < 0:
        raise RuntimeError(f"No '{{' after 'do' at index {idx}")
    # 2) find its matching '}'
    depth = 0
    for i in range(body_start, len(code)):
        if code[i] == '{':
            depth += 1
        elif code[i] == '}':
            depth -= 1
            if depth == 0:
                body_end = i
                break
    else:
        raise RuntimeError(f"Unbalanced braces in do-body starting at {idx}")
    # 3) find the 'while' after that closing '}'
    wh_idx = code.find('while', body_end)
    if wh_idx < 0:
        raise RuntimeError(f"No 'while' after do-body ending at {body_end}")
    # 4) reuse extract_while_condition
    return extract_while_condition(code, wh_idx)

def extract_loop_condition(code: str, loop_type: str, loop_kwd_start: int) -> str:
    """
    Given the full C code as a string, the loop type, and the index of
    the loop keyword, return just the condition expression.
    """
    snippet = code[loop_kwd_start:]
    if loop_type == "WhileStmt":
        return extract_while_condition(code, loop_kwd_start)
    elif loop_type == "ForStmt":
        return extract_for_condition(code, loop_kwd_start)
    elif loop_type == "DoStmt":
       return extract_do_condition(code, loop_kwd_start)
    else:
        raise ValueError(f"Unknown loop type {loop_type!r}")


# def add_braces( full_code ):
#     """
#     Adds braces to given code using the bracer bin. Returns a result. Failure
#     reasons:
    
#     BRACER  -   The bracer failed.
#     """
#     # Write code
#     u.clear_tmp()
#     with open( os.path.join( c.TMP_PATH, c.BRACER_IN_FNAME ), 'w') as f:
#         f.write( full_code )

#     bracer_res = subprocess.run( 
#         args = [ 
#             os.path.relpath( c.BRACER_PATH, c.TMP_PATH ),
#             '-in', 
#             c.BRACER_IN_FNAME,
#         ],
#         check = False,
#         cwd = c.TMP_PATH,
#     )
    
#     # Check status
#     if bracer_res.returncode != 0:
#         msg = "Bracer failed"
#         if c.IGNORE_EXTRACTOR_RET_CODE:
#             l.warning( msg )
#         else:
#             l.error( msg )
#             return u.Result( None, 'BRACER' )
#     l.info( "Bracer succeeded")

#     # Check c file exists
#     out_fpath = os.path.join( c.TMP_PATH, c.BRACER_OUT_FNAME )
#     if not os.path.exists(out_fpath):
#         # If bracer output doesn't exist, the input code might already be properly braced
#         # Use the input code as is
#         l.info("Bracer output not found, using input code as is")
#         return u.Result(full_code, None)

#     # Load code from bracer output
#     with open( out_fpath, 'r' ) as f:
#         braced_code = f.read()

#     return u.Result( braced_code, None )


# def validate_cbmc( loop_data ):
#     """
#     Validate variant in loop_data via cbmc. 
    
#     Returns: Status that is true if validation succeeded. Failure reasons may be:
    
#     INSTRUMENTER    -   Instrumenter for adding asserts for validation
#                         failed.
#     CBMC_ASSERT     -   CBMC detected assertion violation
#     CBMC_TIMEOUT    -   CBMC timed out 
#     CBMC_ERROR      -   CBMC threw an error
#     """
#     # TODO Add check for invariant being positive 
#     if c.ASSERTS:
#         assert loop_data.variant is not None
#         assert loop_data.invariant is not None
#         assert loop_data.assigns is not None
#         assert loop_data.loop_code is not None
#         assert loop_data.full_code is not None
#         assert loop_data.invariant is not None
#         assert loop_data.loop_type is not None
#         assert loop_data.variant is not None

#     Ccondition = ""

#     loop_code = loop_data.loop_code.strip() # Idk why we need strip, was from before
#     full_code = loop_data.full_code
#     loop_variant = loop_data.variant
#     loop_type = loop_data.loop_type

#     # Code to instrument with
#     var_init = "int oldVal = 2147483647;"
#     var_assert = """
#         __CPROVER_assert( {0} < oldVal, "{1}" );
#         __CPROVER_assert( {0} >= 0, "{2}" );
#         oldVal = {0};
#     """.format( loop_variant, c.CBMC_DEC_ASSERT, c.CBMC_POS_ASSERT )

#     l.debug("Loop variant: {}".format( loop_variant ))

#     # Get index of start of loop
#     if (loop_code in full_code):
#         loop_start_idx = full_code.find(loop_code)
#         # Get the index at the end of loop_code
#         before_loop = full_code[:loop_start_idx]
#         after_loop = full_code[loop_start_idx:]
#     else:
#         l.warning( "Couldn't find loop code in full code" )
#         return u.Status( False, 'INSTRUMENTER' )

#     # Mark start of loop
#     loop_mark = "/* __IPROTON_LOOP_START__ */"
#     loop_marked_code = before_loop + loop_mark + after_loop

#     # Brace the code
#     res = add_braces( loop_marked_code )
#     if res.result is None:
#         return u.Status( False, res.failure_reason )
#     braced_code = res.result
#     l.debug("Braced code: ".format( braced_code ))

#     # Get back start of loop and pieces
#     loop_start_idx = braced_code.find( loop_mark )
#     if loop_start_idx == '-1':
#         l.error( "Couldn't find loop start marker in braced code" )
#         return u.Status( False, 'INSTRUMENTER' )
#     before_loop = braced_code[:loop_start_idx]
#     after_loop  = braced_code[loop_start_idx:]
    
#     # Add initialization for variant
#     code_with_init = before_loop + var_init + after_loop

#     # Find beginning of loop keyword 
#     if (loop_type == "WhileStmt"):
#         loop_kwd_start = code_with_init.find("while", loop_start_idx)
#     elif (loop_type == "ForStmt"):
#         loop_kwd_start = code_with_init.find("for", loop_start_idx)
#     elif (loop_type == "DoStmt"):
#         loop_kwd_start = code_with_init.find("do", loop_start_idx)
#     else:
#         l.warning( "Loop has unkown loop type" )
#         return u.Status( False, 'INSTRUMENTER' )
#     l.debug( "Loop keyword at: {}".format( loop_kwd_start )) 
#     if loop_kwd_start == -1:
#         l.warning("loop keyword not found")
#         return u.Status( False, 'INSTRUMENTER' )

#     # l.debug("Index of 'while': {}".format( loop_kwd_start))
#     body_start_index = code_with_init.find(
#         "{", loop_kwd_start) + 1
#     l.debug( "body_start: {}".format( body_start_index )) 
#     if body_start_index == -1:
#         l.warning("Brace not found after loop start")
#         return u.Status( False, 'INSTRUMENTER' )
#     before_body_start = code_with_init[:body_start_index]
#     after_body_start = code_with_init[body_start_index:]
#     instrumented_code = before_body_start + var_assert + after_body_start

#     # Add headers
#     instrumented_code = (
#         """
#             /* Instrumented for llm-ter-check */
#         """ +
#         instrumented_code 
#     )

#     # Write c code
#     c_fpath = os.path.join( c.TMP_PATH, c.TEST_C_FNAME )
#     with open( c_fpath, 'w' ) as f:
#         f.write( instrumented_code )

#     # Call cbmc
#     try :
#         ret = subprocess.run(
#             args = [  
#                 'cbmc',
#                 '--unwind', str(c.CBMC_NUM_UNWIND),
#                 '--z3',
#                 c_fpath,
#             ],
#             check = False,
#             timeout = c.CBMC_TIMEOUT,
#             capture_output = True,
#             text = True,
#         )

#     # If timeout, assume terminates since assert not triggered
#     except subprocess.TimeoutExpired:
#         l.warning( "cbmc timed out" )
#         if c.CBMC_TO_CONSIDER_TERM:
#             return u.Status( True, None )
#         else: 
#             return u.Status( False, 'CBMC_TIMEOUT' )

#     # Look at output for dec
#     res_idx = ret.stdout.find( c.CBMC_DEC_ASSERT )
#     if res_idx == -1:
#         l.error( "CBMC did not have result" )
#         return u.Status( False, 'CBMC_ERROR' )
#     line_end_idx = ret.stdout.find( '\n', res_idx )
#     res_str = ret.stdout[ res_idx : line_end_idx ]
#     if c.CBMC_RES_PASS in res_str:
#         l.info( "DEC check did not fail" )
#     elif c.CBMC_RES_FAIL in res_str:
#         l.warning( "DEC check failed" )
#         return u.Status( False, 'CBMC_ASSERT' )
#     else:
#         l.error( "No result from cbmc, line is: {}".format( res_str ))
#         return u.Status( False, 'CBMC_ERROR' )

#     # Look at output for pos
#     res_idx = ret.stdout.find( c.CBMC_POS_ASSERT )
#     if res_idx == -1:
#         l.error( "CBMC did not have result" )
#         return u.Status( False, 'CBMC_ERROR' )
#     line_end_idx = ret.stdout.find( '\n', res_idx )
#     res_str = ret.stdout[ res_idx : line_end_idx ]
#     if c.CBMC_RES_PASS in res_str:
#         l.info( "POS check did not fail" )
#     elif c.CBMC_RES_FAIL in res_str:
#         l.warning( "POS check failed" )
#         return u.Status( False, 'CBMC_ASSERT' )
#     else:
#         l.error( "No result from cbmc, line is: {}".format( res_str ))
#         return u.Status( False, 'CBMC_ERROR' )

#     # Some other error, report
#     if ret.returncode != 0:
#         l.error( 
#             "Running cbmc failed with return code {} stdout {} stderr {}".format( 
#                 ret.returncode, ret.stdout, ret.stderr
#         ))
#         return u.Status( False, 'CBMC_ERROR' )

#     return u.Status( True, None )
def extract_dec_error_trace(log_text: str, v_type):
    """
    From the complete CBMC stdout in `log_text`, find up to `max_traces`
    sections that start with "Trace for ..." and contain the line
    "Trace for main.assertion.1:". Returns each section as a single string.
    """
    # Split the log into chunks starting at each "Trace for"
    if v_type == "IPROTON_VAR_DEC":
        targ = "Trace for main.assertion.1:"
    else:
        targ = "Trace for main.assertion.2:"

    sections = re.split(r'(?=Trace for)', log_text)
    dec_trace = ''
    for sec in sections:
        if targ in sec:
            # Trim trailing blank lines for neatness
            dec_trace = (sec.rstrip())
            return dec_trace
    return dec_trace

def get_instrumented_code(loop_data):
    if c.ASSERTS:
        assert loop_data.variant is not None
        assert loop_data.invariant is not None
        assert loop_data.assigns is not None
        assert loop_data.loop_code is not None
        assert loop_data.full_code is not None
        assert loop_data.loop_type is not None

    loop_code = loop_data.loop_code.strip()
    full_code = loop_data.full_code
    loop_variant = loop_data.variant
    loop_type = loop_data.loop_type

    var_init = f"int oldVal = 2147483647;"
    assume_init = f"__CPROVER_assume({loop_variant} < 2147483647);"
    var_assert = f"""
        __CPROVER_assert({loop_variant} < oldVal, "{c.CBMC_DEC_ASSERT}");
        __CPROVER_assert({loop_variant} >= 0, "{c.CBMC_POS_ASSERT}");
        oldVal = {loop_variant};
    """

    l.debug(f"Loop variant: {loop_variant}")

    if loop_code not in full_code:
        l.warning("Couldn't find loop code in full code")
        return u.Status(False, 'INSTRUMENTER')
    loop_start_idx = full_code.find(loop_code)
    before_loop = full_code[:loop_start_idx]
    after_loop = full_code[loop_start_idx:]

    loop_mark = "/* __IPROTON_LOOP_START__ */"
    loop_marked_code = before_loop + loop_mark + after_loop

    # res = add_braces(loop_marked_code)
    # if res.result is None:
    #     l.error(f"Failed to add braces: {res.failure_reason}")
    #     return u.Status(False, res.failure_reason)
    # braced_code = res.result
    res = brace_control_bodies(loop_marked_code)
    braced_code = res if res else loop_marked_code

    loop_start_idx = braced_code.find(loop_mark)
    if loop_start_idx == -1:
        l.error("Couldn't find loop start marker after bracing")
        return u.Status(False, 'INSTRUMENTER')
    before_loop = braced_code[:loop_start_idx]
    after_loop = braced_code[loop_start_idx:]

    if loop_type == "WhileStmt":
        kw = "while"
    elif loop_type == "ForStmt":
        kw = "for"
    elif loop_type == "DoStmt":
        kw = "do"
    else:
        l.warning(f"Unknown loop type: {loop_type}")
        return u.Status(False, 'INSTRUMENTER')
    
    kw_idx = after_loop.find(kw)
    if kw_idx < 0:
        l.warning("Loop keyword not found after init insertion")
        return u.Status(False, 'INSTRUMENTER')
    
    cond_start = loop_start_idx + kw_idx
    assume_loop_cond = f"__CPROVER_assume({extract_loop_condition(braced_code, loop_type, cond_start)});"
    if loop_type != "ForStmt":
        code_with_init = (
        before_loop
        + assume_init + "\n"
        # + "    " + assume_loop_cond + "\n"
        + "    " + var_init + "\n"
        + after_loop
    )
    else:
        code_with_init = (
        before_loop
        # + assume_init + "\n"
        # + "    " + assume_loop_cond + "\n"
        + var_init + "\n"
        + after_loop
    )

    if loop_type == "WhileStmt":
        loop_kwd_start = code_with_init.find("while", loop_start_idx)
    elif loop_type == "ForStmt":
        loop_kwd_start = code_with_init.find("for", loop_start_idx)
    elif loop_type == "DoStmt":
        loop_kwd_start = code_with_init.find("do", loop_start_idx)
    else:
        l.warning(f"Unknown loop type: {loop_type}")
        return u.Status(False, 'INSTRUMENTER')

    if loop_kwd_start == -1:
        l.warning("Loop keyword not found after bracing and init insertion")
        return u.Status(False, 'INSTRUMENTER')

    body_start_index = code_with_init.find("{", loop_kwd_start)
    if body_start_index == -1:
        l.warning("Opening brace '{' not found after loop keyword")
        return u.Status(False, 'INSTRUMENTER')

    body_start_index += 1
    before_body_start = code_with_init[:body_start_index]
    after_body_start = code_with_init[body_start_index:]
    instrumented_code = before_body_start + var_assert + after_body_start

    instrumented_code = (
        "/* Instrumented for llm-ter-check */\n"
        + instrumented_code
    )

    # Write instrumented C code
    c_fpath = os.path.join(c.TMP_PATH, c.TEST_C_FNAME)
    with open(c_fpath, 'w') as f:
        f.write(instrumented_code)

    l.info(f"Instrumented C code written to: {c_fpath}")
    l.debug(f"===== Instrumented C Code =====\n{instrumented_code}\n===== End Instrumented C Code =====")
    return instrumented_code

def validate_cbmc(loop_data):
    """
    Validate variant in loop_data via CBMC.

    Returns: Status that is true if validation succeeded. Failure reasons may be:
    INSTRUMENTER - Instrumenter for adding asserts for validation failed.
    CBMC_ASSERT  - CBMC detected assertion violation
    CBMC_TIMEOUT - CBMC timed out
    CBMC_ERROR   - CBMC threw an error
    """
    instrumented_code = get_instrumented_code(loop_data)
    c_fpath = os.path.join(c.TMP_PATH, c.TEST_C_FNAME)

    # Prepare CBMC call
    cbmc_args = [
        'cbmc',
        '--unwind', str(c.CBMC_NUM_UNWIND),
        '--z3',
        '--trace', # not producing counter-example, 
        # '--verbosity', '10', # machine step-by-step
        c_fpath,
    ]
    l.info(f"Running CBMC with arguments: {cbmc_args}")

    try :
        ret = subprocess.run(
            cbmc_args,
            check = False,
            timeout = c.CBMC_TIMEOUT,
            capture_output = True,
            text = True,
        )
    except subprocess.TimeoutExpired as e:
        l.warning("CBMC execution timed out")
        return u.Status(False, 'CBMC_TIMEOUT') if not c.CBMC_TO_CONSIDER_TERM else u.Status(True, None)

    # Full logging of outputs
    l.info(f"CBMC return code: {ret.returncode}")
    l.debug(f"===== CBMC STDOUT =====\n{ret.stdout}\n===== End CBMC STDOUT =====")
    l.debug(f"===== CBMC STDERR =====\n{ret.stderr}\n===== End CBMC STDERR =====")

    # Check DEC assertion
    res_idx = ret.stdout.find(c.CBMC_DEC_ASSERT)
    if res_idx == -1:
        l.error("CBMC DEC_ASSERT marker not found in output")
        return u.Status(False, 'CBMC_ERROR')

    line_end_idx = ret.stdout.find('\n', res_idx)
    dec_result_line = ret.stdout[res_idx:line_end_idx]
    l.info(f"DEC assertion result line: {dec_result_line}")
    dec_passed = c.CBMC_RES_PASS in dec_result_line

    if dec_passed:
        l.info("DEC check passed")
    elif c.CBMC_RES_FAIL in dec_result_line:
        l.warning("DEC check failed")
        counter_example = extract_dec_error_trace(ret.stdout, c.CBMC_DEC_ASSERT)
        failed_dec_obj = f"Failed to prove {loop_data.variant} < oldVal holds for every step of loop for previously generated loop variant {loop_data.variant}. Counter example trace found: {counter_example}"
        return u.Status(False, 'CBMC_ASSERT', failed_dec_obj)
    else:
        l.error(f"Unexpected DEC result line: {dec_result_line}")
        counter_example = extract_dec_error_trace(ret.stdout, c.CBMC_DEC_ASSERT)
        failed_dec_obj = f"Failed to prove {loop_data.variant} < oldVal holds for every step of loop for previously generated loop variant {loop_data.variant}. Counter example trace found: {counter_example}"
        return u.Status(False, 'CBMC_ERROR', failed_dec_obj)

    # Check POS assertion
    res_idx = ret.stdout.find(c.CBMC_POS_ASSERT)
    if res_idx == -1:
        l.error("CBMC POS_ASSERT marker not found in output")
        return u.Status(False, 'CBMC_ERROR', ret.stdout)

    line_end_idx = ret.stdout.find('\n', res_idx)
    pos_result_line = ret.stdout[res_idx:line_end_idx]
    l.info(f"POS assertion result line: {pos_result_line}")
    pos_passed = c.CBMC_RES_PASS in pos_result_line

    if pos_passed:
        l.info("POS check passed")
    elif c.CBMC_RES_FAIL in pos_result_line:
        l.warning("POS check failed")
        counter_example = extract_dec_error_trace(ret.stdout, c.CBMC_POS_ASSERT)
        failed_pos_obj = f"Failed to prove {loop_data.variant} >= 0 holds for every step of loop for previously generated loop variant {loop_data.variant}. Counter example trace found: {counter_example}"
        return u.Status(False, 'CBMC_ASSERT', failed_pos_obj)
    else:
        l.error(f"Unexpected POS result line: {pos_result_line}")
        counter_example = extract_dec_error_trace(ret.stdout, c.CBMC_POS_ASSERT)
        failed_pos_obj = f"Failed to prove {loop_data.variant} >= 0 holds for every step of loop for previously generated loop variant {loop_data.variant}. Counter example trace found: {counter_example}"
        return u.Status(False, 'CBMC_ERROR', failed_pos_obj)
    
    if pos_passed and dec_passed:
        return u.Status(True, None)

    # General CBMC error handling
    if ret.returncode != 0:
        l.error(
            f"CBMC returned non-zero exit code: {ret.returncode}\n"
            f"STDOUT:\n{ret.stdout}\n"
            f"STDERR:\n{ret.stderr}"
        )
        return u.Status(False, 'CBMC_ERROR')

    return u.Status(True, None)

def validate( loop_data ):
    """ Perform validation steps. see validate_* methods above """

    # if c.DO_TESTS:
    #     ret = validate_test( loop_data )
    #     if not ret.success:
    #         return ret

    if c.DO_CBMC:
        ret = validate_cbmc( loop_data )
        if not ret.success:
            return ret

    return u.Status( True, None )


if __name__ == '__main__':
    if c.DEBUG:

        u.init_logging()
        
        loop_data = u.LoopData(
            full_code="""






extern void abort(void);

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

void reach_error() { ((void) sizeof ((0) ? 1 : 0), __extension__ ({ if (0) ; else __assert_fail ("0", "simple_array_index_value_1-2.c", 7, __extension__ __PRETTY_FUNCTION__); })); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond)
{
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

unsigned int __VERIFIER_nondet_uint();

int main()
{
  unsigned int array[10000];
  unsigned int index = 0;
  unsigned int tmp = 0;

  while (1) {
    index = __VERIFIER_nondet_uint();
    if (index >= 10000) {
      break;
    }
    array[index] = index;
    tmp = index;
  }

  __VERIFIER_assert(tmp < 10000 && array[tmp] == tmp);


}
            """, 
            loop_code = """while (1) {
    index = __VERIFIER_nondet_uint();
    if (index >= 10000) {
      break;
    }
    array[index] = index;
    tmp = index;
  }""",
            loop_id=' 0 ', 
            loop_type='WhileStmt', 
            beg_line='26', 
            end_line='26', 
            variant='10000 - index', 
            invariant='0 <= index AND index <= 10000', 
            assigns='index',
        )

        validate( loop_data ) 
