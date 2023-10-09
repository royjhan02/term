typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
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
    float array[10];
    int arrayindex=2;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();

	if (y >= 0) {
	for (int loopi, loopj;loopi<10;loopi++){printf("CBMC Instrumentation @ line21");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oarrayindex;static int oloopi;static int oloopj;static int ox;static int oy;if(pStored){__CPROVER_assert(!(oarrayindex==arrayindex && oloopi==loopi && oloopj==loopj && ox==x && oy==y),"recurrent state found");} if(flag){oarrayindex=arrayindex;oloopi=loopi;oloopj=loopj;ox=x;oy=y;pStored=myTrue;}
		x=loopi;
		}

	    while (x >= 0) {printf("ArrayNT State @ line25: Array Found\n");
	    	x = x - y;
		array[5]=1;
    	}
	}

	for (int loopi, loopj;loopi<10;loopi++){printf("ArrayNT State @ line31: Array Found\n");
		x=loopi;
		array[arrayindex]=1;
		}

	    while (x >= 0) {printf("CBMC Instrumentation @ line36");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oarrayindex;static int ox;static int oy;if(pStored){__CPROVER_assert(!(oarrayindex==arrayindex && ox==x && oy==y),"recurrent state found");} if(flag){oarrayindex=arrayindex;ox=x;oy=y;pStored=myTrue;}
	    	x = x - y;
	}


	    while (x >= 0) {printf("ArrayNT State @ line41: Array Found\n");
	    	x = x - y;
		array[arrayindex]=array[3];
		x=array[arrayindex];
	}

	return 0;
}


int foo(int a, float b)
{
int h,m;
float yy;
	    while (a >= 0) {printf("CBMC Instrumentation @ line55");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static int oh;static int om;static float oyy;if(pStored){__CPROVER_assert(!(oa==a && ob==b && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;oh=h;om=m;oyy=yy;pStored=myTrue;}
	    	a = a - b;
	}

return a;

}
