#!/bin/bash

# Use the find command to locate all files with the pattern *_instrumented.c
# Then, use the rm command to remove each of these files
find . -type f -name '*_instrumented.c' -exec rm {} \;
find . -type f -name '*_braced.c' -exec rm {} \;
find . -type f -name '*.o' -exec rm {} \;
