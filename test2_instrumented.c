typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);

int foo(int a, float b, char* funcp)
{
int h,m;
float yy;
	    __VERIFIER_reached_control(6, " ");
 while (a >= 0) {printf("CBMC Instrumentation @ line6");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored=myTrue;}  __VERIFIER_loop_head(6, " ");

	    	a = a - b;
	}

 __VERIFIER_reached_control(10, " ");
	if (a>0)
		h __VERIFIER_control_true(11, " ");
++;

        else __VERIFIER_reached_control(13, " ");
 if __VERIFIER_control_false(13, " ");
 (a<0){ __VERIFIER_control_true(13, " ");

		h--;}
        else __VERIFIER_reached_control(15, " ");
 if __VERIFIER_control_false(15, " ");
 (a==0)
		h __VERIFIER_control_true(16, " ");
=0;
	else
                h __VERIFIER_control_false(18, " ");
=1;

return a;

}
