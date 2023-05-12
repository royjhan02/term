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
    int z=0;printf("DirNT State @ line14: <");printf("z=%d,",z);printf(">\n");
    x = 5;printf("DirNT State @ line15: <");printf("x=%d,",x);printf("z=%d,",z);printf(">\n");
    y = 1;printf("DirNT State @ line16: <");printf("x=%d,",x);printf("y=%d,",y);printf("z=%d,",z);printf(">\n");
	if (y >= 0) {
	    while (x >= 0) {printf("DirNT State @ line18: <");printf("x=%d,",x);printf("y=%d,",y);printf("z=%d,",z);printf(">\n");
		if (z<2)
		{
			z=z+1;printf("DirNT State @ line21: <");printf("x=%d,",x);printf("y=%d,",y);printf("z=%d,",z);printf(">\n");
		}
		else {
	    	     x = x - y;printf("DirNT State @ line24: <");printf("x=%d,",x);printf("y=%d,",y);printf("z=%d,",z);printf(">\n");
		}
	    }
    	}
	return 0;
}
