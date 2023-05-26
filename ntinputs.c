// TO CONSTRAIN THE VALUES OF INPUTS

#ifdef __BOUND_INP
#define __RBOUND(i, val1, val2) (__CPROVER_assume(((i) >=  val1) && ((i) <= val2)))
#define __UBOUND(i, val) (__CPROVER_assume((i) <= val))
#define __LBOUND(i, val) (__CPROVER_assume((i) >= val))
#else
#define __RBOUND(i, val1, val2) 
#define __UBOUND(i, val) 
#define __LBOUND(i, val) 
#endif

// Standard types needed for inputs. Add more types and APIs as needed.
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;

// As long long is 8 bytes on both 32 and 64 bit, used it for int64 and loff
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
typedef long long int loff_t;

// As long is 8 bytes on 64 bit and 4 bytes on 32 bit, use it for size_t
typedef unsigned long int size_t;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;

typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef uint64_t u64;


typedef unsigned long sector_t;

#define REG1(typestr) {\
   static unsigned int n = 0;\
   static typestr retInp;\
   if (n < BOUND) {\
      typestr currInp;\
      retInp = currInp;\
      __CPROVER_input("__CONCRETE__"#typestr , retInp);\
      n++;\
   }\
   return retInp;\
}

/* Variables used in the routine */
char __VERIFIER_nondet_char(void) REG1(char)

char __VERIFIER_nondet_S8(){ return __VERIFIER_nondet_char(); }


unsigned char __VERIFIER_nondet_uchar(void) REG1(unsigned char)


unsigned char __VERIFIER_nondet_U8(void){ return  (unsigned char)__VERIFIER_nondet_uchar(); }

u8 __VERIFIER_nondet_u8(void){ return  (u8)__VERIFIER_nondet_uchar(); }

unsigned char __VERIFIER_nondet_unsigned_char(){ return  (unsigned char)__VERIFIER_nondet_uchar(); }

short __VERIFIER_nondet_short(void) REG1(short)

unsigned short __VERIFIER_nondet_ushort(void) REG1(unsigned short)

u16 __VERIFIER_nondet_u16(void){ return __VERIFIER_nondet_ushort(); }

int __VERIFIER_nondet_int(void) REG1(int)

unsigned int __VERIFIER_nondet_uint(void) REG1(unsigned)

unsigned int __VERIFIER_nondet_U32(){ return __VERIFIER_nondet_uint(); }

unsigned int __VERIFIER_nondet_u32(){ return (u32)__VERIFIER_nondet_uint(); }

unsigned __VERIFIER_nondet_unsigned(){ return (unsigned)__VERIFIER_nondet_uint(); }

long __VERIFIER_nondet_long(void) REG1(long)

unsigned long __VERIFIER_nondet_ulong() REG1(unsigned long)

double __VERIFIER_nondet_double() REG1(double)

float __VERIFIER_nondet_float() REG1(float)

_Bool __VERIFIER_nondet_bool(void) REG1(_Bool)

_Bool __VERIFIER_nondet__Bool(void) { return (_Bool)__VERIFIER_nondet_bool(); }

size_t __VERIFIER_nondet_size_t() REG1(size_t)

void * __VERIFIER_nondet_pointer() REG1(void *)

char * __VERIFIER_nondet_pchar(){ return (char *)__VERIFIER_nondet_pointer(); }

loff_t __VERIFIER_nondet_loff_t(){ return (loff_t)__VERIFIER_nondet_ulong(); }

sector_t __VERIFIER_nondet_sector_t(){ return (sector_t)__VERIFIER_nondet_ulong(); }

long long __VERIFIER_nondet_longlong(void) REG1(long long)

unsigned long long __VERIFIER_nondet_ulonglong() REG1(unsigned long long)

__int128 __VERIFIER_nondet_int128() REG1(long)

unsigned __int128 __VERIFIER_nondet_uint128() REG1(unsigned long)
