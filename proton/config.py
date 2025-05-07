""" Config """
import os
from os import path


## Various paths
class Config:
    
    # All paths should be relatvie to project root
    LOG_PATH = 'logs/'
    TMP_PATH = 'tmp/'
    INSTRUMENTER_PATH = 'bin/instrumenter'   
    BRACER_PATH = 'bin/bracer'   
    BRACER_IN_FNAME = 'code.c'
    BRACER_OUT_FNAME = 'code_braced.c'
    TEST_C_FNAME = 'test.c'
    TEST_BIN_FNAME = 'test'
    INCLUDES_DIR = 'include/'
    INSTR_HEADER = 'instrumenter.h'

    # Loop extraction settings
    IGNORE_EXTRACTOR_RET_CODE = True    # Ignore return code from instrumenter bin

    # Generation settings
    LLAMA_CONTEXT_SIZE = 2048
    OPENAI_CONTEXT_SIZE = 16000
    MAX_NEW_TOKENS = 64
    N_THREADS = 1
    
    # Model settings
    MODEL_TYPE = "openai"  # "llama" or "openai"
    OPENAI_MODEL = "o3-mini"  # Only used if MODEL_TYPE is "openai"
    OPENAI_API_KEY = "KtwL2VARfRuTTXPwZCw0tjngGyeXkplM"  # Set this to your API key if using OpenAI
    OPENAI_API_BASE = "https://go.apis.huit.harvard.edu/ais-openai-direct-limited-schools/v1"  # Harvard OpenAI API endpoint
    # Prompting settings
    PROMPT = 'lib_prompt_co_inv_assigns_variant_2'

    # Settings for validation via testing -- deprecated
    DO_TESTS = False               
    NUM_RUNS = 60
    RUN_TIMEOUT = 1
    TEST_FAILED_EXCODE = 22             # Exit code for when test failed
    TEST_FAILED_ERRMSG = "TEST FAILED"  # Error message for when test failed
    TEST_TO_CONSIDER_TERM = True        # Consider timeout as evidence for termiation
    
    # Settings for cbmc 
    DO_CBMC = True 
    CBMC_NUM_UNWIND = 3                # Number of unwinds to use
    CBMC_TIMEOUT = 30
    CBMC_TO_CONSIDER_TERM = True       # If true, say Terminating if cbmc tos.
    CBMC_DEC_ASSERT = "IPROTON_VAR_DEC" # Variant is decreasing
    CBMC_POS_ASSERT = "IPROTON_VAR_POS" # Variant is decreasing
    CBMC_RES_PASS = 'SUCCESS'           # What cbmc says on failure / pass 
    CBMC_RES_FAIL = 'ERROR' 

    DEBUG = True
    ASSERTS = True

    
 

