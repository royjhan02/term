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
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();

	if (y >= 0) {
	    while (x >= 0) {printf("DirNT State @ line18: <");printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
	    	x = x - y;
    	}
	}
	return 0;
}
