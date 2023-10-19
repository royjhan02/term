typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);
// SPDX-FileCopyrightText: 2021 Y. Cyrus Liu <yliu195@stevens.edu>
//
// SPDX-License-Identifier: Apache-2.0

/*
 * Date: 2021-06-21
 * Author: yliu195@stevens.edu
 */


 
#include <stdio.h>

void displayBits(unsigned int value);
unsigned int number1= 65535;
int mask = 1;
unsigned int x;
int c = 1;
int y;
int main(void) {
  /* printf("%s", "Engter a nonnegative int:"); */
  /* scanf("%u", &x); */

  displayBits(mask);
  displayBits(number1);
  displayBits(number1 & mask);
  y= c+mask;
  return y;
}

void displayBits(unsigned int value) {
  unsigned int displayMask = 1<<31;
  printf("%10u = ", value); __VERIFIER_reached_control(35, " ");


  while (c<=32) {printf("CBMC Instrumentation @ line35");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oc;static unsigned int odisplayMask;static int omask;static unsigned int onumber1;static unsigned int ovalue;static unsigned int ox;static int oy;if(pStored){__CPROVER_assert(!(oc==c && odisplayMask==displayMask && omask==mask && onumber1==number1 && ovalue==value && ox==x && oy==y),"recurrent state found");} if(flag){oc=c;odisplayMask=displayMask;omask=mask;onumber1=number1;ovalue=value;ox=x;oy=y;pStored=myTrue;}  __VERIFIER_loop_head(35, " ");

    putchar(value & displayMask ? '1' : '0');
    value <<=1;  //shift left by 1
    if (c % 8 == 0) {
      putchar(' ');
    }
    mask = mask & 1;
    c=c+mask;
  }
  putchar('\n');

}
