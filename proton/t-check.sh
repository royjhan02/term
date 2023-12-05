#!/bin/bash
# tool

# TODO --- get the architecture from the command line
echo UNWIND=2  $TOOL_DIR/$WITNESS_FILE
echo cbmc --graphml-witness $TOOL_DIR/$WITNESS_FILE  --$BIT_WIDTH --unwind 2 --no-self-loops-to-assumptions --unwinding-assertions --no-built-in-assertions --no-assertions --stop-on-fail --object-bits 16 --z3 $1
cbmc  --graphml-witness $TOOL_DIR/$WITNESS_FILE   --$BIT_WIDTH --unwind 2 --no-self-loops-to-assumptions --unwinding-assertions --no-built-in-assertions --no-assertions --stop-on-fail --object-bits 16 --z3 $1
RV=$?

if [ $RV -ne 10 ] #some thing other than unwind assertion failure
then
   echo $1 ERROREXIT $RV AT UNWIND 2 SOUNDCHECK
   exit $RV
fi

for UW in 9 17 41 200 2049 20490
do
   echo UNWIND=$UW
   # TODO --- get the architecture from the command line
   echo cbmc --graphml-witness $TOOL_DIR/$WITNESS_FILE --$BIT_WIDTH --unwind $UW --no-self-loops-to-assumptions --unwinding-assertions --no-built-in-assertions --no-assertions --stop-on-fail --object-bits 16 --z3 $1 $TOOL_DIR/tinputs.c # tinputs constrains int variable ranges
   cbmc  --graphml-witness $TOOL_DIR/$WITNESS_FILE  --$BIT_WIDTH --unwind $UW --no-self-loops-to-assumptions --unwinding-assertions --no-built-in-assertions --no-assertions --stop-on-fail --object-bits 16 --z3 $1 $TOOL_DIR/tinputs.c # tinputs constrains int variable ranges
   RV=$?

   if [ $RV -ne 10 ] #some thing other than unwind assertion failure
   then
      echo $1 ERROREXIT $RV AT UNWIND $UW
      exit $RV
   fi
done

echo $1 DOES NOT TERMINATE UPTO UNWIND $UW
exit 10
