/*
 * Date: 06/07/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);
int glob=0,bob=0;

int main()
{
    int x; double z;
    int y;
    x = 1;
    //x = __VERIFIER_nondet_int();
    y = 2;
    //y = __VERIFIER_nondet_int();
	if (y >= 0) {
	    while (x >= 0) {
	    	x = x - y;
    	}
	}
	for (x=0;x<10;)
	{
	x++;
	}
	return 0;
}
