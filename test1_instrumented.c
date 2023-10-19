typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);
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

 __VERIFIER_reached_control(22, " ");
	if (y >= 0) { __VERIFIER_control_true(22, " ");

 __VERIFIER_reached_control(23, " ");
	for (int loopi, loopj;loopi<10;loopi++){printf("CBMC Instrumentation @ line23");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oarrayindex;static int oloopi;static int oloopj;static char * opc;static int ox;static int oy;if(pStored){__CPROVER_assert(!(oarrayindex==arrayindex && oloopi==loopi && oloopj==loopj && opc==pc && ox==x && oy==y),"recurrent state found");} if(flag){oarrayindex=arrayindex;oloopi=loopi;oloopj=loopj;opc=pc;ox=x;oy=y;pStored=myTrue;}  __VERIFIER_loop_head(23, " ");

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

	    __VERIFIER_reached_control(38, " ");
 while (x >= 0) {printf("CBMC Instrumentation @ line38");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oarrayindex;static char * opc;static int ox;static int oy;if(pStored){__CPROVER_assert(!(oarrayindex==arrayindex && opc==pc && ox==x && oy==y),"recurrent state found");} if(flag){oarrayindex=arrayindex;opc=pc;ox=x;oy=y;pStored=myTrue;}  __VERIFIER_loop_head(38, " ");

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
int ret;
int i;
	    __VERIFIER_reached_control(60, " ");
 while (a >= 0) {printf("CBMC Instrumentation @ line60");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int oi;static int om;static int oret;static float oyy;if(pStored){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && oi==i && om==m && oret==ret && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;oi=i;om=m;oret=ret;oyy=yy;pStored=myTrue;}  __VERIFIER_loop_head(60, " ");

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
		//h=(z[2]==0)?(a=1):(a=2);
		//(z[2]==0)?(a=1):(a=2);
		//(a==0)?(z[1]=1):(a=2);
		//(a==0)?(a=1):(z[2]=2);
		//ret = ret < z[i]?z[i]:ret;
		//ret = ret < z[i]?ret:ret;


	}
 __VERIFIER_reached_control(86, " ");

do
{printf("CBMC Instrumentation @ line86");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int oi;static int om;static int oret;static float oyy;if(pStored){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && oi==i && om==m && oret==ret && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;oi=i;om=m;oret=ret;oyy=yy;pStored=myTrue;}  __VERIFIER_loop_head(86, " ");

i=i+1;
}while(i>0);

return a;

}
