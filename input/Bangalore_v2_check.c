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
    int z=0;
    x = 5;
    y = 1;
	if (y >= 0) {
	    while (x >= 0) {
		if (z<2)
		{
			z=z+1;
		}
		else {
	    	     x = x - y;
		}
	    }
    	}
	return 0;
}
