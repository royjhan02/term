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
    x = 1111;
    //x = __VERIFIER_nondet_int();
    y = 0;
    //y = __VERIFIER_nondet_int();
	if (y >= 0) {
	    while (x >= 0) {
	    	x = x - y;
    	}
	}
	return 0;
}
