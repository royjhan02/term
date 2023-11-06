typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);
#include <stdlib.h>
extern int __VERIFIER_nondet_int(void);

int main() {
  int i, j;
  int val;
  int length = __VERIFIER_nondet_int();
  { __VERIFIER_reached_control(8, " ");
if (length < 1 || length >= 2147483647 / sizeof(int)) { __VERIFIER_control_true(8, " ");
length = 1;}}
  int *arr = alloca(length*sizeof(int));
  { __VERIFIER_reached_control(10, " ");
if (!arr) { __VERIFIER_control_true(10, " ");
return 0;}}
  for (i=0; i<length; i++) {printf("ArrayNT State @ line11: Array Found\n");
    val = __VERIFIER_nondet_int();
    { __VERIFIER_reached_control(13, " ");
if (val < 0) { __VERIFIER_control_true(13, " ");

      val = 0;
    }}
    arr[i] = val;
  }
 myBool pStored0 = myFalse; __VERIFIER_reached_control(18, " ");
 for (j=0; j<length; j++) {printf("CBMC Instrumentation @ line18");myBool flag=__VERIFIER_nondet_myBool();static int * oarr;static int oarr_val;static int oi;static int oj;static int olength;static int oval;if(pStored0){__CPROVER_assert(!(oarr==arr && *oarr==*arr && oarr_val==*arr && oi==i && oj==j && olength==length && oval==val),"recurrent state found");} if(flag){oarr=arr;*oarr=*arr;oarr_val=*arr;oi=i;oj=j;olength=length;oval=val;pStored0=myTrue;}  __VERIFIER_loop_head(18, " ");

    while (arr[j] > 0) {printf("ArrayNT State @ line19: Array Found\n");
      arr[j]--;
    }
  }
  return 0;
}
