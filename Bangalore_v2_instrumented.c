typedef enum {myFalse, myTrue} myBool;
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
	    while (x >= 0) {printf("CBMC Instrumentation @ line18");static bool pStored = myFalse;_Bool flag=__VERIFIER_nondet_bool();static int ox;static int oy;if(pStored){__CPROVER_assert(!(ox==x && oy==y),"recurrent state found");} if(flag){ox=x;oy=y;pStored=myTrue;}
	    	x = x - y;
    	}
	}
	return 0;
}
