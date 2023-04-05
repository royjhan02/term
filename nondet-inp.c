int __real_nondet_int();

const int fixInp [BOUND] = {5, 6, 1, 2, 5, 4, 5, 5, 5};
//const int fixInp [BOUND] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
int detInp [BOUND];

// v1.v2.vk*
#if (1)
int __VERIFIER_nondet_int(void) // v1.v2....(vk*)
{
     static int counter = 0;

     static int __CONCRETE_INP = 0;

     static int i = 0;

     // __CONCRETE_INP  = __real_nondet_int();
     if (counter < BOUND) {
        __CONCRETE_INP  = fixInp[counter];
        counter++;
     }

     return __CONCRETE_INP ;
}
#elif (0)
int __VERIFIER_nondet_int(void) // (v1....vk)*
{
     static int counter = 0;

     static int __CONCRETE_INP = 0;

     static int inputs[BOUND];

     if (counter < BOUND) {
        __CONCRETE_INP  = __real_nondet_int();
        inputs[counter] = __CONCRETE_INP;
        counter++;
     }
     else {
        __CONCRETE_INP  = inputs[counter - BOUND];
        counter++;
        if (counter == BOUND+BOUND) counter = BOUND;
     }

     return __CONCRETE_INP ;
}
#else
int __VERIFIER_nondet_int(void) // v1(v2.v3.v4)*
{
     static int counter = 0;

     static int __CONCRETE_INP = 0;

     static int inputs[BOUND];

     if (counter < BOUND) {
        __CONCRETE_INP  = __real_nondet_int();
        if (counter == 1)  __CPROVER_assume (__CONCRETE_INP != 6);
        inputs[counter] = __CONCRETE_INP;
        counter++;
     }
     else {
        static int flag = 0;
        
        __CONCRETE_INP  = inputs[BOUND -1 -flag];

        flag ++; if (flag == 3) flag = 0;

        if (BOUND > 7) {
          __CPROVER_assume (__CONCRETE_INP != 6);
        }
     }

     return __CONCRETE_INP ;
}
#endif
