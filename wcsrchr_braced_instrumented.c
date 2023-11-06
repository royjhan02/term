typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);
#include <stddef.h>
#include <stdlib.h>
#include <alloca.h>

#define __unlikely(x) (x)
#define __likely(x) (x)
#define wchar_t int

extern int __VERIFIER_nondet_int(void);

wchar_t* wcsrchr(const wchar_t *wcs, wchar_t wc) {
  wchar_t* last=0;
 myBool pStored0 = myFalse; __VERIFIER_reached_control(14, " ");
 for (; *wcs; ++wcs)
    {printf("CBMC Instrumentation @ line14");myBool flag=__VERIFIER_nondet_myBool();static int owc;if(pStored0){__CPROVER_assert(!(owc==wc),"recurrent state found");} if(flag){owc=wc;pStored0=myTrue;}  __VERIFIER_loop_head(14, " ");
{ __VERIFIER_reached_control(14, " ");
if (*wcs == wc)
      { __VERIFIER_control_true(15, " ");
last=(wchar_t*)wcs;}}}
  return last;
}


int main(){
  int in_len = __VERIFIER_nondet_int();
  { __VERIFIER_reached_control(22, " ");
if(in_len < 1){ __VERIFIER_control_true(22, " ");
return 1;}}
  wchar_t* hay = alloca(in_len*sizeof(wchar_t));
  hay[in_len-1]=0;
  wchar_t needle = __VERIFIER_nondet_int();
  return (int) wcsrchr(hay, needle);
}
