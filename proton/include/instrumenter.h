/**
 * Contains definitions for __VERIFIER_nondet_*(). Assumes RAND_MAX is 2^31 - 1.
 */

#include <stdlib.h>
#include <stdio.h>

int __VERIFIER_nondet_int() {
    return rand() & 1 ? rand() : -rand();
}

unsigned int __VERIFIER_nondet_uint() {
    union { int i; unsigned int ui; } int_uint;
    int_uint.i = __VERIFIER_nondet_int();
    return int_uint.ui;
}

float __VERIFIER_nondet_float() {
    union { int i; float f; } int_float;
    int_float.i = __VERIFIER_nondet_int();
    return int_float.f;
}

unsigned long __VERIFIER_nondet_ulong() {
    unsigned long low = __VERIFIER_nondet_uint();
    unsigned long high = __VERIFIER_nondet_uint();
    high = high << 32;
    return low | high;
}

double __VERIFIER_nondet_double() {
    union { unsigned long ul; double d; } ulong_double;
    ulong_double.ul = __VERIFIER_nondet_ulong();
    return ulong_double.d;
}

void __IPROTON_test( int cond ) {
    /** 
     * If cond is not true, exits with given code and prints message in stderr
     */
    if( !cond ) {
        fprintf( stderr, __IPROTON_TEST_FAILED_ERRMSG );
        exit( __IPROTON_TEST_FAILED_EXCODE );
}}
