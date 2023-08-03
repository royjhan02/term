#include <stdio.h>
extern void abort(void);

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

void reach_error() { ((void) sizeof ((0) ? 1 : 0), __extension__ ({ if (0) ; else __assert_fail ("0", "data_structures_set_multi_proc_trivial_ground.c", 3, __extension__ __PRETTY_FUNCTION__); })); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

int insert( int set [] , int size , int value ) {
  set[ size ] = value;
  return size + 1;
}
int elem_exists( int set [ ] , int size , int value ) {
  int i;
  for ( i = 0 ; i < size ; i++ ) {printf("DirNT State @ line22: <");printf("i=%d,",i);printf(">\n");
    if ( set[ i ] == value ) return 1;
  }
  return 0;
}
int main( ) {
  int n = 0;
  int set[ 100000 ];
  int x;
  int y;
	
	for (x = 0; x < 100000; x++)
	{printf("DirNT State @ line34: <");printf("n=%d,",n);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
	  set[x] = __VERIFIER_nondet_int();
	}
	
  
	for ( x = 0 ; x < n ; x++ ) {printf("DirNT State @ line39: <");printf("n=%d,",n);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
    for ( y = x + 1 ; y < n ; y++ ) {printf("DirNT State @ line40: <");printf("n=%d,",n);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
      __VERIFIER_assert( set[ x ] != set[ y ] );
    }
  }
  int values[ 100000 ];
  int v;
	
	for (v = 0; v < 100000; v++)
	{printf("DirNT State @ line48: <");printf("n=%d,",n);printf("v=%d,",v);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
	  values[v] = __VERIFIER_nondet_int();
	}
  for ( v = 0 ; v < 100000 ; v++ ) {printf("DirNT State @ line51: <");printf("n=%d,",n);printf("v=%d,",v);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
    if ( elem_exists( set , n , values[ v ] ) ) {
      n = insert( set , n , values[ v ] );
    }
    for ( x = 0 ; x < n ; x++ ) {printf("DirNT State @ line55: <");printf("n=%d,",n);printf("v=%d,",v);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
      for ( y = x + 1 ; y < n ; y++ ) {printf("DirNT State @ line56: <");printf("n=%d,",n);printf("v=%d,",v);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
        __VERIFIER_assert( set[ x ] != set[ y ] );
      }
    }
  }
  for ( x = 0 ; x < n ; x++ ) {printf("DirNT State @ line61: <");printf("n=%d,",n);printf("v=%d,",v);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
    for ( y = x + 1 ; y < n ; y++ ) {printf("DirNT State @ line62: <");printf("n=%d,",n);printf("v=%d,",v);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
      __VERIFIER_assert( set[ x ] != set[ y ] );
    }
  }
  return 0;
}
