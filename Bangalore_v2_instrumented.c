#include <stdio.h>
/*
 * Date: 06/07/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int x;
    int y;
    x = 1111;printf("DirNT State @ line14: <");printf("x=%d,",x);printf(">\n");
    //x = __VERIFIER_nondet_int();
    y = 0;printf("DirNT State @ line16: <");printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
    //y = __VERIFIER_nondet_int();
	if (y >= 0) {
	    while (x >= 0) {
	    	x = x - y;printf("DirNT State @ line20: <");printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
    	}
	}
	return 0;
}
