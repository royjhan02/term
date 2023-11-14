typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);

int main(int a, float b, char* funcp)
{
int h,m;
float yy;
	   myBool pStored0 = myFalse; __VERIFIER_reached_control(6, __func__);
 while (a >= 0) { __VERIFIER_loop_head(6, __func__);
printf("CBMC Instrumentation @ line6");myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored0){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored0=myTrue;} 
	    	a = a - b;
	}

	{ __VERIFIER_reached_control(10, __func__);
if (a>0)
		{ __VERIFIER_control_true(11, __func__);
h++;}

        else { __VERIFIER_control_false(13, __func__);
 __VERIFIER_reached_control(13, __func__);
if (a<0){ __VERIFIER_control_true(13, __func__);

		h--;}
        else { __VERIFIER_control_false(15, __func__);
 __VERIFIER_reached_control(15, __func__);
if (a==0)
		{ __VERIFIER_control_true(16, __func__);
h=0;}
	else	{ __VERIFIER_control_false(17, __func__);

		h=1;}}}}
		
	    




myBool pStored1 = myFalse; __VERIFIER_reached_control(27, __func__);

while (1)
        { __VERIFIER_loop_head(27, __func__);
printf("CBMC Instrumentation @ line27");myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored1){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored1=myTrue;} h++;}
myBool pStored2 = myFalse; __VERIFIER_reached_control(30, __func__);

while (1)
	{ __VERIFIER_loop_head(30, __func__);
printf("CBMC Instrumentation @ line30");myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored2){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored2=myTrue;} 
	{ __VERIFIER_reached_control(31, __func__);
if (h>0)
		{ __VERIFIER_control_true(32, __func__);
h=h+1;}}
	h=h-1;	
}
myBool pStored3 = myFalse; __VERIFIER_reached_control(37, __func__);

for (h=0;h<10;h++)
	{ __VERIFIER_loop_head(37, __func__);
printf("CBMC Instrumentation @ line37");myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored3){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored3=myTrue;} h--;}myBool pStored4 = myFalse; __VERIFIER_reached_control(39, __func__);

for (h=0;h<10;h++)
	{ __VERIFIER_loop_head(39, __func__);
printf("CBMC Instrumentation @ line39");myBool flag=__VERIFIER_nondet_myBool();static int oa;static float ob;static char * ofuncp;static int oh;static int om;static float oyy;if(pStored4){__CPROVER_assert(!(oa==a && ob==b && ofuncp==funcp && oh==h && om==m && oyy==yy),"recurrent state found");} if(flag){oa=a;ob=b;ofuncp=funcp;oh=h;om=m;oyy=yy;pStored4=myTrue;} yy
=(float) yy;}

return a;

}
