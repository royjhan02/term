typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
/*
 * Date: 06/07/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);


int main()
{

    char *pc;
    int x;
    int y;
    float array[10];
    int arrayindex=2;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();

	if (y >= 0) {
	for (int loopi, loopj;loopi<10;loopi++){printf("CBMC Instrumentation @ line23");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oarrayindex;static int oloopi;static int oloopj;static char * opc;static int ox;static int oy;if(pStored){__CPROVER_assert(!(oarrayindex==arrayindex && oloopi==loopi && oloopj==loopj && opc==pc && ox==x && oy==y),"recurrent state found");} if(flag){oarrayindex=arrayindex;oloopi=loopi;oloopj=loopj;opc=pc;ox=x;oy=y;pStored=myTrue;}
		x=loopi;
		}

	    while (x >= 0) {printf("ArrayNT State @ line27: Array Found\n");
	    	x = x - y;
		array[5]=1;
    	}
	}

	for (int loopi, loopj;loopi<10;loopi++){printf("ArrayNT State @ line33: Array Found\n");
		x=loopi;
		array[arrayindex]=1;
		}

	    while (x >= 0) {printf("CBMC Instrumentation @ line38");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oarrayindex;static char * opc;static int ox;static int oy;if(pStored){__CPROVER_assert(!(oarrayindex==arrayindex && opc==pc && ox==x && oy==y),"recurrent state found");} if(flag){oarrayindex=arrayindex;opc=pc;ox=x;oy=y;pStored=myTrue;}
	    	x = x - y;
	}


	    while (x >= 0) {printf("ArrayNT State @ line43: Array Found\n");
	    	x = x - y;
		array[arrayindex]=array[3];
		x=array[arrayindex];
	}

	return 0;
}


int foo(int a, float b, char* funcp)
{
int h,m;
float yy;
int z[10];
	    while (a >= 0) {printf("CBMC Instrumentation @ line58");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored=myTrue;}
	    	a = a - b;
		//b = a + b + z[1];
		//b=-z[1];	
		//b=z[1]++;
		//b=a+z[2]++;
		//b=-z[1]+a;	
		//b=a-(z[1]++);
		//b=++z[1];
		//b=(z[1]++);
		//z[1]=b;
		//b=z[1];
		//b=a+z[1]-z[2]++;
		//b=z[1]+a;
		//b=a+b+z[2]+a;
	}

return a;

}
