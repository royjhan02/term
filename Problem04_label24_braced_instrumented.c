typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);
extern void __VERIFIER_reached_control(int, char const *);
extern void __VERIFIER_loop_head(int, char const *);
extern void __VERIFIER_control_true(int, char const *);
extern void __VERIFIER_control_false(int, char const *);
// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2014-2020 The SV-Benchmarks Community
// SPDX-FileCopyrightText: 2012 The RERS Challenge <https://www.rers-challenge.org>
//
// SPDX-License-Identifier: Apache-2.0

int calculate_output(int);
int calculate_output2(int);
int calculate_output3(int);
int calculate_output4(int);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Problem04_label24.c", 7, "reach_error"); }
extern int __VERIFIER_nondet_int(void);
extern void exit(int);

	// inputs
	int f= 6;
	int e= 5;
	int d= 4;
	int b= 2;
	int a= 1;
	int c= 3;

	// outputs
	int u = 21;
	int v = 22;
	int w = 23;
	int x = 24;
	int y = 25;
	int z = 26;


	int a3 = 1;
	int a4 = 17;
	int a25 = 1;
	int a1 = 1;
	int a26 = 18;
	int a28 = 15;
	int a7 = 1;
	int a14 = 19;

	int calculate_output2(int input);
	int calculate_output3(int input);
	int calculate_output4(int input);

	int calculate_output(int input) {
	    { __VERIFIER_reached_control(50, " ");
if((((a25==1)&&((a1==1)&&((input==5)&&((((((a4==17)&&(a26==19))&&(a28==17))&&!(a7==1))&&(a14==20))||(((a7==1)&&(((a26==17)&&(a4==18))&&(a28==15)))&&(a14==18))))))&&(a3==1))){ __VERIFIER_control_true(50, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(57, " ");
 __VERIFIER_reached_control(57, " ");
if((((a25==1)&&(((a28==16)&&((a4==17)&&((a1==1)&&(((((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))&&(input==4)))))&&!(a3==1)))&&(a14==20))){ __VERIFIER_control_true(57, " ");

	    	a26 = 19;
	    	a28 = 15;
	    	a7 = 0;
	    	return -1;
	    } else { __VERIFIER_control_false(62, " ");
 __VERIFIER_reached_control(62, " ");
if(((a28==17)&&((a1==1)&&((a25==1)&&((a7==1)&&((a4==17)&&(((a14==18)&&((input==4)&&((a26==17)||(a26==18))))&&!(a3==1)))))))){ __VERIFIER_control_true(62, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(68, " ");
 __VERIFIER_reached_control(68, " ");
if((!(a7==1)&&(!(a3==1)&&(((a28==16)&&((a25==1)&&((a4==17)&&((((a26==17)||(a26==18))&&(input==6))&&(a1==1)))))&&(a14==19))))){ __VERIFIER_control_true(68, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(76, " ");
 __VERIFIER_reached_control(76, " ");
if(((a28==16)&&((((a14==18)&&((!(a7==1)&&((a26==18)&&((a3==1)&&(input==1))))&&(a1==1)))&&(a25==1))&&(a4==18)))){ __VERIFIER_control_true(76, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(82, " ");
 __VERIFIER_reached_control(82, " ");
if((!(a3==1)&&((a28==17)&&((a25==1)&&((((input==5)&&((((a14==18)&&((a26==19)&&!(a7==1)))||((a14==19)&&((a7==1)&&(a26==17))))||((a14==19)&&((a26==18)&&(a7==1)))))&&(a4==17))&&(a1==1)))))){ __VERIFIER_control_true(82, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(90, " ");
 __VERIFIER_reached_control(90, " ");
if(((a1==1)&&((a26==17)&&((a4==18)&&(!(a7==1)&&((((a25==1)&&((input==3)&&(a28==15)))&&(a3==1))&&(a14==20))))))){ __VERIFIER_control_true(90, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(95, " ");
 __VERIFIER_reached_control(95, " ");
if(((((((a1==1)&&(((a14==20)&&((input==2)&&(a26==17)))&&!(a7==1)))&&(a28==15))&&(a25==1))&&(a4==17))&&!(a3==1))){ __VERIFIER_control_true(95, " ");

	    	a7 = 1;
	    	a28 = 17;
	    	a4 = 16;
	    	a14 = 19;
	    	a26 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(102, " ");
 __VERIFIER_reached_control(102, " ");
if(((a28==17)&&((a4==17)&&((a25==1)&&((a3==1)&&((a14==20)&&((a1==1)&&((input==6)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||(!(a7==1)&&(a26==18))))))))))){ __VERIFIER_control_true(102, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(109, " ");
 __VERIFIER_reached_control(109, " ");
if(((((a4==17)&&((((((!(a7==1)&&(a26==19))&&(a14==19))||((a14==20)&&((a7==1)&&(a26==17))))&&(input==3))&&(a28==15))&&(a25==1)))&&(a3==1))&&(a1==1))){ __VERIFIER_control_true(109, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(115, " ");
 __VERIFIER_reached_control(115, " ");
if((((a28==16)&&((!(a7==1)&&((a1==1)&&((a4==17)&&((((a26==18)||(a26==19))&&(input==5))&&!(a3==1)))))&&(a14==18)))&&(a25==1))){ __VERIFIER_control_true(115, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(122, " ");
 __VERIFIER_reached_control(122, " ");
if(((a25==1)&&(((a1==1)&&(((a7==1)&&((((input==2)&&(a4==17))&&(a28==15))&&(a3==1)))&&(a26==18)))&&(a14==19)))){ __VERIFIER_control_true(122, " ");

	    	a26 = 17;
	    	a14 = 20;
	    	return 24;
	    } else { __VERIFIER_control_false(126, " ");
 __VERIFIER_reached_control(126, " ");
if((((a26==18)&&((a7==1)&&((a28==16)&&(((((a25==1)&&(input==2))&&(a4==18))&&(a14==19))&&(a1==1)))))&&!(a3==1))){ __VERIFIER_control_true(126, " ");

	    	a7 = 0;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(131, " ");
 __VERIFIER_reached_control(131, " ");
if(((a4==18)&&((a7==1)&&(!(a3==1)&&((a14==19)&&(((a1==1)&&((a28==16)&&((input==1)&&(a26==18))))&&(a25==1))))))){ __VERIFIER_control_true(131, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a7 = 0;
	    	a4 = 16;
	    	a14 = 20;
	    	return -1;
	    } else { __VERIFIER_control_false(138, " ");
 __VERIFIER_reached_control(138, " ");
if(((a25==1)&&(!(a3==1)&&((a28==16)&&(((((input==3)&&((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))))&&(a14==20))&&(a1==1))&&(a4==17)))))){ __VERIFIER_control_true(138, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(146, " ");
 __VERIFIER_reached_control(146, " ");
if(((a4==17)&&((a25==1)&&((a14==20)&&(((!(a3==1)&&((input==5)&&((((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1)))))&&(a1==1))&&(a28==16)))))){ __VERIFIER_control_true(146, " ");

	    	a26 = 18;
	    	a28 = 15;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(151, " ");
 __VERIFIER_reached_control(151, " ");
if(((((((((a7==1)&&(((a26==19)||((a26==17)||(a26==18)))&&(input==5)))&&(a1==1))&&!(a3==1))&&(a25==1))&&(a14==20))&&(a4==18))&&(a28==15))){ __VERIFIER_control_true(151, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(157, " ");
 __VERIFIER_reached_control(157, " ");
if((((a26==19)&&((a7==1)&&(((((a14==18)&&((input==4)&&(a1==1)))&&!(a3==1))&&(a25==1))&&(a28==15))))&&(a4==16))){ __VERIFIER_control_true(157, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(161, " ");
 __VERIFIER_reached_control(161, " ");
if(((a26==18)&&(((a28==15)&&((a7==1)&&((a25==1)&&(((a4==17)&&((a14==19)&&(input==6)))&&(a3==1)))))&&(a1==1)))){ __VERIFIER_control_true(161, " ");

	    	a7 = 0;
	    	a26 = 17;
	    	return 21;
	    } else { __VERIFIER_control_false(165, " ");
 __VERIFIER_reached_control(165, " ");
if((((a14==20)&&(((a28==15)&&((((a4==17)&&((input==5)&&(a3==1)))&&(a26==19))&&(a25==1)))&&(a1==1)))&&(a7==1))){ __VERIFIER_control_true(165, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(170, " ");
 __VERIFIER_reached_control(170, " ");
if((((a1==1)&&(((((a14==19)&&((input==4)&&(((a26==18)&&!(a7==1))||(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))))&&(a28==16))&&(a4==16))&&(a25==1)))&&!(a3==1))){ __VERIFIER_control_true(170, " ");

	    	a26 = 18;
	    	a14 = 20;
	    	a7 = 0;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(176, " ");
 __VERIFIER_reached_control(176, " ");
if(((a28==17)&&(((a3==1)&&((a25==1)&&((a4==18)&&((input==1)&&((((a26==19)&&!(a7==1))&&(a14==19))||(((a26==17)&&(a7==1))&&(a14==20)))))))&&(a1==1)))){ __VERIFIER_control_true(176, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(183, " ");
 __VERIFIER_reached_control(183, " ");
if(((!(a7==1)&&(((!(a3==1)&&(((((a26==18)||(a26==19))&&(input==2))&&(a1==1))&&(a14==18)))&&(a25==1))&&(a4==16)))&&(a28==16))){ __VERIFIER_control_true(183, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(189, " ");
 __VERIFIER_reached_control(189, " ");
if((((a1==1)&&(((a14==20)&&(((a28==17)&&(((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||((a26==18)&&!(a7==1)))&&(input==3)))&&(a4==17)))&&(a3==1)))&&(a25==1))){ __VERIFIER_control_true(189, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 18;
	    	a7 = 1;
	    	return 22;
	    } else { __VERIFIER_control_false(195, " ");
 __VERIFIER_reached_control(195, " ");
if((((a25==1)&&((a28==16)&&(((a1==1)&&((((((a26==18)&&!(a7==1))&&(a14==19))||(((a26==19)&&!(a7==1))&&(a14==19)))||((a14==20)&&((a7==1)&&(a26==17))))&&(input==5)))&&(a3==1))))&&(a4==17))){ __VERIFIER_control_true(195, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(202, " ");
 __VERIFIER_reached_control(202, " ");
if(((a1==1)&&((a4==16)&&((((((((a26==17)||(a26==18))&&(input==3))&&(a28==16))&&(a7==1))&&(a25==1))&&!(a3==1))&&(a14==19))))){ __VERIFIER_control_true(202, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(208, " ");
 __VERIFIER_reached_control(208, " ");
if(((a4==16)&&((a25==1)&&((a28==17)&&((((a14==19)&&(((input==1)&&((a26==18)||(a26==19)))&&(a7==1)))&&!(a3==1))&&(a1==1)))))){ __VERIFIER_control_true(208, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(214, " ");
 __VERIFIER_reached_control(214, " ");
if(((a25==1)&&(((((a3==1)&&((((((a26==19)&&!(a7==1))&&(a14==19))||((a14==20)&&((a7==1)&&(a26==17))))||(((a7==1)&&(a26==18))&&(a14==20)))&&(input==3)))&&(a28==15))&&(a1==1))&&(a4==18)))){ __VERIFIER_control_true(214, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(220, " ");
 __VERIFIER_reached_control(220, " ");
if(((a28==16)&&((a3==1)&&((a14==19)&&((((a4==18)&&(!(a7==1)&&((input==5)&&((a26==18)||(a26==19)))))&&(a25==1))&&(a1==1)))))){ __VERIFIER_control_true(220, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(227, " ");
 __VERIFIER_reached_control(227, " ");
if(((!(a3==1)&&((((((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==2))&&(a4==17))&&(a25==1))&&(a28==15))&&(a14==19)))&&(a1==1))){ __VERIFIER_control_true(227, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(234, " ");
 __VERIFIER_reached_control(234, " ");
if(((((a28==17)&&(((((input==2)&&((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17))))&&(a14==18))&&(a25==1))&&(a4==18)))&&(a3==1))&&(a1==1))){ __VERIFIER_control_true(234, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(240, " ");
 __VERIFIER_reached_control(240, " ");
if((((((a3==1)&&(((a25==1)&&(((input==4)&&(a7==1))&&(a14==20)))&&(a1==1)))&&(a4==17))&&(a28==17))&&(a26==18))){ __VERIFIER_control_true(240, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(246, " ");
 __VERIFIER_reached_control(246, " ");
if(((a1==1)&&((a4==18)&&(((!(a7==1)&&((a14==19)&&(((input==5)&&((a26==17)||(a26==18)))&&(a25==1))))&&(a28==15))&&(a3==1))))){ __VERIFIER_control_true(246, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(252, " ");
 __VERIFIER_reached_control(252, " ");
if(((a25==1)&&((a4==18)&&((a1==1)&&((a28==16)&&((((input==2)&&((!(a7==1)&&(a26==18))||(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))))&&(a14==18))&&!(a3==1))))))){ __VERIFIER_control_true(252, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(259, " ");
 __VERIFIER_reached_control(259, " ");
if((((a4==18)&&(((a28==16)&&((a3==1)&&((a14==18)&&(((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))&&(input==2)))))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(259, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(265, " ");
 __VERIFIER_reached_control(265, " ");
if(((!(a7==1)&&((a28==16)&&((a25==1)&&((a1==1)&&(!(a3==1)&&(((input==5)&&(a14==19))&&(a26==18)))))))&&(a4==18))){ __VERIFIER_control_true(265, " ");

	    	a26 = 19;
	    	a7 = 1;
	    	a14 = 20;
	    	return 23;
	    } else { __VERIFIER_control_false(270, " ");
 __VERIFIER_reached_control(270, " ");
if(((((((a28==15)&&(((a1==1)&&((input==2)&&((a26==17)||(a26==18))))&&!(a3==1)))&&(a25==1))&&(a14==19))&&(a7==1))&&(a4==16))){ __VERIFIER_control_true(270, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(275, " ");
 __VERIFIER_reached_control(275, " ");
if(((((((!(a7==1)&&((a14==20)&&(((a26==17)||(a26==18))&&(input==6))))&&(a25==1))&&(a4==16))&&(a1==1))&&!(a3==1))&&(a28==15))){ __VERIFIER_control_true(275, " ");

	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(278, " ");
 __VERIFIER_reached_control(278, " ");
if(((a14==19)&&((a26==19)&&((a28==15)&&(((a4==16)&&(!(a3==1)&&(((a25==1)&&(input==2))&&!(a7==1))))&&(a1==1)))))){ __VERIFIER_control_true(278, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(284, " ");
 __VERIFIER_reached_control(284, " ");
if((((((a25==1)&&((a4==18)&&((((((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1)))&&(input==4))&&(a14==18))))&&(a28==17))&&(a3==1))&&(a1==1))){ __VERIFIER_control_true(284, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(290, " ");
 __VERIFIER_reached_control(290, " ");
if((((a28==16)&&((((a14==19)&&((((((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17)))&&(input==1))&&(a3==1)))&&(a25==1))&&(a1==1)))&&(a4==17))){ __VERIFIER_control_true(290, " ");

	    	a26 = 17;
	    	a4 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 20;
	    	return 22;
	    } else { __VERIFIER_control_false(297, " ");
 __VERIFIER_reached_control(297, " ");
if(((a25==1)&&((((((a28==15)&&(((input==6)&&(a14==19))&&(a26==18)))&&!(a7==1))&&(a4==17))&&(a1==1))&&!(a3==1)))){ __VERIFIER_control_true(297, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(304, " ");
 __VERIFIER_reached_control(304, " ");
if(((a3==1)&&(((((input==4)&&(((a14==18)&&((a7==1)&&((a26==17)&&(a28==16))))||(((a14==20)&&(((a26==18)&&(a28==15))&&!(a7==1)))||((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20)))))&&(a1==1))&&(a25==1))&&(a4==18)))){ __VERIFIER_control_true(304, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 0;
	    	a26 = 17;
	    	a14 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(312, " ");
 __VERIFIER_reached_control(312, " ");
if(((a14==20)&&((a25==1)&&(((a7==1)&&((((a4==16)&&((input==5)&&((a26==17)||(a26==18))))&&(a1==1))&&!(a3==1)))&&(a28==15))))){ __VERIFIER_control_true(312, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(317, " ");
 __VERIFIER_reached_control(317, " ");
if((!(a3==1)&&(((a25==1)&&((a28==17)&&(((input==5)&&(((a14==20)&&((a26==18)&&(a7==1)))||(((!(a7==1)&&(a26==19))&&(a14==19))||((a14==20)&&((a26==17)&&(a7==1))))))&&(a4==16))))&&(a1==1)))){ __VERIFIER_control_true(317, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(324, " ");
 __VERIFIER_reached_control(324, " ");
if(((a14==18)&&((a28==16)&&(((((!(a7==1)&&((input==6)&&((a26==18)||(a26==19))))&&(a4==16))&&!(a3==1))&&(a1==1))&&(a25==1))))){ __VERIFIER_control_true(324, " ");

	    	a26 = 18;
	    	a28 = 15;
	    	a14 = 20;
	    	return 26;
	    } else { __VERIFIER_control_false(329, " ");
 __VERIFIER_reached_control(329, " ");
if(((a4==18)&&((a26==17)&&((a25==1)&&((a1==1)&&((((a7==1)&&((a28==16)&&(input==6)))&&(a14==20))&&(a3==1))))))){ __VERIFIER_control_true(329, " ");

	    	a4 = 17;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(333, " ");
 __VERIFIER_reached_control(333, " ");
if((((a25==1)&&((a28==16)&&(!(a3==1)&&((a4==16)&&(((input==1)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))&&(a1==1))))))&&(a14==20))){ __VERIFIER_control_true(333, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 17;
	    	a14 = 19;
	    	a26 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(340, " ");
 __VERIFIER_reached_control(340, " ");
if(((a1==1)&&((a3==1)&&(((a14==20)&&((a28==16)&&(((input==3)&&((((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1))))&&(a25==1))))&&(a4==18))))){ __VERIFIER_control_true(340, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(347, " ");
 __VERIFIER_reached_control(347, " ");
if(((((a4==18)&&((((input==6)&&(((a14==18)&&(!(a7==1)&&(a26==19)))||((a14==19)&&((a26==17)&&(a7==1)))))&&(a1==1))&&!(a3==1)))&&(a25==1))&&(a28==16))){ __VERIFIER_control_true(347, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(355, " ");
 __VERIFIER_reached_control(355, " ");
if(((a7==1)&&((a25==1)&&((((a1==1)&&(((a28==17)&&((input==2)&&((a26==17)||(a26==18))))&&(a14==18)))&&(a4==18))&&!(a3==1))))){ __VERIFIER_control_true(355, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 19;
	    	a28 = 16;
	    	a14 = 20;
	    	return -1;
	    } else { __VERIFIER_control_false(362, " ");
 __VERIFIER_reached_control(362, " ");
if(((((((a28==16)&&((a25==1)&&((input==6)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))))))&&(a1==1))&&(a3==1))&&(a14==19))&&(a4==18))){ __VERIFIER_control_true(362, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(369, " ");
 __VERIFIER_reached_control(369, " ");
if((((a14==19)&&((a25==1)&&((!(a7==1)&&((a28==16)&&((a4==17)&&((input==3)&&!(a3==1)))))&&(a26==19))))&&(a1==1))){ __VERIFIER_control_true(369, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(377, " ");
 __VERIFIER_reached_control(377, " ");
if(((((a1==1)&&((((a3==1)&&((a14==19)&&((input==2)&&(a4==18))))&&(a7==1))&&(a28==15)))&&(a26==18))&&(a25==1))){ __VERIFIER_control_true(377, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(382, " ");
 __VERIFIER_reached_control(382, " ");
if(((a4==16)&&((!(a3==1)&&((a14==19)&&((a1==1)&&(((((a26==17)||(a26==18))&&(input==4))&&(a28==15))&&!(a7==1)))))&&(a25==1)))){ __VERIFIER_control_true(382, " ");

	    	a28 = 17;
	    	a26 = 17;
	    	a14 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(387, " ");
 __VERIFIER_reached_control(387, " ");
if(((((((a14==18)&&((((input==1)&&(a3==1))&&(a28==17))&&(a4==18)))&&!(a7==1))&&(a26==18))&&(a1==1))&&(a25==1))){ __VERIFIER_control_true(387, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(393, " ");
 __VERIFIER_reached_control(393, " ");
if(((a7==1)&&((a26==19)&&((a1==1)&&((a14==19)&&((a25==1)&&((a28==15)&&((a4==16)&&(!(a3==1)&&(input==5)))))))))){ __VERIFIER_control_true(393, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(398, " ");
 __VERIFIER_reached_control(398, " ");
if((!(a7==1)&&(((a1==1)&&(((!(a3==1)&&((a14==18)&&((input==6)&&((a26==19)||((a26==17)||(a26==18))))))&&(a4==16))&&(a25==1)))&&(a28==15)))){ __VERIFIER_control_true(398, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(403, " ");
 __VERIFIER_reached_control(403, " ");
if(((a4==16)&&((!(a3==1)&&((a14==20)&&((((((a26==17)||(a26==18))&&(input==4))&&(a28==15))&&(a25==1))&&(a1==1))))&&!(a7==1)))){ __VERIFIER_control_true(403, " ");

	    	a7 = 1;
	    	a14 = 19;
	    	a3 = 1;
	    	a26 = 19;
	    	a28 = 17;
	    	a4 = 18;
	    	return 22;
	    } else { __VERIFIER_control_false(411, " ");
 __VERIFIER_reached_control(411, " ");
if((((a4==16)&&((((a14==19)&&((a7==1)&&(((input==1)&&((a26==17)||(a26==18)))&&!(a3==1))))&&(a25==1))&&(a1==1)))&&(a28==15))){ __VERIFIER_control_true(411, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(416, " ");
 __VERIFIER_reached_control(416, " ");
if((((((a26==19)&&((a4==18)&&((!(a7==1)&&((a28==16)&&(input==2)))&&(a1==1))))&&(a14==18))&&(a25==1))&&(a3==1))){ __VERIFIER_control_true(416, " ");

	    	a3 = 0;
	    	a14 = 19;
	    	a28 = 15;
	    	a4 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(422, " ");
 __VERIFIER_reached_control(422, " ");
if(((((a1==1)&&((a28==17)&&((a14==20)&&((a3==1)&&(((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))||((a26==18)&&!(a7==1)))&&(input==5))))))&&(a4==17))&&(a25==1))){ __VERIFIER_control_true(422, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(429, " ");
 __VERIFIER_reached_control(429, " ");
if((((a25==1)&&((a4==18)&&((((a7==1)&&(((input==6)&&(a3==1))&&(a1==1)))&&(a14==19))&&(a26==17))))&&(a28==16))){ __VERIFIER_control_true(429, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(434, " ");
 __VERIFIER_reached_control(434, " ");
if(((((a1==1)&&(((((((a26==18)||(a26==19))&&(input==4))&&(a25==1))&&!(a3==1))&&(a14==18))&&(a28==16)))&&!(a7==1))&&(a4==16))){ __VERIFIER_control_true(434, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(440, " ");
 __VERIFIER_reached_control(440, " ");
if(((a1==1)&&(((a14==19)&&((((a7==1)&&(((input==6)&&((a26==18)||(a26==19)))&&(a28==17)))&&!(a3==1))&&(a25==1)))&&(a4==16)))){ __VERIFIER_control_true(440, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(446, " ");
 __VERIFIER_reached_control(446, " ");
if(((((a25==1)&&((((a7==1)&&(((input==2)&&(a14==20))&&(a4==17)))&&(a28==15))&&(a26==18)))&&(a1==1))&&(a3==1))){ __VERIFIER_control_true(446, " ");

	    	a14 = 18;
	    	a28 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(450, " ");
 __VERIFIER_reached_control(450, " ");
if(((((a1==1)&&((a14==20)&&((!(a7==1)&&(((a28==15)&&(input==5))&&(a26==17)))&&(a25==1))))&&(a3==1))&&(a4==17))){ __VERIFIER_control_true(450, " ");

	    	a26 = 18;
	    	a28 = 17;
	    	return 22;
	    } else { __VERIFIER_control_false(454, " ");
 __VERIFIER_reached_control(454, " ");
if(((a1==1)&&((a4==17)&&((a25==1)&&((a28==16)&&(!(a7==1)&&((!(a3==1)&&(((a26==18)||(a26==19))&&(input==5)))&&(a14==20)))))))){ __VERIFIER_control_true(454, " ");

	    	a26 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(457, " ");
 __VERIFIER_reached_control(457, " ");
if((((a14==19)&&((a3==1)&&((a1==1)&&(((a25==1)&&(((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==1)))&&(a4==18)))))&&(a28==17))){ __VERIFIER_control_true(457, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(464, " ");
 __VERIFIER_reached_control(464, " ");
if(((a28==16)&&(((a1==1)&&((a4==17)&&((a3==1)&&((a25==1)&&((input==6)&&(((a26==17)&&!(a7==1))||(((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))))))))&&(a14==20)))){ __VERIFIER_control_true(464, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(471, " ");
 __VERIFIER_reached_control(471, " ");
if((((a25==1)&&((((a1==1)&&((((input==6)&&((a26==18)||(a26==19)))&&(a4==18))&&(a14==20)))&&!(a7==1))&&(a28==15)))&&!(a3==1))){ __VERIFIER_control_true(471, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 19;
	    	a28 = 16;
	    	return 22;
	    } else { __VERIFIER_control_false(477, " ");
 __VERIFIER_reached_control(477, " ");
if(((a28==16)&&(((((a4==16)&&((a7==1)&&(((input==6)&&(a14==18))&&!(a3==1))))&&(a25==1))&&(a1==1))&&(a26==18)))){ __VERIFIER_control_true(477, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(482, " ");
 __VERIFIER_reached_control(482, " ");
if((((a28==15)&&((a1==1)&&((a4==16)&&(!(a3==1)&&(((((a26==17)||(a26==18))&&(input==1))&&(a25==1))&&(a14==20))))))&&(a7==1))){ __VERIFIER_control_true(482, " ");

	    	a28 = 17;
	    	a26 = 19;
	    	a14 = 18;
	    	a7 = 0;
	    	return 21;
	    } else { __VERIFIER_control_false(488, " ");
 __VERIFIER_reached_control(488, " ");
if(((a1==1)&&((a28==15)&&(((a4==17)&&(((a26==19)&&(((a14==19)&&(input==4))&&(a25==1)))&&!(a3==1)))&&!(a7==1))))){ __VERIFIER_control_true(488, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(495, " ");
 __VERIFIER_reached_control(495, " ");
if(((a14==19)&&(((a7==1)&&((((((a4==18)&&(input==4))&&(a26==18))&&(a28==15))&&(a25==1))&&(a1==1)))&&(a3==1)))){ __VERIFIER_control_true(495, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(500, " ");
 __VERIFIER_reached_control(500, " ");
if(((((a1==1)&&((a28==16)&&((a7==1)&&((a4==18)&&(!(a3==1)&&(((a26==17)||(a26==18))&&(input==6)))))))&&(a25==1))&&(a14==18))){ __VERIFIER_control_true(500, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(506, " ");
 __VERIFIER_reached_control(506, " ");
if((((a4==16)&&(((a1==1)&&((a26==18)&&((!(a3==1)&&((a25==1)&&(input==3)))&&(a14==18))))&&(a7==1)))&&(a28==16))){ __VERIFIER_control_true(506, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(511, " ");
 __VERIFIER_reached_control(511, " ");
if(((a28==17)&&((a14==19)&&((a26==18)&&(!(a7==1)&&((a25==1)&&((((input==3)&&(a3==1))&&(a4==18))&&(a1==1)))))))){ __VERIFIER_control_true(511, " ");

	    	a7 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(514, " ");
 __VERIFIER_reached_control(514, " ");
if(((((a1==1)&&(((((input==3)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))))&&(a28==17))&&(a4==18))&&(a3==1)))&&(a25==1))&&(a14==20))){ __VERIFIER_control_true(514, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(521, " ");
 __VERIFIER_reached_control(521, " ");
if((((a4==18)&&((((input==6)&&((((((a28==16)&&(a26==18))&&!(a7==1))&&(a14==20))||((!(a7==1)&&((a28==16)&&(a26==19)))&&(a14==20)))||(((a7==1)&&((a28==17)&&(a26==17)))&&(a14==18))))&&(a3==1))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(521, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(528, " ");
 __VERIFIER_reached_control(528, " ");
if(((((a1==1)&&(((a25==1)&&(((((!(a7==1)&&(a26==19))&&(a14==19))||(((a26==17)&&(a7==1))&&(a14==20)))||((a14==20)&&((a7==1)&&(a26==18))))&&(input==6)))&&(a28==17)))&&(a4==16))&&!(a3==1))){ __VERIFIER_control_true(528, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(535, " ");
 __VERIFIER_reached_control(535, " ");
if(((((((a1==1)&&((a4==17)&&(!(a7==1)&&((input==6)&&((a26==18)||(a26==19))))))&&(a25==1))&&!(a3==1))&&(a14==20))&&(a28==16))){ __VERIFIER_control_true(535, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(539, " ");
 __VERIFIER_reached_control(539, " ");
if(((((a14==20)&&(((a4==18)&&(((input==2)&&((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1))))&&(a25==1)))&&(a28==16)))&&(a1==1))&&(a3==1))){ __VERIFIER_control_true(539, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(546, " ");
 __VERIFIER_reached_control(546, " ");
if(((a14==20)&&((a4==17)&&((a28==16)&&(!(a3==1)&&((a1==1)&&((a25==1)&&((((a26==18)||(a26==19))&&(input==2))&&!(a7==1))))))))){ __VERIFIER_control_true(546, " ");

	    	a26 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(549, " ");
 __VERIFIER_reached_control(549, " ");
if(((a4==16)&&(!(a3==1)&&(((((a28==17)&&(((a1==1)&&(input==6))&&(a26==18)))&&(a14==19))&&!(a7==1))&&(a25==1))))){ __VERIFIER_control_true(549, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(556, " ");
 __VERIFIER_reached_control(556, " ");
if(((((((((((a7==1)&&(a26==18))&&(a14==19))||(((a14==18)&&(!(a7==1)&&(a26==19)))||((a14==19)&&((a26==17)&&(a7==1)))))&&(input==2))&&(a4==17))&&(a1==1))&&(a28==17))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(556, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(564, " ");
 __VERIFIER_reached_control(564, " ");
if(((a4==16)&&(!(a7==1)&&((a25==1)&&(((a14==19)&&(!(a3==1)&&((a1==1)&&((a26==19)&&(input==3)))))&&(a28==15)))))){ __VERIFIER_control_true(564, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(570, " ");
 __VERIFIER_reached_control(570, " ");
if(((a7==1)&&(((a28==15)&&((((((input==6)&&(a1==1))&&(a14==19))&&(a4==18))&&(a25==1))&&(a3==1)))&&(a26==17)))){ __VERIFIER_control_true(570, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(574, " ");
 __VERIFIER_reached_control(574, " ");
if((((a1==1)&&((((a4==17)&&(!(a7==1)&&(((input==1)&&((a26==17)||(a26==18)))&&!(a3==1))))&&(a25==1))&&(a14==19)))&&(a28==16))){ __VERIFIER_control_true(574, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(582, " ");
 __VERIFIER_reached_control(582, " ");
if((((a1==1)&&(((!(a3==1)&&((a28==17)&&(!(a7==1)&&((a14==19)&&(input==4)))))&&(a25==1))&&(a4==16)))&&(a26==18))){ __VERIFIER_control_true(582, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(589, " ");
 __VERIFIER_reached_control(589, " ");
if(((!(a3==1)&&((!(a7==1)&&((a1==1)&&((a25==1)&&(((input==5)&&((a26==18)||(a26==19)))&&(a4==16)))))&&(a28==16)))&&(a14==18))){ __VERIFIER_control_true(589, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(595, " ");
 __VERIFIER_reached_control(595, " ");
if((((((a28==17)&&((((((a26==18)&&(a7==1))&&(a14==19))||(((!(a7==1)&&(a26==19))&&(a14==18))||((a14==19)&&((a26==17)&&(a7==1)))))&&(input==4))&&(a1==1)))&&(a25==1))&&(a4==17))&&!(a3==1))){ __VERIFIER_control_true(595, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(603, " ");
 __VERIFIER_reached_control(603, " ");
if((((a4==17)&&(((a28==17)&&((((((a14==19)&&((a26==18)&&!(a7==1)))||((!(a7==1)&&(a26==19))&&(a14==19)))||(((a26==17)&&(a7==1))&&(a14==20)))&&(input==1))&&(a3==1)))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(603, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(610, " ");
 __VERIFIER_reached_control(610, " ");
if(((((a25==1)&&(((((!(a7==1)&&((a28==15)&&(a26==19)))&&(a14==20))||(((a7==1)&&((a28==16)&&(a26==17)))&&(a14==18)))&&(input==1))&&(a4==16)))&&!(a3==1))&&(a1==1))){ __VERIFIER_control_true(610, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(617, " ");
 __VERIFIER_reached_control(617, " ");
if((((a25==1)&&((((a3==1)&&((input==2)&&(((((a26==18)&&!(a7==1))&&(a14==19))||((!(a7==1)&&(a26==19))&&(a14==19)))||(((a7==1)&&(a26==17))&&(a14==20)))))&&(a4==17))&&(a1==1)))&&(a28==16))){ __VERIFIER_control_true(617, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(624, " ");
 __VERIFIER_reached_control(624, " ");
if((((((a25==1)&&(((a28==15)&&((a1==1)&&((input==3)&&(a4==18))))&&!(a3==1)))&&!(a7==1))&&(a26==17))&&(a14==20))){ __VERIFIER_control_true(624, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(630, " ");
 __VERIFIER_reached_control(630, " ");
if((((a25==1)&&((((a28==15)&&(((a1==1)&&((a3==1)&&(input==3)))&&(a4==18)))&&(a14==19))&&(a7==1)))&&(a26==19))){ __VERIFIER_control_true(630, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(635, " ");
 __VERIFIER_reached_control(635, " ");
if(((a4==18)&&((a14==18)&&((a1==1)&&((a26==18)&&(!(a3==1)&&(((a25==1)&&((input==4)&&(a28==15)))&&!(a7==1)))))))){ __VERIFIER_control_true(635, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(641, " ");
 __VERIFIER_reached_control(641, " ");
if(((((a1==1)&&(((((input==1)&&((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))||((a26==18)&&!(a7==1))))&&(a28==17))&&!(a3==1))&&(a4==18)))&&(a14==18))&&(a25==1))){ __VERIFIER_control_true(641, " ");

	    	a26 = 18;
	    	a7 = 0;
	    	return -1;
	    } else { __VERIFIER_control_false(645, " ");
 __VERIFIER_reached_control(645, " ");
if(((((a4==18)&&(!(a3==1)&&((a25==1)&&((((input==1)&&((a26==18)||(a26==19)))&&(a1==1))&&(a14==19)))))&&!(a7==1))&&(a28==15))){ __VERIFIER_control_true(645, " ");

	    	a14 = 20;
	    	a26 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(649, " ");
 __VERIFIER_reached_control(649, " ");
if(((a14==19)&&((((a28==17)&&((a1==1)&&((a4==17)&&((input==1)&&((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))))))&&(a25==1))&&(a3==1)))){ __VERIFIER_control_true(649, " ");

	    	a7 = 1;
	    	a28 = 16;
	    	a4 = 18;
	    	a26 = 18;
	    	return 26;
	    } else { __VERIFIER_control_false(655, " ");
 __VERIFIER_reached_control(655, " ");
if((((a25==1)&&(((a28==17)&&((((input==4)&&((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1))))&&(a4==17))&&(a14==19)))&&(a1==1)))&&(a3==1))){ __VERIFIER_control_true(655, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(662, " ");
 __VERIFIER_reached_control(662, " ");
if(((a1==1)&&((a28==17)&&((a14==19)&&((a4==17)&&(((((input==6)&&(a25==1))&&!(a3==1))&&(a26==18))&&!(a7==1))))))){ __VERIFIER_control_true(662, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(670, " ");
 __VERIFIER_reached_control(670, " ");
if(((((((((a25==1)&&((input==6)&&(a28==15)))&&(a1==1))&&(a26==18))&&!(a3==1))&&(a4==18))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(670, " ");

	    	a26 = 17;
	    	a14 = 20;
	    	a4 = 16;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(676, " ");
 __VERIFIER_reached_control(676, " ");
if(((a26==19)&&((a28==16)&&((a3==1)&&((a1==1)&&((a14==18)&&(((a25==1)&&((input==3)&&(a4==18)))&&!(a7==1)))))))){ __VERIFIER_control_true(676, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(682, " ");
 __VERIFIER_reached_control(682, " ");
if((((a28==16)&&((a14==18)&&((a4==17)&&((a3==1)&&((((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))&&(input==3))&&(a25==1))))))&&(a1==1))){ __VERIFIER_control_true(682, " ");

	    	a28 = 15;
	    	a14 = 19;
	    	a4 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(689, " ");
 __VERIFIER_reached_control(689, " ");
if((!(a3==1)&&(((a14==19)&&((a1==1)&&((a28==16)&&(((((a26==17)||(a26==18))&&(input==4))&&(a25==1))&&(a4==16)))))&&(a7==1)))){ __VERIFIER_control_true(689, " ");

	    	a14 = 20;
	    	a26 = 19;
	    	a28 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(694, " ");
 __VERIFIER_reached_control(694, " ");
if((((a14==20)&&((a1==1)&&((a28==17)&&((!(a3==1)&&((a4==17)&&((input==5)&&(((a26==17)||(a26==18))||(a26==19)))))&&(a7==1)))))&&(a25==1))){ __VERIFIER_control_true(694, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(701, " ");
 __VERIFIER_reached_control(701, " ");
if(((a1==1)&&((a14==19)&&(((a25==1)&&((a3==1)&&((a26==18)&&(((input==5)&&(a28==17))&&!(a7==1)))))&&(a4==18))))){ __VERIFIER_control_true(701, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(708, " ");
 __VERIFIER_reached_control(708, " ");
if((((a4==17)&&(!(a3==1)&&(((((((a26==18)&&!(a7==1))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==2))&&(a25==1))&&(a1==1))&&(a14==18))))&&(a28==17))){ __VERIFIER_control_true(708, " ");

	    	a26 = 19;
	    	a14 = 20;
	    	a7 = 1;
	    	a28 = 16;
	    	return 24;
	    } else { __VERIFIER_control_false(714, " ");
 __VERIFIER_reached_control(714, " ");
if((((a4==18)&&((a14==20)&&((a25==1)&&((a1==1)&&((a28==16)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==5)))))))&&!(a3==1))){ __VERIFIER_control_true(714, " ");

	    	a28 = 17;
	    	a7 = 0;
	    	a26 = 18;
	    	a14 = 19;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(722, " ");
 __VERIFIER_reached_control(722, " ");
if((!(a3==1)&&((a14==19)&&((a25==1)&&(((a1==1)&&(((((a26==18)&&!(a7==1))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==1))&&(a4==16)))&&(a28==16)))))){ __VERIFIER_control_true(722, " ");

	    	a28 = 15;
	    	a4 = 17;
	    	a7 = 1;
	    	a26 = 18;
	    	a14 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(729, " ");
 __VERIFIER_reached_control(729, " ");
if(((a4==16)&&((a28==15)&&(!(a3==1)&&(((!(a7==1)&&((((a26==19)||((a26==17)||(a26==18)))&&(input==3))&&(a25==1)))&&(a14==18))&&(a1==1)))))){ __VERIFIER_control_true(729, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(734, " ");
 __VERIFIER_reached_control(734, " ");
if((((a1==1)&&((a3==1)&&(((a7==1)&&(((a14==18)&&(((a26==18)||(a26==19))&&(input==4)))&&(a25==1)))&&(a28==15))))&&(a4==18))){ __VERIFIER_control_true(734, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(738, " ");
 __VERIFIER_reached_control(738, " ");
if(((a28==16)&&((a4==17)&&((((a1==1)&&((((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1)))&&(input==4))&&(a25==1)))&&(a14==18))&&(a3==1))))){ __VERIFIER_control_true(738, " ");

	    	a26 = 18;
	    	a28 = 15;
	    	a7 = 0;
	    	a4 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(744, " ");
 __VERIFIER_reached_control(744, " ");
if((!(a3==1)&&((((a1==1)&&((a25==1)&&((input==5)&&((((a7==1)&&(a26==18))&&(a14==20))||((((a26==19)&&!(a7==1))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20)))))))&&(a28==16))&&(a4==18)))){ __VERIFIER_control_true(744, " ");

	    	a14 = 19;
	    	a4 = 17;
	    	a26 = 17;
	    	a7 = 0;
	    	return -1;
	    } else { __VERIFIER_control_false(750, " ");
 __VERIFIER_reached_control(750, " ");
if(((a7==1)&&(((((a25==1)&&(!(a3==1)&&((a28==16)&&((a4==17)&&(input==5)))))&&(a1==1))&&(a26==17))&&(a14==20)))){ __VERIFIER_control_true(750, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(756, " ");
 __VERIFIER_reached_control(756, " ");
if((((((((((a14==19)&&(!(a7==1)&&(a26==19)))||(((a7==1)&&(a26==17))&&(a14==20)))&&(input==4))&&(a4==17))&&(a1==1))&&(a28==15))&&(a3==1))&&(a25==1))){ __VERIFIER_control_true(756, " ");

	    	a7 = 0;
	    	a26 = 18;
	    	a28 = 16;
	    	a14 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(762, " ");
 __VERIFIER_reached_control(762, " ");
if((!(a3==1)&&((((a28==17)&&((a14==18)&&((((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||((a26==18)&&!(a7==1)))&&(input==5))&&(a1==1))))&&(a4==18))&&(a25==1)))){ __VERIFIER_control_true(762, " ");

	    	a14 = 20;
	    	a7 = 0;
	    	a4 = 17;
	    	a28 = 16;
	    	a26 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(769, " ");
 __VERIFIER_reached_control(769, " ");
if(((a14==19)&&(((a4==17)&&(((a3==1)&&((((a7==1)&&(input==4))&&(a28==15))&&(a25==1)))&&(a26==18)))&&(a1==1)))){ __VERIFIER_control_true(769, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(774, " ");
 __VERIFIER_reached_control(774, " ");
if((((a14==20)&&((((a4==17)&&(((((a26==18)&&!(a7==1))||(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))&&(input==2))&&(a25==1)))&&(a3==1))&&(a1==1)))&&(a28==17))){ __VERIFIER_control_true(774, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(781, " ");
 __VERIFIER_reached_control(781, " ");
if((((a28==15)&&((a7==1)&&(!(a3==1)&&((a25==1)&&(((a26==19)&&((a14==20)&&(input==6)))&&(a1==1))))))&&(a4==16))){ __VERIFIER_control_true(781, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(786, " ");
 __VERIFIER_reached_control(786, " ");
if((((a26==18)&&(((((a28==17)&&((a4==16)&&((a7==1)&&(input==6))))&&(a1==1))&&(a14==18))&&!(a3==1)))&&(a25==1))){ __VERIFIER_control_true(786, " ");

	    	return -1;
	    } else { __VERIFIER_control_false(788, " ");
 __VERIFIER_reached_control(788, " ");
if((((a7==1)&&(((a28==15)&&((a4==17)&&((a1==1)&&((a14==19)&&((input==3)&&(a26==18))))))&&(a25==1)))&&(a3==1))){ __VERIFIER_control_true(788, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(793, " ");
 __VERIFIER_reached_control(793, " ");
if(((a28==17)&&((a4==18)&&((a25==1)&&(((a3==1)&&((input==3)&&(((!(a7==1)&&(a26==19))&&(a14==18))||(((a26==17)&&(a7==1))&&(a14==19)))))&&(a1==1)))))){ __VERIFIER_control_true(793, " ");

	    	a14 = 18;
	    	a7 = 0;
	    	a26 = 19;
	    	return 26;
	    } else { __VERIFIER_control_false(798, " ");
 __VERIFIER_reached_control(798, " ");
if((((a14==20)&&(((((a4==18)&&((input==1)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))))&&(a3==1))&&(a28==16))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(798, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(802, " ");
 __VERIFIER_reached_control(802, " ");
if((((((a28==16)&&(((input==3)&&((((a7==1)&&(a26==17))&&(a14==19))||(((a14==18)&&((a26==18)&&!(a7==1)))||((a14==18)&&(!(a7==1)&&(a26==19))))))&&(a1==1)))&&(a25==1))&&(a4==17))&&(a3==1))){ __VERIFIER_control_true(802, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(809, " ");
 __VERIFIER_reached_control(809, " ");
if((((a14==19)&&(((((a1==1)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==5)))&&(a4==17))&&!(a3==1))&&(a25==1)))&&(a28==17))){ __VERIFIER_control_true(809, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(817, " ");
 __VERIFIER_reached_control(817, " ");
if((!(a7==1)&&((a1==1)&&(((a3==1)&&((a25==1)&&(((((a26==18)||(a26==19))&&(input==2))&&(a28==16))&&(a14==20))))&&(a4==17))))){ __VERIFIER_control_true(817, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(824, " ");
 __VERIFIER_reached_control(824, " ");
if(((!(a3==1)&&((((((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==2))&&(a4==17))&&(a28==17))&&(a25==1))&&(a1==1)))&&(a14==19))){ __VERIFIER_control_true(824, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(832, " ");
 __VERIFIER_reached_control(832, " ");
if((!(a3==1)&&((a28==16)&&(((a1==1)&&((((input==2)&&(((a26==18)&&!(a7==1))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))))&&(a14==19))&&(a25==1)))&&(a4==16))))){ __VERIFIER_control_true(832, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(839, " ");
 __VERIFIER_reached_control(839, " ");
if(((!(a3==1)&&((a28==16)&&((((a14==19)&&((a1==1)&&((input==1)&&((a26==17)||(a26==18)))))&&(a25==1))&&(a4==16))))&&(a7==1))){ __VERIFIER_control_true(839, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(845, " ");
 __VERIFIER_reached_control(845, " ");
if((((a1==1)&&(((a25==1)&&(((a7==1)&&(((a4==16)&&(input==2))&&!(a3==1)))&&(a14==18)))&&(a26==19)))&&(a28==15))){ __VERIFIER_control_true(845, " ");

	    	a26 = 18;
	    	a28 = 16;
	    	a14 = 20;
	    	return 24;
	    } else { __VERIFIER_control_false(850, " ");
 __VERIFIER_reached_control(850, " ");
if(((a14==18)&&(!(a3==1)&&((((((a1==1)&&(((a26==17)||(a26==18))&&(input==5)))&&(a25==1))&&(a7==1))&&(a28==15))&&(a4==18))))){ __VERIFIER_control_true(850, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(855, " ");
 __VERIFIER_reached_control(855, " ");
if(((!(a3==1)&&((a28==17)&&(((a1==1)&&((a25==1)&&((!(a7==1)&&(input==4))&&(a14==18))))&&(a4==16))))&&(a26==18))){ __VERIFIER_control_true(855, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(861, " ");
 __VERIFIER_reached_control(861, " ");
if(((a4==17)&&((((a26==19)&&(((((input==4)&&(a25==1))&&(a28==17))&&(a14==19))&&!(a7==1)))&&(a1==1))&&!(a3==1)))){ __VERIFIER_control_true(861, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(869, " ");
 __VERIFIER_reached_control(869, " ");
if((((a25==1)&&((a7==1)&&((a14==19)&&((((((a26==18)||(a26==19))&&(input==5))&&(a4==16))&&(a28==17))&&!(a3==1)))))&&(a1==1))){ __VERIFIER_control_true(869, " ");

	    	a26 = 18;
	    	return 26;
	    } else { __VERIFIER_control_false(872, " ");
 __VERIFIER_reached_control(872, " ");
if((!(a3==1)&&((a25==1)&&((a4==17)&&(((input==5)&&(((a14==18)&&(((a26==17)&&(a28==16))&&(a7==1)))||(((a14==20)&&(((a28==15)&&(a26==18))&&!(a7==1)))||((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20)))))&&(a1==1)))))){ __VERIFIER_control_true(872, " ");

	    	a7 = 1;
	    	a14 = 20;
	    	a28 = 16;
	    	a26 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(878, " ");
 __VERIFIER_reached_control(878, " ");
if((((a25==1)&&((((a14==19)&&(((input==3)&&(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17))))&&(a1==1)))&&(a28==17))&&(a4==17)))&&!(a3==1))){ __VERIFIER_control_true(878, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(886, " ");
 __VERIFIER_reached_control(886, " ");
if(((a4==17)&&(((a25==1)&&(((!(a7==1)&&(((input==5)&&(((a26==17)||(a26==18))||(a26==19)))&&(a14==20)))&&(a1==1))&&!(a3==1)))&&(a28==17)))){ __VERIFIER_control_true(886, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(894, " ");
 __VERIFIER_reached_control(894, " ");
if(((a1==1)&&(((a25==1)&&((a28==17)&&((a3==1)&&((((!(a7==1)&&(a26==18))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==1))&&(a14==20)))))&&(a4==17)))){ __VERIFIER_control_true(894, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(901, " ");
 __VERIFIER_reached_control(901, " ");
if(((a4==18)&&((a25==1)&&((a1==1)&&((a28==15)&&((((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==1))&&(a14==18))&&!(a3==1))))))){ __VERIFIER_control_true(901, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(907, " ");
 __VERIFIER_reached_control(907, " ");
if(((a1==1)&&((a25==1)&&(((((((!(a7==1)&&((a28==15)&&(a26==18)))&&(a14==20))||((((a26==19)&&(a28==15))&&!(a7==1))&&(a14==20)))||((((a26==17)&&(a28==16))&&(a7==1))&&(a14==18)))&&(input==5))&&(a4==17))&&(a3==1))))){ __VERIFIER_control_true(907, " ");

	    	a4 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	return 26;
	    } else { __VERIFIER_control_false(914, " ");
 __VERIFIER_reached_control(914, " ");
if((((a28==15)&&((((a25==1)&&((a4==16)&&(((((a26==17)||(a26==18))||(a26==19))&&(input==2))&&!(a3==1))))&&!(a7==1))&&(a14==18)))&&(a1==1))){ __VERIFIER_control_true(914, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(919, " ");
 __VERIFIER_reached_control(919, " ");
if(((((((a4==17)&&((input==4)&&(((((a26==19)&&!(a7==1))&&(a14==18))||(((a26==17)&&(a7==1))&&(a14==19)))||(((a26==18)&&(a7==1))&&(a14==19)))))&&(a28==15))&&(a1==1))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(919, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(926, " ");
 __VERIFIER_reached_control(926, " ");
if(((a14==19)&&((a25==1)&&(((!(a7==1)&&((a4==17)&&(((input==2)&&(a28==17))&&!(a3==1))))&&(a26==19))&&(a1==1))))){ __VERIFIER_control_true(926, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(934, " ");
 __VERIFIER_reached_control(934, " ");
if((((a14==20)&&((a1==1)&&(((a25==1)&&((a4==18)&&((input==6)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))))&&(a28==16))))&&!(a3==1))){ __VERIFIER_control_true(934, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(941, " ");
 __VERIFIER_reached_control(941, " ");
if((!(a7==1)&&((((!(a3==1)&&((a28==15)&&(((a4==16)&&(input==1))&&(a26==19))))&&(a1==1))&&(a14==19))&&(a25==1)))){ __VERIFIER_control_true(941, " ");

	    	a14 = 18;
	    	a26 = 18;
	    	a28 = 17;
	    	return 21;
	    } else { __VERIFIER_control_false(946, " ");
 __VERIFIER_reached_control(946, " ");
if(((!(a3==1)&&((a1==1)&&((a7==1)&&((a25==1)&&((((input==3)&&((a26==19)||((a26==17)||(a26==18))))&&(a14==20))&&(a28==15))))))&&(a4==17))){ __VERIFIER_control_true(946, " ");

	    	a26 = 17;
	    	a28 = 16;
	    	a7 = 0;
	    	a14 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(952, " ");
 __VERIFIER_reached_control(952, " ");
if((!(a3==1)&&((((a14==19)&&((((a25==1)&&(((a26==17)||(a26==18))&&(input==5)))&&(a28==16))&&(a4==17)))&&(a1==1))&&!(a7==1)))){ __VERIFIER_control_true(952, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(960, " ");
 __VERIFIER_reached_control(960, " ");
if((((a25==1)&&((!(a3==1)&&((a7==1)&&((a4==17)&&((a1==1)&&(((a26==17)||(a26==18))&&(input==5))))))&&(a14==18)))&&(a28==17))){ __VERIFIER_control_true(960, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(966, " ");
 __VERIFIER_reached_control(966, " ");
if(((a1==1)&&((((a25==1)&&(((!(a3==1)&&(((a26==18)||(a26==19))&&(input==3)))&&(a14==18))&&(a28==16)))&&!(a7==1))&&(a4==17)))){ __VERIFIER_control_true(966, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(973, " ");
 __VERIFIER_reached_control(973, " ");
if((((a14==20)&&(((!(a7==1)&&((a1==1)&&((a4==17)&&(((a26==18)||(a26==19))&&(input==4)))))&&(a25==1))&&(a3==1)))&&(a28==16))){ __VERIFIER_control_true(973, " ");

	    	a26 = 19;
	    	a4 = 18;
	    	a28 = 15;
	    	return 26;
	    } else { __VERIFIER_control_false(978, " ");
 __VERIFIER_reached_control(978, " ");
if((((((a28==16)&&(((a4==18)&&((input==3)&&((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1)))))&&(a3==1)))&&(a25==1))&&(a14==18))&&(a1==1))){ __VERIFIER_control_true(978, " ");

	    	a4 = 16;
	    	a3 = 0;
	    	a26 = 19;
	    	a14 = 19;
	    	a7 = 1;
	    	a28 = 15;
	    	return 26;
	    } else { __VERIFIER_control_false(986, " ");
 __VERIFIER_reached_control(986, " ");
if(((a25==1)&&((a4==18)&&((a26==19)&&(((a3==1)&&((a28==16)&&(((input==1)&&(a1==1))&&(a14==18))))&&!(a7==1)))))){ __VERIFIER_control_true(986, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(992, " ");
 __VERIFIER_reached_control(992, " ");
if((((((a3==1)&&((a1==1)&&((!(a7==1)&&((input==4)&&((a26==17)||(a26==18))))&&(a28==15))))&&(a14==19))&&(a25==1))&&(a4==18))){ __VERIFIER_control_true(992, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(998, " ");
 __VERIFIER_reached_control(998, " ");
if(((((((((input==6)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))&&(a25==1))&&!(a3==1))&&(a14==19))&&(a4==18))&&(a1==1))&&(a28==16))){ __VERIFIER_control_true(998, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1005, " ");
 __VERIFIER_reached_control(1005, " ");
if((((a28==15)&&((a25==1)&&((a4==17)&&(((input==1)&&(((!(a7==1)&&(a26==19))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20))))&&(a1==1)))))&&(a3==1))){ __VERIFIER_control_true(1005, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1011, " ");
 __VERIFIER_reached_control(1011, " ");
if((!(a3==1)&&(((!(a7==1)&&((((a1==1)&&((input==5)&&((a26==18)||(a26==19))))&&(a14==19))&&(a28==15)))&&(a4==18))&&(a25==1)))){ __VERIFIER_control_true(1011, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1018, " ");
 __VERIFIER_reached_control(1018, " ");
if(((a28==17)&&(((!(a3==1)&&((a4==18)&&((((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||(!(a7==1)&&(a26==18)))&&(input==4))&&(a25==1))))&&(a1==1))&&(a14==18)))){ __VERIFIER_control_true(1018, " ");

	    	a4 = 16;
	    	a26 = 18;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(1023, " ");
 __VERIFIER_reached_control(1023, " ");
if(((a1==1)&&(((a26==17)&&((a28==16)&&((a3==1)&&((a4==18)&&((a7==1)&&((a14==19)&&(input==3)))))))&&(a25==1)))){ __VERIFIER_control_true(1023, " ");

	    	a3 = 0;
	    	a4 = 16;
	    	a14 = 20;
	    	a28 = 15;
	    	return 24;
	    } else { __VERIFIER_control_false(1029, " ");
 __VERIFIER_reached_control(1029, " ");
if((((((a25==1)&&((((a1==1)&&((input==6)&&((a26==18)||(a26==19))))&&(a14==18))&&(a4==17)))&&(a7==1))&&(a28==15))&&!(a3==1))){ __VERIFIER_control_true(1029, " ");

	    	a26 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(1032, " ");
 __VERIFIER_reached_control(1032, " ");
if((((a4==18)&&(!(a7==1)&&((a26==18)&&((a25==1)&&(((a14==18)&&((a28==15)&&(input==2)))&&(a1==1))))))&&!(a3==1))){ __VERIFIER_control_true(1032, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1038, " ");
 __VERIFIER_reached_control(1038, " ");
if((((a1==1)&&((a25==1)&&(((a28==15)&&(((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==2))&&(a4==18)))&&!(a3==1))))&&(a14==19))){ __VERIFIER_control_true(1038, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1045, " ");
 __VERIFIER_reached_control(1045, " ");
if((((((a25==1)&&((!(a3==1)&&((a4==18)&&((input==4)&&((a26==18)||(a26==19)))))&&(a14==20)))&&(a1==1))&&!(a7==1))&&(a28==16))){ __VERIFIER_control_true(1045, " ");

	    	a26 = 19;
	    	return 23;
	    } else { __VERIFIER_control_false(1048, " ");
 __VERIFIER_reached_control(1048, " ");
if(((((((a28==16)&&(((input==5)&&((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))))&&(a3==1)))&&(a25==1))&&(a4==18))&&(a14==19))&&(a1==1))){ __VERIFIER_control_true(1048, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1055, " ");
 __VERIFIER_reached_control(1055, " ");
if((!(a7==1)&&(((((a1==1)&&(!(a3==1)&&((a25==1)&&((input==6)&&(a4==17)))))&&(a14==19))&&(a28==15))&&(a26==19)))){ __VERIFIER_control_true(1055, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1062, " ");
 __VERIFIER_reached_control(1062, " ");
if(((a1==1)&&((!(a3==1)&&((((((a14==20)&&((a7==1)&&(a26==18)))||(((a14==19)&&((a26==19)&&!(a7==1)))||(((a7==1)&&(a26==17))&&(a14==20))))&&(input==6))&&(a28==16))&&(a25==1)))&&(a4==16)))){ __VERIFIER_control_true(1062, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1069, " ");
 __VERIFIER_reached_control(1069, " ");
if(((a4==18)&&((a3==1)&&(((a14==18)&&(((a1==1)&&((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==6)))&&(a28==17)))&&(a25==1))))){ __VERIFIER_control_true(1069, " ");

	    	a4 = 16;
	    	a28 = 16;
	    	a3 = 0;
	    	a26 = 18;
	    	a7 = 1;
	    	return 23;
	    } else { __VERIFIER_control_false(1076, " ");
 __VERIFIER_reached_control(1076, " ");
if(((a1==1)&&((a14==18)&&(((((a4==17)&&((input==6)&&(((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))))&&(a28==17))&&(a3==1))&&(a25==1))))){ __VERIFIER_control_true(1076, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1082, " ");
 __VERIFIER_reached_control(1082, " ");
if(((a1==1)&&((a7==1)&&(!(a3==1)&&((a28==15)&&((a25==1)&&(((((a26==17)||(a26==18))&&(input==4))&&(a4==16))&&(a14==20)))))))){ __VERIFIER_control_true(1082, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1087, " ");
 __VERIFIER_reached_control(1087, " ");
if((((a28==16)&&((a4==17)&&((a25==1)&&((a3==1)&&(((input==1)&&((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17))))&&(a14==20))))))&&(a1==1))){ __VERIFIER_control_true(1087, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1094, " ");
 __VERIFIER_reached_control(1094, " ");
if((((((a4==17)&&((a1==1)&&(((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==4))&&(a14==18))))&&(a3==1))&&(a28==17))&&(a25==1))){ __VERIFIER_control_true(1094, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1100, " ");
 __VERIFIER_reached_control(1100, " ");
if(((a28==17)&&(((a25==1)&&((a3==1)&&((a1==1)&&((input==3)&&((((a26==19)&&!(a7==1))&&(a14==19))||(((a26==17)&&(a7==1))&&(a14==20)))))))&&(a4==18)))){ __VERIFIER_control_true(1100, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1107, " ");
 __VERIFIER_reached_control(1107, " ");
if((((((((a28==15)&&(((input==1)&&(((a26==17)||(a26==18))||(a26==19)))&&(a4==18)))&&(a1==1))&&(a25==1))&&(a7==1))&&!(a3==1))&&(a14==20))){ __VERIFIER_control_true(1107, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1113, " ");
 __VERIFIER_reached_control(1113, " ");
if(((a3==1)&&((a1==1)&&((a25==1)&&((((a26==17)&&((a14==20)&&((a4==18)&&(input==5))))&&!(a7==1))&&(a28==15)))))){ __VERIFIER_control_true(1113, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1118, " ");
 __VERIFIER_reached_control(1118, " ");
if((((a3==1)&&((a28==16)&&((a26==18)&&((a1==1)&&(!(a7==1)&&((a25==1)&&((a14==18)&&(input==3))))))))&&(a4==18))){ __VERIFIER_control_true(1118, " ");

	    	a3 = 0;
	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(1124, " ");
 __VERIFIER_reached_control(1124, " ");
if(((a25==1)&&(((a4==16)&&(((input==6)&&(((((a26==17)&&(a28==17))&&(a7==1))&&(a14==18))||(((!(a7==1)&&((a26==18)&&(a28==16)))&&(a14==20))||((((a26==19)&&(a28==16))&&!(a7==1))&&(a14==20)))))&&(a1==1)))&&!(a3==1)))){ __VERIFIER_control_true(1124, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1131, " ");
 __VERIFIER_reached_control(1131, " ");
if(((a25==1)&&(!(a3==1)&&((a1==1)&&((a4==16)&&((input==2)&&((((((a26==18)&&(a28==16))&&!(a7==1))&&(a14==20))||((!(a7==1)&&((a26==19)&&(a28==16)))&&(a14==20)))||((((a26==17)&&(a28==17))&&(a7==1))&&(a14==18))))))))){ __VERIFIER_control_true(1131, " ");

	    	a7 = 0;
	    	a4 = 17;
	    	a14 = 19;
	    	a26 = 18;
	    	a28 = 15;
	    	return 26;
	    } else { __VERIFIER_control_false(1138, " ");
 __VERIFIER_reached_control(1138, " ");
if(((a4==16)&&(((a25==1)&&((((a1==1)&&(((a26==18)&&(input==5))&&(a28==16)))&&(a7==1))&&(a14==18)))&&!(a3==1)))){ __VERIFIER_control_true(1138, " ");

	    	a28 = 17;
	    	a7 = 0;
	    	a14 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(1143, " ");
 __VERIFIER_reached_control(1143, " ");
if(((a14==20)&&((((a4==18)&&(((a26==18)&&(((input==6)&&(a28==17))&&(a1==1)))&&!(a7==1)))&&(a25==1))&&(a3==1)))){ __VERIFIER_control_true(1143, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1150, " ");
 __VERIFIER_reached_control(1150, " ");
if(((((a3==1)&&((((a1==1)&&((a28==16)&&((a25==1)&&(input==4))))&&(a4==18))&&(a14==19)))&&(a26==17))&&(a7==1))){ __VERIFIER_control_true(1150, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1155, " ");
 __VERIFIER_reached_control(1155, " ");
if(((((a4==17)&&((((((input==5)&&(a28==16))&&(a25==1))&&(a26==19))&&!(a7==1))&&(a1==1)))&&!(a3==1))&&(a14==19))){ __VERIFIER_control_true(1155, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1163, " ");
 __VERIFIER_reached_control(1163, " ");
if(((a1==1)&&((a25==1)&&((!(a3==1)&&((a4==16)&&(((((a14==19)&&(!(a7==1)&&(a26==19)))||((a14==20)&&((a7==1)&&(a26==17))))||(((a26==18)&&(a7==1))&&(a14==20)))&&(input==3))))&&(a28==16))))){ __VERIFIER_control_true(1163, " ");

	    	a14 = 18;
	    	a26 = 19;
	    	a7 = 0;
	    	a4 = 17;
	    	a28 = 15;
	    	return 26;
	    } else { __VERIFIER_control_false(1170, " ");
 __VERIFIER_reached_control(1170, " ");
if((((((((a26==18)&&(((input==5)&&(a25==1))&&(a3==1)))&&(a7==1))&&(a28==17))&&(a4==17))&&(a1==1))&&(a14==20))){ __VERIFIER_control_true(1170, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1176, " ");
 __VERIFIER_reached_control(1176, " ");
if(((a25==1)&&((((a4==18)&&((a28==16)&&((input==4)&&(((!(a7==1)&&(a26==19))&&(a14==18))||(((a26==17)&&(a7==1))&&(a14==19))))))&&(a1==1))&&!(a3==1)))){ __VERIFIER_control_true(1176, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1184, " ");
 __VERIFIER_reached_control(1184, " ");
if(((((((a14==18)&&((a4==18)&&(((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))||(!(a7==1)&&(a26==18)))&&(input==5))))&&(a1==1))&&(a25==1))&&!(a3==1))&&(a28==16))){ __VERIFIER_control_true(1184, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1191, " ");
 __VERIFIER_reached_control(1191, " ");
if((((a25==1)&&((((((((a26==18)||(a26==19))&&(input==2))&&(a14==18))&&(a1==1))&&(a4==18))&&(a7==1))&&(a3==1)))&&(a28==15))){ __VERIFIER_control_true(1191, " ");

	    	a7 = 0;
	    	a26 = 19;
	    	a28 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(1196, " ");
 __VERIFIER_reached_control(1196, " ");
if(((((a25==1)&&((a1==1)&&((a4==18)&&((((!(a7==1)&&(a26==19))&&(a14==18))||((a14==19)&&((a7==1)&&(a26==17))))&&(input==5)))))&&(a28==17))&&(a3==1))){ __VERIFIER_control_true(1196, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(1201, " ");
 __VERIFIER_reached_control(1201, " ");
if((((((((a14==19)&&(((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))||((a26==18)&&!(a7==1)))&&(input==2)))&&(a4==17))&&(a25==1))&&(a28==15))&&(a3==1))&&(a1==1))){ __VERIFIER_control_true(1201, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1207, " ");
 __VERIFIER_reached_control(1207, " ");
if((((((((a14==18)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==5)))&&(a4==16))&&!(a3==1))&&(a25==1))&&(a1==1))&&(a28==16))){ __VERIFIER_control_true(1207, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1213, " ");
 __VERIFIER_reached_control(1213, " ");
if((!(a7==1)&&(((a4==17)&&((((a28==15)&&((a1==1)&&((a26==17)&&(input==2))))&&(a3==1))&&(a14==20)))&&(a25==1)))){ __VERIFIER_control_true(1213, " ");

	    	a26 = 18;
	    	a28 = 17;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(1218, " ");
 __VERIFIER_reached_control(1218, " ");
if(((((a1==1)&&(!(a3==1)&&((a14==19)&&((a4==16)&&((a26==19)&&((input==6)&&!(a7==1)))))))&&(a25==1))&&(a28==15))){ __VERIFIER_control_true(1218, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1224, " ");
 __VERIFIER_reached_control(1224, " ");
if(((a14==19)&&(((a4==17)&&(((a25==1)&&((a1==1)&&(((input==5)&&(((a26==17)||(a26==18))||(a26==19)))&&(a7==1))))&&(a28==16)))&&!(a3==1)))){ __VERIFIER_control_true(1224, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1231, " ");
 __VERIFIER_reached_control(1231, " ");
if((((((a25==1)&&(((a4==18)&&(((((a26==17)||(a26==18))||(a26==19))&&(input==6))&&(a28==15)))&&(a1==1)))&&(a7==1))&&!(a3==1))&&(a14==20))){ __VERIFIER_control_true(1231, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1237, " ");
 __VERIFIER_reached_control(1237, " ");
if(((a4==16)&&((!(a3==1)&&((((((input==3)&&((a26==17)||(a26==18)))&&(a25==1))&&(a14==20))&&(a1==1))&&(a7==1)))&&(a28==15)))){ __VERIFIER_control_true(1237, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1242, " ");
 __VERIFIER_reached_control(1242, " ");
if(((!(a3==1)&&((((((((a26==17)||(a26==18))&&(input==1))&&(a1==1))&&(a14==18))&&(a4==18))&&(a25==1))&&(a28==15)))&&(a7==1))){ __VERIFIER_control_true(1242, " ");

	    	a14 = 19;
	    	a26 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(1246, " ");
 __VERIFIER_reached_control(1246, " ");
if(((a14==20)&&(((((a26==17)&&((a1==1)&&((a7==1)&&((input==2)&&!(a3==1)))))&&(a28==16))&&(a25==1))&&(a4==17)))){ __VERIFIER_control_true(1246, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1252, " ");
 __VERIFIER_reached_control(1252, " ");
if((((a4==17)&&(((a3==1)&&(((input==2)&&(((((a26==18)&&!(a7==1))&&(a14==18))||((a14==18)&&((a26==19)&&!(a7==1))))||((a14==19)&&((a26==17)&&(a7==1)))))&&(a28==16)))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(1252, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1259, " ");
 __VERIFIER_reached_control(1259, " ");
if(((a28==17)&&((a25==1)&&((a3==1)&&((a14==19)&&((a1==1)&&((a4==18)&&(((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1)))&&(input==3))))))))){ __VERIFIER_control_true(1259, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 0;
	    	return -1;
	    } else { __VERIFIER_control_false(1265, " ");
 __VERIFIER_reached_control(1265, " ");
if(((a1==1)&&((a4==16)&&(((((!(a7==1)&&((input==5)&&((a26==17)||(a26==18))))&&(a14==20))&&(a28==15))&&!(a3==1))&&(a25==1))))){ __VERIFIER_control_true(1265, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1271, " ");
 __VERIFIER_reached_control(1271, " ");
if((((a4==18)&&(((a28==15)&&((a1==1)&&((a7==1)&&((a3==1)&&((a25==1)&&(input==5))))))&&(a26==18)))&&(a14==19))){ __VERIFIER_control_true(1271, " ");

	    	a26 = 19;
	    	a7 = 0;
	    	a28 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(1276, " ");
 __VERIFIER_reached_control(1276, " ");
if(((((a25==1)&&(((a28==15)&&(((a26==18)&&((input==4)&&!(a3==1)))&&(a1==1)))&&(a4==18)))&&(a14==19))&&(a7==1))){ __VERIFIER_control_true(1276, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1282, " ");
 __VERIFIER_reached_control(1282, " ");
if(((a3==1)&&((a1==1)&&(((a4==18)&&((a28==17)&&((((a14==19)&&(!(a7==1)&&(a26==19)))||(((a26==17)&&(a7==1))&&(a14==20)))&&(input==5))))&&(a25==1))))){ __VERIFIER_control_true(1282, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 19;
	    	return 26;
	    } else { __VERIFIER_control_false(1287, " ");
 __VERIFIER_reached_control(1287, " ");
if(((((a4==16)&&((a26==19)&&(((a14==20)&&(!(a3==1)&&((a7==1)&&(input==5))))&&(a25==1))))&&(a1==1))&&(a28==15))){ __VERIFIER_control_true(1287, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1292, " ");
 __VERIFIER_reached_control(1292, " ");
if(((a25==1)&&((a1==1)&&(((a4==17)&&((a3==1)&&((input==2)&&((((a26==19)&&!(a7==1))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20))))))&&(a28==15))))){ __VERIFIER_control_true(1292, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1298, " ");
 __VERIFIER_reached_control(1298, " ");
if((((a4==18)&&((a28==16)&&((a25==1)&&(((input==5)&&(((a14==18)&&(!(a7==1)&&(a26==19)))||((a14==19)&&((a7==1)&&(a26==17)))))&&!(a3==1)))))&&(a1==1))){ __VERIFIER_control_true(1298, " ");

	    	a7 = 1;
	    	a14 = 19;
	    	a26 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(1303, " ");
 __VERIFIER_reached_control(1303, " ");
if(((a25==1)&&((a28==15)&&(((a14==18)&&((a4==17)&&((((input==5)&&((a26==17)||(a26==18)))&&(a1==1))&&!(a3==1))))&&!(a7==1))))){ __VERIFIER_control_true(1303, " ");

	    	a26 = 17;
	    	a14 = 19;
	    	a28 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1308, " ");
 __VERIFIER_reached_control(1308, " ");
if(((((a4==18)&&(((a28==17)&&(((((!(a7==1)&&(a26==19))&&(a14==18))||(((a26==17)&&(a7==1))&&(a14==19)))||((a14==19)&&((a26==18)&&(a7==1))))&&(input==1)))&&(a1==1)))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(1308, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(1313, " ");
 __VERIFIER_reached_control(1313, " ");
if(((a25==1)&&((a1==1)&&((((((((a14==18)&&((a26==19)&&!(a7==1)))||((a14==19)&&((a26==17)&&(a7==1))))||(((a7==1)&&(a26==18))&&(a14==19)))&&(input==6))&&(a4==17))&&(a28==17))&&!(a3==1))))){ __VERIFIER_control_true(1313, " ");

	    	a14 = 20;
	    	a7 = 1;
	    	a26 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(1318, " ");
 __VERIFIER_reached_control(1318, " ");
if(((((a28==17)&&((a1==1)&&((a4==17)&&((input==1)&&(((a14==19)&&((a26==18)&&(a7==1)))||(((a14==18)&&(!(a7==1)&&(a26==19)))||((a14==19)&&((a7==1)&&(a26==17)))))))))&&(a25==1))&&!(a3==1))){ __VERIFIER_control_true(1318, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1326, " ");
 __VERIFIER_reached_control(1326, " ");
if(((a28==15)&&((a25==1)&&((a3==1)&&(!(a7==1)&&(((((a1==1)&&(input==4))&&(a14==20))&&(a26==17))&&(a4==17))))))){ __VERIFIER_control_true(1326, " ");

	    	a28 = 17;
	    	a7 = 1;
	    	a26 = 19;
	    	a14 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(1332, " ");
 __VERIFIER_reached_control(1332, " ");
if((((a25==1)&&((((a28==15)&&((a1==1)&&(!(a3==1)&&((input==1)&&((a26==17)||(a26==18))))))&&(a4==17))&&!(a7==1)))&&(a14==18))){ __VERIFIER_control_true(1332, " ");

	    	a28 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1338, " ");
 __VERIFIER_reached_control(1338, " ");
if(((a25==1)&&((a1==1)&&((input==6)&&((((((a28==17)&&((a26==19)&&((a4==18)&&(a3==1))))&&!(a7==1))&&(a14==20))||((((a28==15)&&((!(a3==1)&&(a4==16))&&(a26==17)))&&(a7==1))&&(a14==18)))||((a14==18)&&((a7==1)&&((a28==15)&&((a26==18)&&(!(a3==1)&&(a4==16))))))))))){ __VERIFIER_control_true(1338, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1346, " ");
 __VERIFIER_reached_control(1346, " ");
if(((a1==1)&&((((((a14==19)&&((a28==15)&&((a7==1)&&(input==6))))&&(a4==16))&&(a26==19))&&!(a3==1))&&(a25==1)))){ __VERIFIER_control_true(1346, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1351, " ");
 __VERIFIER_reached_control(1351, " ");
if((((a25==1)&&((((((a4==17)&&((((a26==17)||(a26==18))||(a26==19))&&(input==6)))&&(a28==17))&&(a14==20))&&(a1==1))&&(a7==1)))&&!(a3==1))){ __VERIFIER_control_true(1351, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1358, " ");
 __VERIFIER_reached_control(1358, " ");
if(((!(a3==1)&&((((a25==1)&&(((((a26==18)||(a26==19))&&(input==4))&&(a14==18))&&(a7==1)))&&(a4==17))&&(a28==15)))&&(a1==1))){ __VERIFIER_control_true(1358, " ");

	    	a26 = 19;
	    	return 23;
	    } else { __VERIFIER_control_false(1361, " ");
 __VERIFIER_reached_control(1361, " ");
if(((a25==1)&&(((((!(a3==1)&&(!(a7==1)&&((input==6)&&((a26==18)||(a26==19)))))&&(a28==15))&&(a4==18))&&(a1==1))&&(a14==19)))){ __VERIFIER_control_true(1361, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1368, " ");
 __VERIFIER_reached_control(1368, " ");
if(((a28==15)&&(!(a3==1)&&((a4==18)&&(((a1==1)&&((((!(a7==1)&&(a26==19))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==3)))&&(a25==1)))))){ __VERIFIER_control_true(1368, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1375, " ");
 __VERIFIER_reached_control(1375, " ");
if(((a4==16)&&((a1==1)&&((a14==20)&&((!(a3==1)&&((a28==16)&&((input==3)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))))&&(a25==1)))))){ __VERIFIER_control_true(1375, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}} return calculate_output2(input);
	}

	int calculate_output2(int input) {
	    { __VERIFIER_reached_control(1386, " ");
if((((a28==16)&&((((a25==1)&&(((a1==1)&&((a4==18)&&(input==4)))&&(a14==18)))&&(a26==18))&&!(a7==1)))&&(a3==1))){ __VERIFIER_control_true(1386, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1392, " ");
 __VERIFIER_reached_control(1392, " ");
if(((a25==1)&&((a4==17)&&((a28==15)&&((((((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||(!(a7==1)&&(a26==18)))&&(input==1))&&(a3==1))&&(a14==19))&&(a1==1)))))){ __VERIFIER_control_true(1392, " ");

	    	a14 = 20;
	    	a26 = 17;
	    	a7 = 0;
	    	return 22;
	    } else { __VERIFIER_control_false(1397, " ");
 __VERIFIER_reached_control(1397, " ");
if(((a4==16)&&((!(a3==1)&&(((a14==19)&&((((input==3)&&(a28==15))&&(a26==19))&&(a25==1)))&&(a1==1)))&&(a7==1)))){ __VERIFIER_control_true(1397, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1402, " ");
 __VERIFIER_reached_control(1402, " ");
if(((!(a3==1)&&((((((a26==18)&&((input==1)&&(a4==16)))&&(a1==1))&&(a28==17))&&(a14==18))&&(a7==1)))&&(a25==1))){ __VERIFIER_control_true(1402, " ");

	    	return -1;
	    } else { __VERIFIER_control_false(1404, " ");
 __VERIFIER_reached_control(1404, " ");
if((((!(a7==1)&&((a14==18)&&(((!(a3==1)&&((input==3)&&(a1==1)))&&(a25==1))&&(a28==17))))&&(a4==16))&&(a26==18))){ __VERIFIER_control_true(1404, " ");

	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(1407, " ");
 __VERIFIER_reached_control(1407, " ");
if(((a28==16)&&(((((a14==20)&&((((input==4)&&((a26==18)||(a26==19)))&&!(a7==1))&&!(a3==1)))&&(a1==1))&&(a4==17))&&(a25==1)))){ __VERIFIER_control_true(1407, " ");

	    	a26 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1412, " ");
 __VERIFIER_reached_control(1412, " ");
if(((!(a3==1)&&((a25==1)&&((a28==17)&&((a14==18)&&((a4==17)&&(((input==3)&&((a26==17)||(a26==18)))&&(a7==1)))))))&&(a1==1))){ __VERIFIER_control_true(1412, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1418, " ");
 __VERIFIER_reached_control(1418, " ");
if((((a3==1)&&(((((((a14==19)&&(!(a7==1)&&(a26==19)))||(((a7==1)&&(a26==17))&&(a14==20)))&&(input==2))&&(a1==1))&&(a25==1))&&(a4==18)))&&(a28==17))){ __VERIFIER_control_true(1418, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1425, " ");
 __VERIFIER_reached_control(1425, " ");
if(((a14==20)&&((((!(a3==1)&&((a4==17)&&(((input==1)&&((a26==19)||((a26==17)||(a26==18))))&&(a28==17))))&&!(a7==1))&&(a25==1))&&(a1==1)))){ __VERIFIER_control_true(1425, " ");

	    	a26 = 18;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 18;
	    	return 22;
	    } else { __VERIFIER_control_false(1431, " ");
 __VERIFIER_reached_control(1431, " ");
if((((a3==1)&&((((((input==5)&&((((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1))))&&(a25==1))&&(a28==16))&&(a14==20))&&(a1==1)))&&(a4==17))){ __VERIFIER_control_true(1431, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1438, " ");
 __VERIFIER_reached_control(1438, " ");
if((((((((a25==1)&&((((a26==17)||(a26==18))&&(input==6))&&(a1==1)))&&(a4==17))&&!(a3==1))&&(a14==18))&&!(a7==1))&&(a28==15))){ __VERIFIER_control_true(1438, " ");

	    	a26 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1444, " ");
 __VERIFIER_reached_control(1444, " ");
if(((a4==17)&&(((((a25==1)&&(((((a26==18)&&!(a7==1))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==3))&&(a1==1)))&&(a3==1))&&(a28==15))&&(a14==19)))){ __VERIFIER_control_true(1444, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1450, " ");
 __VERIFIER_reached_control(1450, " ");
if((((a25==1)&&((a26==19)&&((a14==20)&&((a3==1)&&(((a1==1)&&((input==2)&&(a4==18)))&&(a7==1))))))&&(a28==15))){ __VERIFIER_control_true(1450, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1455, " ");
 __VERIFIER_reached_control(1455, " ");
if(((a26==19)&&((a28==15)&&((a25==1)&&(((a1==1)&&((!(a3==1)&&((a4==16)&&(input==3)))&&(a14==20)))&&(a7==1)))))){ __VERIFIER_control_true(1455, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1460, " ");
 __VERIFIER_reached_control(1460, " ");
if((((((a1==1)&&((a26==17)&&((a25==1)&&(((input==2)&&(a7==1))&&(a14==19)))))&&(a28==16))&&(a3==1))&&(a4==18))){ __VERIFIER_control_true(1460, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1465, " ");
 __VERIFIER_reached_control(1465, " ");
if((!(a7==1)&&((a25==1)&&(((a1==1)&&(((((a14==20)&&(input==4))&&!(a3==1))&&(a4==18))&&(a26==17)))&&(a28==15))))){ __VERIFIER_control_true(1465, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1471, " ");
 __VERIFIER_reached_control(1471, " ");
if(((a28==15)&&((a1==1)&&((a4==18)&&(!(a3==1)&&((((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==5))&&(a25==1))&&(a14==18))))))){ __VERIFIER_control_true(1471, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1477, " ");
 __VERIFIER_reached_control(1477, " ");
if((((a14==19)&&((a4==18)&&((a28==16)&&((a25==1)&&(!(a7==1)&&((a1==1)&&((input==2)&&((a26==18)||(a26==19)))))))))&&(a3==1))){ __VERIFIER_control_true(1477, " ");

	    	a28 = 17;
	    	a26 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(1481, " ");
 __VERIFIER_reached_control(1481, " ");
if((((((a28==16)&&((((((a26==17)||(a26==18))&&(input==3))&&(a1==1))&&(a4==17))&&!(a7==1)))&&(a14==19))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(1481, " ");

	    	a26 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1484, " ");
 __VERIFIER_reached_control(1484, " ");
if((((((a25==1)&&((a4==17)&&((((((a26==18)&&!(a7==1))&&(a14==19))||((!(a7==1)&&(a26==19))&&(a14==19)))||((a14==20)&&((a7==1)&&(a26==17))))&&(input==2))))&&(a3==1))&&(a28==17))&&(a1==1))){ __VERIFIER_control_true(1484, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1491, " ");
 __VERIFIER_reached_control(1491, " ");
if((((a25==1)&&(((((a4==18)&&(((input==1)&&(a26==19))&&(a28==15)))&&(a7==1))&&(a14==20))&&(a1==1)))&&(a3==1))){ __VERIFIER_control_true(1491, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1496, " ");
 __VERIFIER_reached_control(1496, " ");
if(((a28==15)&&((a26==19)&&((a4==17)&&((!(a7==1)&&(!(a3==1)&&(((a1==1)&&(input==5))&&(a14==19))))&&(a25==1)))))){ __VERIFIER_control_true(1496, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1503, " ");
 __VERIFIER_reached_control(1503, " ");
if(((a1==1)&&((a25==1)&&(((a3==1)&&(((a4==17)&&(((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==3)))&&(a28==16)))&&(a14==20))))){ __VERIFIER_control_true(1503, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1510, " ");
 __VERIFIER_reached_control(1510, " ");
if(((a25==1)&&(((a14==19)&&(((((a3==1)&&((a4==18)&&(input==2)))&&(a26==19))&&(a28==15))&&(a1==1)))&&(a7==1)))){ __VERIFIER_control_true(1510, " ");

	    	a28 = 17;
	    	a26 = 17;
	    	a7 = 0;
	    	a14 = 20;
	    	return 22;
	    } else { __VERIFIER_control_false(1516, " ");
 __VERIFIER_reached_control(1516, " ");
if((((a25==1)&&((a4==17)&&((a1==1)&&(((((a7==1)&&((a28==16)&&(a26==17)))&&(a14==18))||(((a14==20)&&(!(a7==1)&&((a28==15)&&(a26==18))))||((a14==20)&&(!(a7==1)&&((a26==19)&&(a28==15))))))&&(input==6)))))&&!(a3==1))){ __VERIFIER_control_true(1516, " ");

	    	a7 = 0;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 20;
	    	return 23;
	    } else { __VERIFIER_control_false(1522, " ");
 __VERIFIER_reached_control(1522, " ");
if(((a25==1)&&((((!(a3==1)&&((a4==18)&&((a28==15)&&((a26==17)&&(input==1)))))&&(a1==1))&&(a14==20))&&!(a7==1)))){ __VERIFIER_control_true(1522, " ");

	    	a28 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	return 22;
	    } else { __VERIFIER_control_false(1527, " ");
 __VERIFIER_reached_control(1527, " ");
if((((a28==17)&&(((a4==18)&&((a26==18)&&((a3==1)&&((a1==1)&&((a14==19)&&(input==6))))))&&!(a7==1)))&&(a25==1))){ __VERIFIER_control_true(1527, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1534, " ");
 __VERIFIER_reached_control(1534, " ");
if(((((a3==1)&&((((a26==18)&&(((a25==1)&&(input==5))&&(a28==16)))&&!(a7==1))&&(a1==1)))&&(a4==18))&&(a14==18))){ __VERIFIER_control_true(1534, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1540, " ");
 __VERIFIER_reached_control(1540, " ");
if(((a3==1)&&((a4==18)&&(((!(a7==1)&&((a14==19)&&((a1==1)&&((input==3)&&((a26==17)||(a26==18))))))&&(a25==1))&&(a28==15))))){ __VERIFIER_control_true(1540, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1546, " ");
 __VERIFIER_reached_control(1546, " ");
if((((a28==15)&&((a25==1)&&((a7==1)&&((((a3==1)&&((input==1)&&(a1==1)))&&(a26==19))&&(a4==18)))))&&(a14==19))){ __VERIFIER_control_true(1546, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1551, " ");
 __VERIFIER_reached_control(1551, " ");
if(((!(a3==1)&&((((((a4==16)&&((a25==1)&&(input==5)))&&(a26==19))&&(a7==1))&&(a1==1))&&(a14==18)))&&(a28==15))){ __VERIFIER_control_true(1551, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1555, " ");
 __VERIFIER_reached_control(1555, " ");
if((((((a28==16)&&(((a14==20)&&(((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==2)))&&!(a3==1)))&&(a4==17))&&(a25==1))&&(a1==1))){ __VERIFIER_control_true(1555, " ");

	    	a7 = 0;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1560, " ");
 __VERIFIER_reached_control(1560, " ");
if(((a3==1)&&((((((a1==1)&&((input==2)&&((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1)))))&&(a25==1))&&(a28==16))&&(a4==17))&&(a14==18)))){ __VERIFIER_control_true(1560, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1566, " ");
 __VERIFIER_reached_control(1566, " ");
if(((a28==17)&&((!(a7==1)&&((a25==1)&&((a1==1)&&((a26==18)&&(((a14==18)&&(input==6))&&(a4==16))))))&&!(a3==1)))){ __VERIFIER_control_true(1566, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1572, " ");
 __VERIFIER_reached_control(1572, " ");
if(((a1==1)&&((a25==1)&&((((((a26==18)&&((input==5)&&(a28==17)))&&(a14==19))&&!(a7==1))&&!(a3==1))&&(a4==16))))){ __VERIFIER_control_true(1572, " ");

	    	a4 = 17;
	    	a14 = 18;
	    	a28 = 16;
	    	a7 = 1;
	    	return 23;
	    } else { __VERIFIER_control_false(1578, " ");
 __VERIFIER_reached_control(1578, " ");
if(((a1==1)&&((a25==1)&&(((a3==1)&&((a28==15)&&((((a14==19)&&((a26==19)&&!(a7==1)))||((a14==20)&&((a26==17)&&(a7==1))))&&(input==5))))&&(a4==17))))){ __VERIFIER_control_true(1578, " ");

	    	a7 = 0;
	    	a26 = 17;
	    	a14 = 19;
	    	a28 = 16;
	    	return 24;
	    } else { __VERIFIER_control_false(1584, " ");
 __VERIFIER_reached_control(1584, " ");
if(((a28==17)&&(((a25==1)&&(((((((a14==18)&&(!(a7==1)&&(a26==19)))||((a14==19)&&((a7==1)&&(a26==17))))||((a14==19)&&((a7==1)&&(a26==18))))&&(input==2))&&(a4==18))&&(a1==1)))&&!(a3==1)))){ __VERIFIER_control_true(1584, " ");

	    	a7 = 1;
	    	a26 = 19;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1589, " ");
 __VERIFIER_reached_control(1589, " ");
if(((a1==1)&&(((a7==1)&&((a28==15)&&((a14==20)&&((((a26==19)&&(input==2))&&(a3==1))&&(a4==17)))))&&(a25==1)))){ __VERIFIER_control_true(1589, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1594, " ");
 __VERIFIER_reached_control(1594, " ");
if(((!(a3==1)&&((a4==17)&&(!(a7==1)&&(((((input==5)&&(a14==19))&&(a26==19))&&(a25==1))&&(a1==1)))))&&(a28==17))){ __VERIFIER_control_true(1594, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1602, " ");
 __VERIFIER_reached_control(1602, " ");
if(((((a1==1)&&((((((input==2)&&(a28==17))&&!(a7==1))&&(a26==18))&&(a25==1))&&!(a3==1)))&&(a4==16))&&(a14==19))){ __VERIFIER_control_true(1602, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1609, " ");
 __VERIFIER_reached_control(1609, " ");
if((((a4==18)&&(((a14==18)&&((a1==1)&&(!(a7==1)&&((a25==1)&&((a26==18)&&(input==2))))))&&(a3==1)))&&(a28==16))){ __VERIFIER_control_true(1609, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1615, " ");
 __VERIFIER_reached_control(1615, " ");
if(((((a25==1)&&((((a14==20)&&((input==4)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))))&&(a28==16))&&!(a3==1)))&&(a1==1))&&(a4==16))){ __VERIFIER_control_true(1615, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1622, " ");
 __VERIFIER_reached_control(1622, " ");
if(((a4==17)&&((!(a3==1)&&((a25==1)&&((a28==16)&&((((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17)))&&(input==5))&&(a14==18)))))&&(a1==1)))){ __VERIFIER_control_true(1622, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1629, " ");
 __VERIFIER_reached_control(1629, " ");
if(((a1==1)&&((a14==20)&&((a25==1)&&((!(a3==1)&&((a4==16)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==4))))&&(a28==17)))))){ __VERIFIER_control_true(1629, " ");

	    	a26 = 18;
	    	a4 = 17;
	    	a28 = 16;
	    	a14 = 19;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(1636, " ");
 __VERIFIER_reached_control(1636, " ");
if(((((((input==3)&&(((((a26==17)&&(a28==17))&&(a7==1))&&(a14==18))||(((a14==20)&&(!(a7==1)&&((a26==18)&&(a28==16))))||((((a28==16)&&(a26==19))&&!(a7==1))&&(a14==20)))))&&!(a3==1))&&(a4==16))&&(a25==1))&&(a1==1))){ __VERIFIER_control_true(1636, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1643, " ");
 __VERIFIER_reached_control(1643, " ");
if((((((a25==1)&&((a1==1)&&((((((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))&&(input==4))&&(a14==19))))&&(a28==16))&&(a4==18))&&(a3==1))){ __VERIFIER_control_true(1643, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1650, " ");
 __VERIFIER_reached_control(1650, " ");
if((((a28==15)&&((a26==18)&&((((((input==1)&&(a4==17))&&(a1==1))&&(a7==1))&&(a14==19))&&(a25==1))))&&(a3==1))){ __VERIFIER_control_true(1650, " ");

	    	a14 = 20;
	    	return 26;
	    } else { __VERIFIER_control_false(1653, " ");
 __VERIFIER_reached_control(1653, " ");
if((!(a3==1)&&((((((((((a26==19)&&!(a7==1))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20)))||(((a26==18)&&(a7==1))&&(a14==20)))&&(input==4))&&(a28==16))&&(a25==1))&&(a4==18))&&(a1==1)))){ __VERIFIER_control_true(1653, " ");

	    	a26 = 19;
	    	a14 = 20;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(1658, " ");
 __VERIFIER_reached_control(1658, " ");
if(((a25==1)&&((a14==18)&&(((((a4==18)&&(((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17)))&&(input==6)))&&(a28==16))&&(a3==1))&&(a1==1))))){ __VERIFIER_control_true(1658, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1664, " ");
 __VERIFIER_reached_control(1664, " ");
if(((a25==1)&&((a4==16)&&(!(a3==1)&&(((((a14==20)&&(!(a7==1)&&((a26==19)&&(a28==15))))||((a14==18)&&(((a28==16)&&(a26==17))&&(a7==1))))&&(input==5))&&(a1==1)))))){ __VERIFIER_control_true(1664, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1671, " ");
 __VERIFIER_reached_control(1671, " ");
if(((a28==15)&&((a4==17)&&((!(a3==1)&&((a14==18)&&((a1==1)&&(((input==3)&&((a26==18)||(a26==19)))&&(a7==1)))))&&(a25==1))))){ __VERIFIER_control_true(1671, " ");

	    	a4 = 16;
	    	a26 = 18;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1676, " ");
 __VERIFIER_reached_control(1676, " ");
if(((a14==18)&&((((((a4==16)&&((!(a3==1)&&(input==1))&&(a25==1)))&&(a28==17))&&(a1==1))&&!(a7==1))&&(a26==18)))){ __VERIFIER_control_true(1676, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1682, " ");
 __VERIFIER_reached_control(1682, " ");
if((((((((a25==1)&&((a7==1)&&((input==6)&&(((a26==17)||(a26==18))||(a26==19)))))&&(a1==1))&&(a4==17))&&(a28==15))&&!(a3==1))&&(a14==20))){ __VERIFIER_control_true(1682, " ");

	    	a26 = 18;
	    	a4 = 16;
	    	a14 = 19;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1688, " ");
 __VERIFIER_reached_control(1688, " ");
if((((a3==1)&&((a28==17)&&((a4==18)&&(((a25==1)&&((input==6)&&((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))))&&(a14==20)))))&&(a1==1))){ __VERIFIER_control_true(1688, " ");

	    	a14 = 18;
	    	a26 = 18;
	    	a28 = 16;
	    	a3 = 0;
	    	a7 = 0;
	    	a4 = 16;
	    	return 24;
	    } else { __VERIFIER_control_false(1696, " ");
 __VERIFIER_reached_control(1696, " ");
if(((a26==18)&&((a14==19)&&(((a4==17)&&((!(a3==1)&&((a1==1)&&((input==2)&&!(a7==1))))&&(a28==17)))&&(a25==1))))){ __VERIFIER_control_true(1696, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1704, " ");
 __VERIFIER_reached_control(1704, " ");
if((((((a4==17)&&(((((!(a7==1)&&(a26==18))||(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17))))&&(input==4))&&(a1==1))&&(a25==1)))&&(a3==1))&&(a28==15))&&(a14==19))){ __VERIFIER_control_true(1704, " ");

	    	a26 = 17;
	    	a28 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	return 22;
	    } else { __VERIFIER_control_false(1710, " ");
 __VERIFIER_reached_control(1710, " ");
if(((((((a25==1)&&((a26==18)&&((a7==1)&&((input==1)&&(a14==20)))))&&(a3==1))&&(a1==1))&&(a4==17))&&(a28==15))){ __VERIFIER_control_true(1710, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1715, " ");
 __VERIFIER_reached_control(1715, " ");
if(((a14==19)&&((a26==19)&&((a7==1)&&((((a3==1)&&(((a25==1)&&(input==6))&&(a4==18)))&&(a1==1))&&(a28==15)))))){ __VERIFIER_control_true(1715, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1720, " ");
 __VERIFIER_reached_control(1720, " ");
if((((a4==17)&&(((a1==1)&&((((((!(a7==1)&&(a26==18))&&(a14==19))||(((a26==19)&&!(a7==1))&&(a14==19)))||((a14==20)&&((a26==17)&&(a7==1))))&&(input==4))&&(a3==1)))&&(a25==1)))&&(a28==16))){ __VERIFIER_control_true(1720, " ");

	    	a28 = 15;
	    	a14 = 20;
	    	a7 = 1;
	    	a4 = 18;
	    	a26 = 19;
	    	return 26;
	    } else { __VERIFIER_control_false(1727, " ");
 __VERIFIER_reached_control(1727, " ");
if(((a14==19)&&((a4==18)&&(!(a7==1)&&((a25==1)&&(((((a1==1)&&(input==2))&&(a28==16))&&(a26==18))&&!(a3==1))))))){ __VERIFIER_control_true(1727, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1734, " ");
 __VERIFIER_reached_control(1734, " ");
if(((!(a3==1)&&(((a4==18)&&(((input==1)&&((((a26==19)&&!(a7==1))&&(a14==18))||(((a26==17)&&(a7==1))&&(a14==19))))&&(a28==16)))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(1734, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1742, " ");
 __VERIFIER_reached_control(1742, " ");
if(((a28==15)&&(((a25==1)&&(((((((a26==18)&&(a7==1))&&(a14==20))||((((a26==19)&&!(a7==1))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20))))&&(input==6))&&(a4==18))&&(a1==1)))&&(a3==1)))){ __VERIFIER_control_true(1742, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1748, " ");
 __VERIFIER_reached_control(1748, " ");
if(((!(a7==1)&&((a4==18)&&((a1==1)&&(((a26==18)&&(((input==1)&&(a14==19))&&(a28==17)))&&(a3==1)))))&&(a25==1))){ __VERIFIER_control_true(1748, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1755, " ");
 __VERIFIER_reached_control(1755, " ");
if((((a4==18)&&(((((a1==1)&&((a25==1)&&((a14==18)&&(input==5))))&&(a3==1))&&!(a7==1))&&(a26==19)))&&(a28==16))){ __VERIFIER_control_true(1755, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1761, " ");
 __VERIFIER_reached_control(1761, " ");
if(((a28==16)&&(((a25==1)&&(((a4==18)&&((((a14==20)&&((a7==1)&&(a26==18)))||((((a26==19)&&!(a7==1))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20))))&&(input==2)))&&(a1==1)))&&!(a3==1)))){ __VERIFIER_control_true(1761, " ");

	    	a28 = 17;
	    	a4 = 16;
	    	a26 = 19;
	    	a7 = 0;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1769, " ");
 __VERIFIER_reached_control(1769, " ");
if(((a4==18)&&(!(a3==1)&&((((a25==1)&&((a28==16)&&((input==6)&&(((a26==18)&&!(a7==1))||(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))))))&&(a1==1))&&(a14==18))))){ __VERIFIER_control_true(1769, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1776, " ");
 __VERIFIER_reached_control(1776, " ");
if((!(a7==1)&&((a28==15)&&((((a25==1)&&(((a14==18)&&((((a26==17)||(a26==18))||(a26==19))&&(input==4)))&&(a1==1)))&&(a3==1))&&(a4==18))))){ __VERIFIER_control_true(1776, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1781, " ");
 __VERIFIER_reached_control(1781, " ");
if(((a3==1)&&((a25==1)&&((a26==18)&&((a4==18)&&(((a7==1)&&(((a28==15)&&(input==3))&&(a14==19)))&&(a1==1))))))){ __VERIFIER_control_true(1781, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1786, " ");
 __VERIFIER_reached_control(1786, " ");
if(((a1==1)&&(((((a28==16)&&((input==1)&&(((a14==20)&&((a26==17)&&(a7==1)))||(((!(a7==1)&&(a26==18))&&(a14==19))||(((a26==19)&&!(a7==1))&&(a14==19))))))&&(a4==17))&&(a25==1))&&(a3==1)))){ __VERIFIER_control_true(1786, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1793, " ");
 __VERIFIER_reached_control(1793, " ");
if(((((a28==15)&&((a1==1)&&((a4==17)&&(((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==1))&&(a14==19)))))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(1793, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1800, " ");
 __VERIFIER_reached_control(1800, " ");
if((((a14==19)&&(((((a1==1)&&((input==3)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))))&&(a3==1))&&(a28==17))&&(a4==17)))&&(a25==1))){ __VERIFIER_control_true(1800, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1807, " ");
 __VERIFIER_reached_control(1807, " ");
if(((a28==17)&&(((a3==1)&&((a25==1)&&((a1==1)&&((input==6)&&(((a14==18)&&((a26==19)&&!(a7==1)))||((a14==19)&&((a26==17)&&(a7==1))))))))&&(a4==18)))){ __VERIFIER_control_true(1807, " ");

	    	a26 = 19;
	    	a14 = 18;
	    	a7 = 0;
	    	return -1;
	    } else { __VERIFIER_control_false(1812, " ");
 __VERIFIER_reached_control(1812, " ");
if((((a25==1)&&((a4==18)&&((a1==1)&&((input==4)&&((((a7==1)&&((a26==17)&&(a28==17)))&&(a14==18))||(((a14==20)&&(!(a7==1)&&((a28==16)&&(a26==18))))||((a14==20)&&(!(a7==1)&&((a26==19)&&(a28==16))))))))))&&(a3==1))){ __VERIFIER_control_true(1812, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1819, " ");
 __VERIFIER_reached_control(1819, " ");
if(((a28==15)&&(((((((a4==16)&&((a14==18)&&(input==3)))&&(a25==1))&&(a7==1))&&!(a3==1))&&(a1==1))&&(a26==19)))){ __VERIFIER_control_true(1819, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1823, " ");
 __VERIFIER_reached_control(1823, " ");
if((((((((a28==15)&&(((input==6)&&(a4==17))&&(a14==20)))&&(a7==1))&&(a26==19))&&(a3==1))&&(a25==1))&&(a1==1))){ __VERIFIER_control_true(1823, " ");

	    	a28 = 17;
	    	a14 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(1827, " ");
 __VERIFIER_reached_control(1827, " ");
if(((a14==19)&&(((a1==1)&&(((!(a7==1)&&((a4==18)&&((input==1)&&(a28==16))))&&(a26==18))&&!(a3==1)))&&(a25==1)))){ __VERIFIER_control_true(1827, " ");

	    	a7 = 1;
	    	a26 = 19;
	    	a4 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1835, " ");
 __VERIFIER_reached_control(1835, " ");
if(((a28==17)&&((((!(a3==1)&&((input==3)&&((((a14==18)&&(!(a7==1)&&(a26==19)))||((a14==19)&&((a7==1)&&(a26==17))))||((a14==19)&&((a26==18)&&(a7==1))))))&&(a25==1))&&(a4==17))&&(a1==1)))){ __VERIFIER_control_true(1835, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1843, " ");
 __VERIFIER_reached_control(1843, " ");
if(((a28==16)&&(((a7==1)&&((a25==1)&&((a14==19)&&((a1==1)&&((((a26==17)||(a26==18))&&(input==5))&&(a4==16))))))&&!(a3==1)))){ __VERIFIER_control_true(1843, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1849, " ");
 __VERIFIER_reached_control(1849, " ");
if(((a4==16)&&(((((a7==1)&&((a25==1)&&(((input==4)&&(a1==1))&&!(a3==1))))&&(a14==19))&&(a28==15))&&(a26==19)))){ __VERIFIER_control_true(1849, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1854, " ");
 __VERIFIER_reached_control(1854, " ");
if(((a28==17)&&((a3==1)&&(((a4==17)&&((((((!(a7==1)&&(a26==18))&&(a14==18))||((a14==18)&&(!(a7==1)&&(a26==19))))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==2))&&(a25==1)))&&(a1==1))))){ __VERIFIER_control_true(1854, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1861, " ");
 __VERIFIER_reached_control(1861, " ");
if((((a3==1)&&(((((((((a26==18)&&(a28==16))&&!(a7==1))&&(a14==20))||((!(a7==1)&&((a28==16)&&(a26==19)))&&(a14==20)))||((a14==18)&&((a7==1)&&((a26==17)&&(a28==17)))))&&(input==3))&&(a25==1))&&(a1==1)))&&(a4==18))){ __VERIFIER_control_true(1861, " ");

	    	a26 = 19;
	    	a4 = 16;
	    	a3 = 0;
	    	a28 = 15;
	    	a7 = 0;
	    	a14 = 20;
	    	return 22;
	    } else { __VERIFIER_control_false(1869, " ");
 __VERIFIER_reached_control(1869, " ");
if(((a1==1)&&((a3==1)&&(((a28==16)&&((a25==1)&&((a14==20)&&((a4==17)&&(((a26==18)||(a26==19))&&(input==5))))))&&!(a7==1))))){ __VERIFIER_control_true(1869, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1876, " ");
 __VERIFIER_reached_control(1876, " ");
if(((a4==18)&&(((a14==18)&&((a28==15)&&(!(a7==1)&&(((a25==1)&&((((a26==17)||(a26==18))||(a26==19))&&(input==2)))&&(a1==1)))))&&(a3==1)))){ __VERIFIER_control_true(1876, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1881, " ");
 __VERIFIER_reached_control(1881, " ");
if((((a4==17)&&((a28==16)&&(((a3==1)&&(((((a26==17)&&(a7==1))&&(a14==20))||((((a26==18)&&!(a7==1))&&(a14==19))||(((a26==19)&&!(a7==1))&&(a14==19))))&&(input==3)))&&(a1==1))))&&(a25==1))){ __VERIFIER_control_true(1881, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1888, " ");
 __VERIFIER_reached_control(1888, " ");
if(((a14==19)&&((!(a3==1)&&((((a1==1)&&((a7==1)&&((input==4)&&((a26==18)||(a26==19)))))&&(a28==17))&&(a25==1)))&&(a4==16)))){ __VERIFIER_control_true(1888, " ");

	    	a14 = 20;
	    	a28 = 15;
	    	a26 = 18;
	    	a4 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(1894, " ");
 __VERIFIER_reached_control(1894, " ");
if(((((a1==1)&&(((a3==1)&&((a14==19)&&((a4==18)&&((a7==1)&&(input==4)))))&&(a28==15)))&&(a26==19))&&(a25==1))){ __VERIFIER_control_true(1894, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1899, " ");
 __VERIFIER_reached_control(1899, " ");
if((((a1==1)&&(!(a3==1)&&((((a4==17)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==4)))&&(a14==19))&&(a28==15))))&&(a25==1))){ __VERIFIER_control_true(1899, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 16;
	    	a14 = 20;
	    	return 24;
	    } else { __VERIFIER_control_false(1905, " ");
 __VERIFIER_reached_control(1905, " ");
if((((a28==15)&&(((((a25==1)&&((((a26==18)||(a26==19))&&(input==5))&&(a4==18)))&&(a7==1))&&(a14==18))&&(a3==1)))&&(a1==1))){ __VERIFIER_control_true(1905, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1909, " ");
 __VERIFIER_reached_control(1909, " ");
if(((a25==1)&&(((a28==15)&&(((a7==1)&&(!(a3==1)&&((((a26==18)||(a26==19))&&(input==2))&&(a4==17))))&&(a14==18)))&&(a1==1)))){ __VERIFIER_control_true(1909, " ");

	    	a26 = 19;
	    	return 23;
	    } else { __VERIFIER_control_false(1912, " ");
 __VERIFIER_reached_control(1912, " ");
if((((a14==19)&&(((!(a3==1)&&((((input==5)&&((a26==17)||(a26==18)))&&(a7==1))&&(a28==15)))&&(a4==16))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(1912, " ");

	    	a28 = 17;
	    	a14 = 18;
	    	a26 = 17;
	    	return 22;
	    } else { __VERIFIER_control_false(1917, " ");
 __VERIFIER_reached_control(1917, " ");
if(((a25==1)&&(((a1==1)&&(!(a3==1)&&(((a4==17)&&((a28==16)&&(((a26==18)||(a26==19))&&(input==2))))&&(a14==18))))&&!(a7==1)))){ __VERIFIER_control_true(1917, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1924, " ");
 __VERIFIER_reached_control(1924, " ");
if(((a14==20)&&((((a3==1)&&(((((input==1)&&(a25==1))&&(a28==16))&&(a1==1))&&(a7==1)))&&(a26==17))&&(a4==18)))){ __VERIFIER_control_true(1924, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1929, " ");
 __VERIFIER_reached_control(1929, " ");
if(((a25==1)&&(((a14==18)&&(!(a3==1)&&((a4==17)&&((a28==16)&&(((((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1)))&&(input==3))))))&&(a1==1)))){ __VERIFIER_control_true(1929, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(1936, " ");
 __VERIFIER_reached_control(1936, " ");
if((((a1==1)&&((((!(a7==1)&&((a25==1)&&((input==4)&&(a14==19))))&&(a4==17))&&!(a3==1))&&(a26==18)))&&(a28==15))){ __VERIFIER_control_true(1936, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1943, " ");
 __VERIFIER_reached_control(1943, " ");
if(((((((a1==1)&&(((((a26==18)||(a26==19))&&(input==5))&&(a14==20))&&!(a3==1)))&&!(a7==1))&&(a28==15))&&(a25==1))&&(a4==18))){ __VERIFIER_control_true(1943, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1950, " ");
 __VERIFIER_reached_control(1950, " ");
if((!(a7==1)&&(((a14==19)&&((a4==17)&&(((!(a3==1)&&((input==4)&&(a25==1)))&&(a28==17))&&(a26==18))))&&(a1==1)))){ __VERIFIER_control_true(1950, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1958, " ");
 __VERIFIER_reached_control(1958, " ");
if(((a28==17)&&((a25==1)&&((((((input==3)&&((!(a7==1)&&(a26==18))||(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))))&&!(a3==1))&&(a1==1))&&(a4==17))&&(a14==18))))){ __VERIFIER_control_true(1958, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(1965, " ");
 __VERIFIER_reached_control(1965, " ");
if((((!(a7==1)&&((a28==16)&&((a14==18)&&(((a1==1)&&((input==1)&&((a26==18)||(a26==19))))&&!(a3==1)))))&&(a25==1))&&(a4==16))){ __VERIFIER_control_true(1965, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(1971, " ");
 __VERIFIER_reached_control(1971, " ");
if(((a25==1)&&((a1==1)&&(((((a7==1)&&((a28==15)&&(((a4==16)&&!(a3==1))&&(a26==18))))&&(a14==18))||(((a14==20)&&(!(a7==1)&&((((a3==1)&&(a4==18))&&(a26==19))&&(a28==17))))||(((a7==1)&&((((a4==16)&&!(a3==1))&&(a26==17))&&(a28==15)))&&(a14==18))))&&(input==3))))){ __VERIFIER_control_true(1971, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1979, " ");
 __VERIFIER_reached_control(1979, " ");
if(((a25==1)&&((((a28==15)&&((a26==17)&&((a4==18)&&((a14==19)&&((a3==1)&&(input==1))))))&&(a1==1))&&(a7==1)))){ __VERIFIER_control_true(1979, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(1983, " ");
 __VERIFIER_reached_control(1983, " ");
if(((a1==1)&&((!(a7==1)&&(((a14==19)&&(((a3==1)&&((input==6)&&((a26==18)||(a26==19))))&&(a4==18)))&&(a28==16)))&&(a25==1)))){ __VERIFIER_control_true(1983, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(1990, " ");
 __VERIFIER_reached_control(1990, " ");
if(((((a1==1)&&((input==2)&&(((a14==20)&&(!(a7==1)&&((a28==17)&&((a4==17)&&(a26==19)))))||(((a7==1)&&(((a26==17)&&(a4==18))&&(a28==15)))&&(a14==18)))))&&(a3==1))&&(a25==1))){ __VERIFIER_control_true(1990, " ");

	    	a4 = 18;
	    	a26 = 18;
	    	a14 = 18;
	    	a7 = 0;
	    	a28 = 17;
	    	return 22;
	    } else { __VERIFIER_control_false(1997, " ");
 __VERIFIER_reached_control(1997, " ");
if(((a4==17)&&(!(a3==1)&&((((((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==6))&&(a28==15))&&(a1==1))&&(a25==1))&&(a14==19))))){ __VERIFIER_control_true(1997, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2004, " ");
 __VERIFIER_reached_control(2004, " ");
if(((((a4==16)&&((a25==1)&&((((a7==1)&&((a14==18)&&(input==4)))&&(a26==18))&&(a28==17))))&&(a1==1))&&!(a3==1))){ __VERIFIER_control_true(2004, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2009, " ");
 __VERIFIER_reached_control(2009, " ");
if(((((a28==17)&&((a1==1)&&(((input==4)&&((((a26==17)&&(a7==1))&&(a14==19))||(((a14==18)&&(!(a7==1)&&(a26==18)))||((a14==18)&&((a26==19)&&!(a7==1))))))&&(a25==1))))&&(a3==1))&&(a4==17))){ __VERIFIER_control_true(2009, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2016, " ");
 __VERIFIER_reached_control(2016, " ");
if((((a25==1)&&((a1==1)&&((a4==17)&&((input==2)&&((((!(a7==1)&&((a28==15)&&(a26==18)))&&(a14==20))||((((a28==15)&&(a26==19))&&!(a7==1))&&(a14==20)))||(((a7==1)&&((a26==17)&&(a28==16)))&&(a14==18)))))))&&!(a3==1))){ __VERIFIER_control_true(2016, " ");

	    	a26 = 19;
	    	a14 = 20;
	    	a28 = 16;
	    	a7 = 0;
	    	return 24;
	    } else { __VERIFIER_control_false(2022, " ");
 __VERIFIER_reached_control(2022, " ");
if(((a1==1)&&((((a25==1)&&((((((a7==1)&&(a26==17))&&(a14==19))||(((!(a7==1)&&(a26==18))&&(a14==18))||(((a26==19)&&!(a7==1))&&(a14==18))))&&(input==6))&&(a3==1)))&&(a28==16))&&(a4==17)))){ __VERIFIER_control_true(2022, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2029, " ");
 __VERIFIER_reached_control(2029, " ");
if(((((!(a3==1)&&((a25==1)&&((a14==18)&&((input==3)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))||((a26==18)&&!(a7==1)))))))&&(a28==17))&&(a1==1))&&(a4==18))){ __VERIFIER_control_true(2029, " ");

	    	a7 = 0;
	    	a26 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(2033, " ");
 __VERIFIER_reached_control(2033, " ");
if((!(a3==1)&&((((a1==1)&&(((a7==1)&&((a28==16)&&((a14==20)&&(input==6))))&&(a4==17)))&&(a26==17))&&(a25==1)))){ __VERIFIER_control_true(2033, " ");

	    	a14 = 19;
	    	a7 = 0;
	    	a26 = 19;
	    	a28 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(2039, " ");
 __VERIFIER_reached_control(2039, " ");
if(((((a25==1)&&(((((((a26==17)||(a26==18))&&(input==5))&&!(a3==1))&&(a4==18))&&(a14==18))&&(a28==17)))&&(a7==1))&&(a1==1))){ __VERIFIER_control_true(2039, " ");

	    	a26 = 18;
	    	a3 = 1;
	    	a7 = 0;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2045, " ");
 __VERIFIER_reached_control(2045, " ");
if(((a28==16)&&(((!(a3==1)&&((a4==18)&&((((input==1)&&((a26==17)||(a26==18)))&&(a25==1))&&(a7==1))))&&(a14==18))&&(a1==1)))){ __VERIFIER_control_true(2045, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2051, " ");
 __VERIFIER_reached_control(2051, " ");
if(((((((a3==1)&&((((((a26==19)&&!(a7==1))&&(a14==19))||((a14==20)&&((a26==17)&&(a7==1))))||(((a26==18)&&(a7==1))&&(a14==20)))&&(input==1)))&&(a25==1))&&(a1==1))&&(a28==15))&&(a4==18))){ __VERIFIER_control_true(2051, " ");

	    	a7 = 0;
	    	a28 = 17;
	    	a26 = 19;
	    	a14 = 20;
	    	return 21;
	    } else { __VERIFIER_control_false(2057, " ");
 __VERIFIER_reached_control(2057, " ");
if((((a28==16)&&(!(a3==1)&&((a14==19)&&((a4==17)&&(!(a7==1)&&(((a26==19)&&(input==1))&&(a1==1)))))))&&(a25==1))){ __VERIFIER_control_true(2057, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2065, " ");
 __VERIFIER_reached_control(2065, " ");
if(((a1==1)&&((a3==1)&&((a25==1)&&((a4==18)&&((((a14==18)&&((a7==1)&&((a28==16)&&(a26==17))))||(((a14==20)&&(((a28==15)&&(a26==18))&&!(a7==1)))||((!(a7==1)&&((a28==15)&&(a26==19)))&&(a14==20))))&&(input==2))))))){ __VERIFIER_control_true(2065, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2072, " ");
 __VERIFIER_reached_control(2072, " ");
if((((a3==1)&&(((a4==18)&&(((a1==1)&&((a14==18)&&((input==6)&&!(a7==1))))&&(a28==16)))&&(a26==19)))&&(a25==1))){ __VERIFIER_control_true(2072, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2078, " ");
 __VERIFIER_reached_control(2078, " ");
if(((((((a25==1)&&((a26==18)&&(((a4==18)&&(input==4))&&(a28==16))))&&(a1==1))&&!(a7==1))&&(a14==19))&&!(a3==1))){ __VERIFIER_control_true(2078, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2084, " ");
 __VERIFIER_reached_control(2084, " ");
if((((a1==1)&&((((((((a14==18)&&((a26==18)&&!(a7==1)))||((!(a7==1)&&(a26==19))&&(a14==18)))||((a14==19)&&((a26==17)&&(a7==1))))&&(input==1))&&(a4==17))&&(a28==17))&&(a25==1)))&&(a3==1))){ __VERIFIER_control_true(2084, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2091, " ");
 __VERIFIER_reached_control(2091, " ");
if(((a4==16)&&((!(a3==1)&&(((((a1==1)&&((input==5)&&(a25==1)))&&!(a7==1))&&(a28==17))&&(a14==19)))&&(a26==17)))){ __VERIFIER_control_true(2091, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2097, " ");
 __VERIFIER_reached_control(2097, " ");
if(((a4==16)&&((a25==1)&&(((a1==1)&&(((((input==3)&&((a26==17)||(a26==18)))&&!(a3==1))&&(a28==15))&&!(a7==1)))&&(a14==20))))){ __VERIFIER_control_true(2097, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2103, " ");
 __VERIFIER_reached_control(2103, " ");
if((!(a3==1)&&((a1==1)&&((a25==1)&&(((((input==6)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||(!(a7==1)&&(a26==18))))&&(a4==17))&&(a28==17))&&(a14==18)))))){ __VERIFIER_control_true(2103, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2110, " ");
 __VERIFIER_reached_control(2110, " ");
if(((a1==1)&&((a4==16)&&(!(a7==1)&&(((((a26==17)&&((a25==1)&&(input==1)))&&!(a3==1))&&(a14==18))&&(a28==17)))))){ __VERIFIER_control_true(2110, " ");

	    	a26 = 18;
	    	a7 = 1;
	    	return 21;
	    } else { __VERIFIER_control_false(2114, " ");
 __VERIFIER_reached_control(2114, " ");
if(((((((a28==15)&&(((((a26==17)||(a26==18))&&(input==6))&&!(a3==1))&&!(a7==1)))&&(a1==1))&&(a14==19))&&(a25==1))&&(a4==16))){ __VERIFIER_control_true(2114, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2120, " ");
 __VERIFIER_reached_control(2120, " ");
if(((a28==16)&&((a14==19)&&(((a7==1)&&(((((input==1)&&(a26==17))&&(a1==1))&&(a4==18))&&(a3==1)))&&(a25==1))))){ __VERIFIER_control_true(2120, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2125, " ");
 __VERIFIER_reached_control(2125, " ");
if((((((a4==17)&&((a28==16)&&(((input==2)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))))&&(a25==1))))&&(a1==1))&&(a14==20))&&(a3==1))){ __VERIFIER_control_true(2125, " ");

	    	a7 = 0;
	    	a26 = 17;
	    	a4 = 18;
	    	a28 = 15;
	    	return 22;
	    } else { __VERIFIER_control_false(2131, " ");
 __VERIFIER_reached_control(2131, " ");
if(((((a4==18)&&((a25==1)&&((a1==1)&&((((a14==18)&&((a26==19)&&!(a7==1)))||((a14==19)&&((a7==1)&&(a26==17))))&&(input==1)))))&&(a3==1))&&(a28==17))){ __VERIFIER_control_true(2131, " ");

	    	a14 = 20;
	    	a28 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2137, " ");
 __VERIFIER_reached_control(2137, " ");
if(((a25==1)&&((((a14==18)&&((!(a3==1)&&((input==6)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||((a26==18)&&!(a7==1)))))&&(a1==1)))&&(a4==18))&&(a28==17)))){ __VERIFIER_control_true(2137, " ");

	    	a4 = 16;
	    	a26 = 18;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(2142, " ");
 __VERIFIER_reached_control(2142, " ");
if((((a4==17)&&(((a28==15)&&(((a1==1)&&((((a26==17)||(a26==18))&&(input==4))&&(a14==18)))&&(a25==1)))&&!(a7==1)))&&!(a3==1))){ __VERIFIER_control_true(2142, " ");

	    	a26 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2145, " ");
 __VERIFIER_reached_control(2145, " ");
if(((a25==1)&&(((a1==1)&&((((((input==3)&&((a26==17)||(a26==18)))&&!(a7==1))&&(a28==15))&&!(a3==1))&&(a4==16)))&&(a14==19)))){ __VERIFIER_control_true(2145, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2151, " ");
 __VERIFIER_reached_control(2151, " ");
if((((a4==16)&&((a1==1)&&(((((((!(a7==1)&&(a26==19))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20)))||(((a7==1)&&(a26==18))&&(a14==20)))&&(input==4))&&(a28==17))&&!(a3==1))))&&(a25==1))){ __VERIFIER_control_true(2151, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2158, " ");
 __VERIFIER_reached_control(2158, " ");
if(((a28==15)&&((a4==17)&&((a14==20)&&((a1==1)&&(((((((a26==17)||(a26==18))||(a26==19))&&(input==1))&&!(a3==1))&&(a7==1))&&(a25==1))))))){ __VERIFIER_control_true(2158, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2164, " ");
 __VERIFIER_reached_control(2164, " ");
if(((!(a7==1)&&(((((a4==18)&&((a1==1)&&((a3==1)&&(input==6))))&&(a14==18))&&(a26==18))&&(a28==16)))&&(a25==1))){ __VERIFIER_control_true(2164, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2170, " ");
 __VERIFIER_reached_control(2170, " ");
if((!(a7==1)&&(((!(a3==1)&&((((a14==18)&&((input==6)&&(a4==18)))&&(a25==1))&&(a28==15)))&&(a1==1))&&(a26==18)))){ __VERIFIER_control_true(2170, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2176, " ");
 __VERIFIER_reached_control(2176, " ");
if(((((a14==19)&&(((((a1==1)&&((input==3)&&((a26==18)||(a26==19))))&&(a25==1))&&(a4==18))&&(a28==15)))&&!(a3==1))&&!(a7==1))){ __VERIFIER_control_true(2176, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2183, " ");
 __VERIFIER_reached_control(2183, " ");
if(((((((a7==1)&&((a4==17)&&((a25==1)&&(((a26==19)||((a26==17)||(a26==18)))&&(input==2)))))&&!(a3==1))&&(a1==1))&&(a28==17))&&(a14==20))){ __VERIFIER_control_true(2183, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2190, " ");
 __VERIFIER_reached_control(2190, " ");
if(((a4==16)&&((a28==15)&&(((a1==1)&&(((((input==2)&&((a26==17)||(a26==18)))&&!(a7==1))&&(a14==20))&&!(a3==1)))&&(a25==1))))){ __VERIFIER_control_true(2190, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2196, " ");
 __VERIFIER_reached_control(2196, " ");
if((((((a1==1)&&((((((a26==19)&&!(a7==1))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==2))&&(a28==17)))&&(a25==1))&&(a4==16))&&!(a3==1))){ __VERIFIER_control_true(2196, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2203, " ");
 __VERIFIER_reached_control(2203, " ");
if((((((a3==1)&&((input==1)&&((((a7==1)&&((a28==17)&&(a26==17)))&&(a14==18))||(((((a28==16)&&(a26==18))&&!(a7==1))&&(a14==20))||((!(a7==1)&&((a28==16)&&(a26==19)))&&(a14==20))))))&&(a25==1))&&(a1==1))&&(a4==18))){ __VERIFIER_control_true(2203, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2210, " ");
 __VERIFIER_reached_control(2210, " ");
if(((a1==1)&&((a26==17)&&(!(a7==1)&&(((((a3==1)&&((a25==1)&&(input==2)))&&(a4==18))&&(a28==15))&&(a14==20)))))){ __VERIFIER_control_true(2210, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2215, " ");
 __VERIFIER_reached_control(2215, " ");
if(((a26==18)&&(!(a3==1)&&((a14==19)&&(((a25==1)&&((a7==1)&&(((input==6)&&(a28==16))&&(a4==18))))&&(a1==1)))))){ __VERIFIER_control_true(2215, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2222, " ");
 __VERIFIER_reached_control(2222, " ");
if(((((a4==16)&&(((!(a3==1)&&((input==5)&&(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))))&&(a28==16))&&(a1==1)))&&(a25==1))&&(a14==20))){ __VERIFIER_control_true(2222, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2229, " ");
 __VERIFIER_reached_control(2229, " ");
if((((((a25==1)&&(((a1==1)&&((input==5)&&(((a26==17)&&!(a7==1))||(((a7==1)&&(a26==18))||((a26==19)&&(a7==1))))))&&(a4==18)))&&(a3==1))&&(a14==18))&&(a28==16))){ __VERIFIER_control_true(2229, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2235, " ");
 __VERIFIER_reached_control(2235, " ");
if((((a4==18)&&((((a25==1)&&((a26==17)&&(((input==3)&&(a28==16))&&(a14==20))))&&(a7==1))&&(a1==1)))&&(a3==1))){ __VERIFIER_control_true(2235, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2240, " ");
 __VERIFIER_reached_control(2240, " ");
if((((a25==1)&&(((a14==18)&&(!(a3==1)&&(((input==4)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))&&(a28==15))))&&(a1==1)))&&(a4==18))){ __VERIFIER_control_true(2240, " ");

	    	a26 = 18;
	    	a7 = 1;
	    	a14 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(2245, " ");
 __VERIFIER_reached_control(2245, " ");
if((((((a1==1)&&((a4==18)&&((a14==19)&&((a3==1)&&((a26==17)&&(input==4))))))&&(a28==15))&&(a25==1))&&(a7==1))){ __VERIFIER_control_true(2245, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2249, " ");
 __VERIFIER_reached_control(2249, " ");
if(((a25==1)&&((((a28==17)&&(((a1==1)&&((input==5)&&((((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1)))))&&(a4==17)))&&(a14==19))&&(a3==1)))){ __VERIFIER_control_true(2249, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2256, " ");
 __VERIFIER_reached_control(2256, " ");
if(((a1==1)&&((a25==1)&&((a4==16)&&((a28==17)&&((!(a7==1)&&((a14==19)&&(!(a3==1)&&(input==1))))&&(a26==17))))))){ __VERIFIER_control_true(2256, " ");

	    	a26 = 19;
	    	a28 = 15;
	    	a14 = 20;
	    	a4 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(2262, " ");
 __VERIFIER_reached_control(2262, " ");
if(((a25==1)&&((((a1==1)&&((((a14==18)&&(((a28==16)&&(a26==17))&&(a7==1)))||(((((a26==18)&&(a28==15))&&!(a7==1))&&(a14==20))||((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20))))&&(input==5)))&&(a3==1))&&(a4==18)))){ __VERIFIER_control_true(2262, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2269, " ");
 __VERIFIER_reached_control(2269, " ");
if(((a26==18)&&((a7==1)&&((((((a28==17)&&((a3==1)&&(input==3)))&&(a25==1))&&(a1==1))&&(a4==17))&&(a14==20))))){ __VERIFIER_control_true(2269, " ");

	    	a4 = 18;
	    	a28 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(2273, " ");
 __VERIFIER_reached_control(2273, " ");
if(((a26==17)&&((a1==1)&&(((a28==15)&&((a3==1)&&((a14==20)&&(((input==4)&&(a25==1))&&(a4==18)))))&&!(a7==1))))){ __VERIFIER_control_true(2273, " ");

	    	a3 = 0;
	    	a14 = 18;
	    	a4 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(2278, " ");
 __VERIFIER_reached_control(2278, " ");
if((!(a3==1)&&((a4==18)&&(((a28==17)&&((a25==1)&&(((((a7==1)&&(a26==18))&&(a14==19))||(((a14==18)&&((a26==19)&&!(a7==1)))||(((a26==17)&&(a7==1))&&(a14==19))))&&(input==5))))&&(a1==1))))){ __VERIFIER_control_true(2278, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 20;
	    	a26 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2286, " ");
 __VERIFIER_reached_control(2286, " ");
if(((a26==19)&&(((a25==1)&&(!(a3==1)&&((a28==15)&&((a1==1)&&(((input==1)&&(a7==1))&&(a4==16))))))&&(a14==20)))){ __VERIFIER_control_true(2286, " ");

	    	a14 = 19;
	    	a28 = 17;
	    	a26 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(2291, " ");
 __VERIFIER_reached_control(2291, " ");
if(((((((((a14==20)&&(((a28==15)&&(a26==19))&&!(a7==1)))||((((a28==16)&&(a26==17))&&(a7==1))&&(a14==18)))&&(input==6))&&(a4==16))&&(a25==1))&&(a1==1))&&!(a3==1))){ __VERIFIER_control_true(2291, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2298, " ");
 __VERIFIER_reached_control(2298, " ");
if((((a7==1)&&(((a25==1)&&(((a28==15)&&((a4==16)&&(((a26==17)||(a26==18))&&(input==2))))&&(a1==1)))&&!(a3==1)))&&(a14==20))){ __VERIFIER_control_true(2298, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2303, " ");
 __VERIFIER_reached_control(2303, " ");
if((!(a3==1)&&((((a28==16)&&((a4==16)&&(((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==2))&&(a1==1))))&&(a25==1))&&(a14==18)))){ __VERIFIER_control_true(2303, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2309, " ");
 __VERIFIER_reached_control(2309, " ");
if(((((a4==17)&&((a25==1)&&((a26==18)&&(((a14==20)&&((input==3)&&(a1==1)))&&(a7==1)))))&&(a3==1))&&(a28==15))){ __VERIFIER_control_true(2309, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2314, " ");
 __VERIFIER_reached_control(2314, " ");
if((!(a3==1)&&((!(a7==1)&&((a1==1)&&(((a25==1)&&(((input==2)&&((a26==17)||(a26==18)))&&(a4==17)))&&(a14==18))))&&(a28==15)))){ __VERIFIER_control_true(2314, " ");

	    	a7 = 1;
	    	a28 = 17;
	    	a4 = 16;
	    	a26 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2320, " ");
 __VERIFIER_reached_control(2320, " ");
if(((a25==1)&&((((a28==15)&&(((a4==18)&&(!(a3==1)&&((input==1)&&((a26==18)||(a26==19)))))&&(a1==1)))&&(a14==20))&&!(a7==1)))){ __VERIFIER_control_true(2320, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2327, " ");
 __VERIFIER_reached_control(2327, " ");
if(((a4==17)&&(((a3==1)&&((a1==1)&&((a25==1)&&((input==1)&&((((a7==1)&&(a26==17))&&(a14==19))||((((a26==18)&&!(a7==1))&&(a14==18))||(((a26==19)&&!(a7==1))&&(a14==18))))))))&&(a28==16)))){ __VERIFIER_control_true(2327, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2334, " ");
 __VERIFIER_reached_control(2334, " ");
if(((!(a3==1)&&((a14==18)&&(((a1==1)&&(((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==2))&&(a28==15)))&&(a25==1))))&&(a4==18))){ __VERIFIER_control_true(2334, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2340, " ");
 __VERIFIER_reached_control(2340, " ");
if(((a4==17)&&((a14==19)&&(((a1==1)&&(((a28==16)&&(!(a3==1)&&((input==2)&&((a26==17)||(a26==18)))))&&(a25==1)))&&!(a7==1))))){ __VERIFIER_control_true(2340, " ");

	    	a26 = 18;
	    	a28 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(2346, " ");
 __VERIFIER_reached_control(2346, " ");
if(((a14==20)&&((a1==1)&&((a25==1)&&(((((a4==17)&&((a28==15)&&(input==3)))&&(a26==19))&&(a3==1))&&(a7==1)))))){ __VERIFIER_control_true(2346, " ");

	    	a7 = 0;
	    	a28 = 17;
	    	a26 = 18;
	    	a14 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(2352, " ");
 __VERIFIER_reached_control(2352, " ");
if((((a25==1)&&(((a1==1)&&((a4==16)&&(((input==4)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))&&(a28==16))))&&!(a3==1)))&&(a14==18))){ __VERIFIER_control_true(2352, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2358, " ");
 __VERIFIER_reached_control(2358, " ");
if(((a25==1)&&((a28==17)&&((a1==1)&&((a7==1)&&((a14==18)&&((((input==1)&&!(a3==1))&&(a26==19))&&(a4==16)))))))){ __VERIFIER_control_true(2358, " ");

	    	a26 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2361, " ");
 __VERIFIER_reached_control(2361, " ");
if(((a3==1)&&(((a25==1)&&(((((((a4==17)&&(a26==19))&&(a28==17))&&!(a7==1))&&(a14==20))||((a14==18)&&(((a28==15)&&((a4==18)&&(a26==17)))&&(a7==1))))&&(input==1)))&&(a1==1)))){ __VERIFIER_control_true(2361, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2368, " ");
 __VERIFIER_reached_control(2368, " ");
if((((a1==1)&&(((((((!(a7==1)&&(a26==19))&&(a14==18))||((a14==19)&&((a7==1)&&(a26==17))))&&(input==6))&&(a4==16))&&(a25==1))&&(a28==17)))&&!(a3==1))){ __VERIFIER_control_true(2368, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2375, " ");
 __VERIFIER_reached_control(2375, " ");
if((((a28==16)&&(!(a3==1)&&((a4==18)&&((((input==1)&&(((a26==19)&&(a7==1))||((a26==17)&&!(a7==1))))&&(a14==19))&&(a25==1)))))&&(a1==1))){ __VERIFIER_control_true(2375, " ");

	    	a7 = 0;
	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 17;
	    	a26 = 18;
	    	return 21;
	    } else { __VERIFIER_control_false(2382, " ");
 __VERIFIER_reached_control(2382, " ");
if((((a28==15)&&((((!(a3==1)&&((a25==1)&&(((a26==18)||(a26==19))&&(input==2))))&&(a1==1))&&!(a7==1))&&(a14==20)))&&(a4==18))){ __VERIFIER_control_true(2382, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2389, " ");
 __VERIFIER_reached_control(2389, " ");
if((((a7==1)&&(((a1==1)&&(!(a3==1)&&((((input==1)&&(a26==18))&&(a25==1))&&(a28==15))))&&(a4==18)))&&(a14==19))){ __VERIFIER_control_true(2389, " ");

	    	a14 = 20;
	    	a7 = 0;
	    	a4 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(2394, " ");
 __VERIFIER_reached_control(2394, " ");
if((((a14==19)&&(((!(a7==1)&&(((a1==1)&&(((a26==18)||(a26==19))&&(input==1)))&&(a3==1)))&&(a28==16))&&(a4==18)))&&(a25==1))){ __VERIFIER_control_true(2394, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2401, " ");
 __VERIFIER_reached_control(2401, " ");
if((((a4==17)&&((a28==17)&&(!(a3==1)&&((((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==6))&&(a14==19))&&(a1==1)))))&&(a25==1))){ __VERIFIER_control_true(2401, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2409, " ");
 __VERIFIER_reached_control(2409, " ");
if(((a28==16)&&(((a4==17)&&((((((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))&&(input==6))&&(a14==20))&&(a1==1))&&!(a3==1)))&&(a25==1)))){ __VERIFIER_control_true(2409, " ");

	    	a14 = 19;
	    	a26 = 18;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(2414, " ");
 __VERIFIER_reached_control(2414, " ");
if((((((a25==1)&&(((((input==3)&&(a1==1))&&(a7==1))&&(a4==16))&&(a14==18)))&&(a28==17))&&(a26==19))&&!(a3==1))){ __VERIFIER_control_true(2414, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2419, " ");
 __VERIFIER_reached_control(2419, " ");
if((((a1==1)&&(((((a28==15)&&((a14==20)&&((((a26==17)||(a26==18))||(a26==19))&&(input==3))))&&!(a3==1))&&(a4==18))&&(a25==1)))&&(a7==1))){ __VERIFIER_control_true(2419, " ");

	    	a26 = 18;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(2423, " ");
 __VERIFIER_reached_control(2423, " ");
if((((a28==16)&&(!(a7==1)&&(((a14==20)&&((a1==1)&&((a4==17)&&(((a26==18)||(a26==19))&&(input==3)))))&&!(a3==1))))&&(a25==1))){ __VERIFIER_control_true(2423, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2427, " ");
 __VERIFIER_reached_control(2427, " ");
if(((a28==17)&&((a7==1)&&(((a25==1)&&(!(a3==1)&&(((a14==20)&&((input==3)&&(((a26==17)||(a26==18))||(a26==19))))&&(a1==1))))&&(a4==17))))){ __VERIFIER_control_true(2427, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2434, " ");
 __VERIFIER_reached_control(2434, " ");
if((((a4==18)&&((a14==20)&&((a3==1)&&((a1==1)&&((a28==17)&&(((input==2)&&(a26==18))&&!(a7==1)))))))&&(a25==1))){ __VERIFIER_control_true(2434, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2441, " ");
 __VERIFIER_reached_control(2441, " ");
if(((a26==19)&&(((a7==1)&&(!(a3==1)&&((a4==16)&&(((a1==1)&&((a25==1)&&(input==1)))&&(a14==19)))))&&(a28==15)))){ __VERIFIER_control_true(2441, " ");

	    	a14 = 18;
	    	a26 = 18;
	    	a28 = 17;
	    	return 22;
	    } else { __VERIFIER_control_false(2446, " ");
 __VERIFIER_reached_control(2446, " ");
if((((a25==1)&&(((((a14==20)&&(((a28==17)&&((a26==19)&&((a4==18)&&(a3==1))))&&!(a7==1)))||((a14==18)&&((a7==1)&&((a28==15)&&((a26==17)&&((a4==16)&&!(a3==1)))))))||((a14==18)&&(((a28==15)&&((a26==18)&&(!(a3==1)&&(a4==16))))&&(a7==1))))&&(input==5)))&&(a1==1))){ __VERIFIER_control_true(2446, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2454, " ");
 __VERIFIER_reached_control(2454, " ");
if(((((a7==1)&&((a4==17)&&(((a28==17)&&((a25==1)&&(((a26==17)||(a26==18))&&(input==2))))&&(a3==1))))&&(a1==1))&&(a14==18))){ __VERIFIER_control_true(2454, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2459, " ");
 __VERIFIER_reached_control(2459, " ");
if(((a28==16)&&((((a25==1)&&(((a7==1)&&(((a26==18)&&(input==4))&&!(a3==1)))&&(a14==19)))&&(a1==1))&&(a4==18)))){ __VERIFIER_control_true(2459, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2466, " ");
 __VERIFIER_reached_control(2466, " ");
if((((a4==18)&&((((((a26==17)&&((input==2)&&(a3==1)))&&(a28==15))&&(a14==19))&&(a7==1))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(2466, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2470, " ");
 __VERIFIER_reached_control(2470, " ");
if((((a1==1)&&((a25==1)&&((input==1)&&((((a14==20)&&(!(a7==1)&&((a28==17)&&((a4==16)&&(a26==18)))))||((a14==20)&&(((a28==17)&&((a26==19)&&(a4==16)))&&!(a7==1))))||((a14==18)&&((a7==1)&&((a28==15)&&((a26==17)&&(a4==17)))))))))&&!(a3==1))){ __VERIFIER_control_true(2470, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 18;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2477, " ");
 __VERIFIER_reached_control(2477, " ");
if(((a1==1)&&((a3==1)&&(((a26==18)&&((a4==18)&&(((a25==1)&&((input==4)&&(a28==17)))&&!(a7==1))))&&(a14==18))))){ __VERIFIER_control_true(2477, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2483, " ");
 __VERIFIER_reached_control(2483, " ");
if(((a26==18)&&((a25==1)&&((((a1==1)&&(!(a3==1)&&(((input==1)&&(a14==19))&&(a28==15))))&&!(a7==1))&&(a4==17))))){ __VERIFIER_control_true(2483, " ");

	    	a14 = 18;
	    	return 21;
	    } else { __VERIFIER_control_false(2486, " ");
 __VERIFIER_reached_control(2486, " ");
if(((a4==17)&&(((((!(a3==1)&&((a1==1)&&(((a26==17)||(a26==18))&&(input==3))))&&(a28==15))&&(a14==18))&&!(a7==1))&&(a25==1)))){ __VERIFIER_control_true(2486, " ");

	    	a7 = 1;
	    	a26 = 18;
	    	a28 = 17;
	    	a4 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(2492, " ");
 __VERIFIER_reached_control(2492, " ");
if(((a4==17)&&(((a14==20)&&(((a28==15)&&((a7==1)&&((a25==1)&&((input==2)&&((a26==19)||((a26==17)||(a26==18)))))))&&!(a3==1)))&&(a1==1)))){ __VERIFIER_control_true(2492, " ");

	    	a26 = 18;
	    	a14 = 19;
	    	a4 = 16;
	    	a28 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2498, " ");
 __VERIFIER_reached_control(2498, " ");
if(((a26==18)&&((((a14==18)&&(((((a4==16)&&(input==4))&&(a7==1))&&!(a3==1))&&(a25==1)))&&(a1==1))&&(a28==16)))){ __VERIFIER_control_true(2498, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2503, " ");
 __VERIFIER_reached_control(2503, " ");
if(((!(a3==1)&&((a25==1)&&((a14==19)&&((a4==16)&&(((a28==17)&&((input==1)&&(a26==18)))&&(a1==1))))))&&!(a7==1))){ __VERIFIER_control_true(2503, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2510, " ");
 __VERIFIER_reached_control(2510, " ");
if((((a25==1)&&((a4==18)&&(((((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))&&(input==2))&&(a28==16))&&(a1==1))&&(a14==19))))&&(a3==1))){ __VERIFIER_control_true(2510, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2517, " ");
 __VERIFIER_reached_control(2517, " ");
if(((((((a14==19)&&(!(a3==1)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==3))))&&(a25==1))&&(a28==16))&&(a1==1))&&(a4==18))){ __VERIFIER_control_true(2517, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2525, " ");
 __VERIFIER_reached_control(2525, " ");
if(((a14==19)&&(((a3==1)&&((a25==1)&&(((a28==17)&&((input==2)&&((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))))&&(a4==18))))&&(a1==1)))){ __VERIFIER_control_true(2525, " ");

	    	a14 = 20;
	    	a28 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2531, " ");
 __VERIFIER_reached_control(2531, " ");
if((((a28==16)&&((!(a3==1)&&(((((a26==18)&&(input==3))&&(a4==18))&&(a14==19))&&!(a7==1)))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(2531, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 20;
	    	a7 = 1;
	    	a26 = 19;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2539, " ");
 __VERIFIER_reached_control(2539, " ");
if(((!(a7==1)&&((((a25==1)&&((a1==1)&&((((a26==18)||(a26==19))&&(input==1))&&(a4==18))))&&(a28==16))&&!(a3==1)))&&(a14==20))){ __VERIFIER_control_true(2539, " ");

	    	a26 = 18;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(2545, " ");
 __VERIFIER_reached_control(2545, " ");
if(((a25==1)&&((a4==16)&&((a26==19)&&((a1==1)&&((((a28==15)&&((input==5)&&!(a3==1)))&&(a14==19))&&!(a7==1))))))){ __VERIFIER_control_true(2545, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2551, " ");
 __VERIFIER_reached_control(2551, " ");
if((((a1==1)&&(!(a3==1)&&((((input==3)&&(((((a26==19)&&!(a7==1))&&(a14==18))||((a14==19)&&((a26==17)&&(a7==1))))||((a14==19)&&((a26==18)&&(a7==1)))))&&(a28==15))&&(a4==17))))&&(a25==1))){ __VERIFIER_control_true(2551, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2558, " ");
 __VERIFIER_reached_control(2558, " ");
if(((a4==18)&&((a14==20)&&(((((a1==1)&&(!(a7==1)&&((a28==15)&&(input==5))))&&(a26==17))&&(a25==1))&&!(a3==1))))){ __VERIFIER_control_true(2558, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2564, " ");
 __VERIFIER_reached_control(2564, " ");
if((((a25==1)&&(!(a3==1)&&((input==5)&&(((a14==18)&&((a7==1)&&((a28==15)&&((a4==17)&&(a26==17)))))||(((!(a7==1)&&(((a4==16)&&(a26==18))&&(a28==17)))&&(a14==20))||((!(a7==1)&&((a28==17)&&((a4==16)&&(a26==19))))&&(a14==20)))))))&&(a1==1))){ __VERIFIER_control_true(2564, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2572, " ");
 __VERIFIER_reached_control(2572, " ");
if(((a7==1)&&((a4==18)&&((((a25==1)&&((a28==16)&&((a14==20)&&((input==4)&&(a3==1)))))&&(a26==17))&&(a1==1))))){ __VERIFIER_control_true(2572, " ");

	    	return -1;
	    } else { __VERIFIER_control_false(2574, " ");
 __VERIFIER_reached_control(2574, " ");
if(((((a25==1)&&((a4==16)&&(((((a14==20)&&(((a26==18)&&(a28==16))&&!(a7==1)))||((((a26==19)&&(a28==16))&&!(a7==1))&&(a14==20)))||((a14==18)&&((a7==1)&&((a28==17)&&(a26==17)))))&&(input==4))))&&(a1==1))&&!(a3==1))){ __VERIFIER_control_true(2574, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2581, " ");
 __VERIFIER_reached_control(2581, " ");
if((((a4==17)&&((((input==3)&&((((a14==20)&&(((a26==18)&&(a28==15))&&!(a7==1)))||((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20)))||((a14==18)&&((a7==1)&&((a26==17)&&(a28==16))))))&&(a3==1))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(2581, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2588, " ");
 __VERIFIER_reached_control(2588, " ");
if(((((((a14==18)&&((a7==1)&&((a26==18)&&((input==5)&&(a1==1)))))&&!(a3==1))&&(a28==17))&&(a25==1))&&(a4==16))){ __VERIFIER_control_true(2588, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2593, " ");
 __VERIFIER_reached_control(2593, " ");
if(((a4==18)&&(((a25==1)&&((((a3==1)&&(!(a7==1)&&(((a26==17)||(a26==18))&&(input==6))))&&(a1==1))&&(a28==15)))&&(a14==19)))){ __VERIFIER_control_true(2593, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2599, " ");
 __VERIFIER_reached_control(2599, " ");
if((((a25==1)&&(!(a3==1)&&(((a1==1)&&((a28==17)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==1))))&&(a4==17))))&&(a14==19))){ __VERIFIER_control_true(2599, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2607, " ");
 __VERIFIER_reached_control(2607, " ");
if(((((((a28==15)&&((((input==2)&&!(a3==1))&&(a4==18))&&(a1==1)))&&!(a7==1))&&(a14==20))&&(a26==17))&&(a25==1))){ __VERIFIER_control_true(2607, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2613, " ");
 __VERIFIER_reached_control(2613, " ");
if((((((a1==1)&&((a4==17)&&(!(a7==1)&&(((input==3)&&(a14==19))&&(a25==1)))))&&(a26==19))&&!(a3==1))&&(a28==17))){ __VERIFIER_control_true(2613, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2621, " ");
 __VERIFIER_reached_control(2621, " ");
if(((a25==1)&&(((a3==1)&&((a7==1)&&(((a14==18)&&((((a26==18)||(a26==19))&&(input==3))&&(a28==15)))&&(a4==18))))&&(a1==1)))){ __VERIFIER_control_true(2621, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2625, " ");
 __VERIFIER_reached_control(2625, " ");
if(((a1==1)&&((a4==18)&&((a28==16)&&((a14==20)&&(((a25==1)&&(((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1)))&&(input==5)))&&(a3==1))))))){ __VERIFIER_control_true(2625, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2632, " ");
 __VERIFIER_reached_control(2632, " ");
if(((((a1==1)&&((a3==1)&&((((input==4)&&((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a26==19)&&(a7==1)))))&&(a4==18))&&(a25==1))))&&(a28==16))&&(a14==20))){ __VERIFIER_control_true(2632, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2639, " ");
 __VERIFIER_reached_control(2639, " ");
if(((a25==1)&&((a1==1)&&((((a3==1)&&((a14==18)&&((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==1))))&&(a28==17))&&(a4==18))))){ __VERIFIER_control_true(2639, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2645, " ");
 __VERIFIER_reached_control(2645, " ");
if((((a4==17)&&(((a14==19)&&((a3==1)&&((a1==1)&&((input==5)&&((!(a7==1)&&(a26==18))||(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17))))))))&&(a25==1)))&&(a28==15))){ __VERIFIER_control_true(2645, " ");

	    	a7 = 0;
	    	a28 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(2651, " ");
 __VERIFIER_reached_control(2651, " ");
if((((((((!(a7==1)&&(((a26==19)||((a26==17)||(a26==18)))&&(input==3)))&&(a25==1))&&(a14==20))&&(a4==17))&&(a28==17))&&!(a3==1))&&(a1==1))){ __VERIFIER_control_true(2651, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2659, " ");
 __VERIFIER_reached_control(2659, " ");
if(((a26==17)&&((a3==1)&&((((a14==20)&&((a1==1)&&(((input==6)&&!(a7==1))&&(a28==15))))&&(a25==1))&&(a4==17))))){ __VERIFIER_control_true(2659, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2664, " ");
 __VERIFIER_reached_control(2664, " ");
if(((a4==17)&&(((((a1==1)&&((a14==20)&&(((input==3)&&((a26==18)||(a26==19)))&&(a25==1))))&&!(a7==1))&&(a28==16))&&(a3==1)))){ __VERIFIER_control_true(2664, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2671, " ");
 __VERIFIER_reached_control(2671, " ");
if(((a14==19)&&((!(a3==1)&&(((((input==6)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))||((a26==18)&&!(a7==1))))&&(a25==1))&&(a28==16))&&(a4==16)))&&(a1==1)))){ __VERIFIER_control_true(2671, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2678, " ");
 __VERIFIER_reached_control(2678, " ");
if(((!(a3==1)&&((a1==1)&&((a4==16)&&((((((a7==1)&&(a26==18))&&(a14==20))||(((!(a7==1)&&(a26==19))&&(a14==19))||(((a26==17)&&(a7==1))&&(a14==20))))&&(input==1))&&(a28==17)))))&&(a25==1))){ __VERIFIER_control_true(2678, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2685, " ");
 __VERIFIER_reached_control(2685, " ");
if(((((a25==1)&&((((a14==20)&&((a7==1)&&((input==5)&&(((a26==17)||(a26==18))||(a26==19)))))&&(a1==1))&&(a28==15)))&&!(a3==1))&&(a4==17))){ __VERIFIER_control_true(2685, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2691, " ");
 __VERIFIER_reached_control(2691, " ");
if((((a4==17)&&((a1==1)&&(((input==2)&&((((!(a7==1)&&((a28==15)&&(a26==18)))&&(a14==20))||((a14==20)&&(!(a7==1)&&((a26==19)&&(a28==15)))))||((((a26==17)&&(a28==16))&&(a7==1))&&(a14==18))))&&(a25==1))))&&(a3==1))){ __VERIFIER_control_true(2691, " ");

	    	a4 = 18;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 19;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(2698, " ");
 __VERIFIER_reached_control(2698, " ");
if((((((((!(a7==1)&&((a28==17)&&(((a4==18)&&(a3==1))&&(a26==19))))&&(a14==20))||((a14==18)&&((a7==1)&&((a28==15)&&((a26==17)&&(!(a3==1)&&(a4==16)))))))||((((a28==15)&&(((a4==16)&&!(a3==1))&&(a26==18)))&&(a7==1))&&(a14==18)))&&(input==4))&&(a1==1))&&(a25==1))){ __VERIFIER_control_true(2698, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2706, " ");
 __VERIFIER_reached_control(2706, " ");
if((((((a3==1)&&((((((a26==17)||(a26==18))&&(input==4))&&(a28==17))&&(a25==1))&&(a1==1)))&&(a4==17))&&(a14==18))&&(a7==1))){ __VERIFIER_control_true(2706, " ");

	    	a4 = 18;
	    	a28 = 16;
	    	a7 = 0;
	    	a26 = 18;
	    	return 22;
	    } else { __VERIFIER_control_false(2712, " ");
 __VERIFIER_reached_control(2712, " ");
if((((a28==15)&&((a25==1)&&((((input==5)&&(((a14==18)&&((a26==19)&&!(a7==1)))||((a14==19)&&((a26==17)&&(a7==1)))))&&!(a3==1))&&(a1==1))))&&(a4==18))){ __VERIFIER_control_true(2712, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}} return calculate_output3(input);
	}

	int calculate_output3(int input) {
	    { __VERIFIER_reached_control(2723, " ");
if((!(a3==1)&&((((a14==18)&&((a7==1)&&(((a4==17)&&(((a26==17)||(a26==18))&&(input==1)))&&(a28==17))))&&(a1==1))&&(a25==1)))){ __VERIFIER_control_true(2723, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2729, " ");
 __VERIFIER_reached_control(2729, " ");
if(((a7==1)&&((a1==1)&&(((a14==20)&&((((a28==17)&&(((a26==19)||((a26==17)||(a26==18)))&&(input==1)))&&!(a3==1))&&(a25==1)))&&(a4==17))))){ __VERIFIER_control_true(2729, " ");

	    	a7 = 0;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 18;
	    	a14 = 18;
	    	return 21;
	    } else { __VERIFIER_control_false(2736, " ");
 __VERIFIER_reached_control(2736, " ");
if((((((((a14==20)&&((a4==18)&&((a25==1)&&(input==3))))&&(a3==1))&&(a7==1))&&(a1==1))&&(a28==15))&&(a26==19))){ __VERIFIER_control_true(2736, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2741, " ");
 __VERIFIER_reached_control(2741, " ");
if(((((a25==1)&&((a14==20)&&(((a1==1)&&((input==2)&&((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a26==19)&&(a7==1))))))&&(a3==1))))&&(a4==18))&&(a28==17))){ __VERIFIER_control_true(2741, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2748, " ");
 __VERIFIER_reached_control(2748, " ");
if(((((((((a28==15)&&((input==6)&&((a26==17)||(a26==18))))&&!(a3==1))&&(a4==18))&&(a25==1))&&(a1==1))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(2748, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2753, " ");
 __VERIFIER_reached_control(2753, " ");
if((((a25==1)&&(!(a3==1)&&((a4==16)&&(((input==1)&&(((a14==18)&&(!(a7==1)&&(a26==19)))||(((a26==17)&&(a7==1))&&(a14==19))))&&(a1==1)))))&&(a28==17))){ __VERIFIER_control_true(2753, " ");

	    	a4 = 17;
	    	a14 = 19;
	    	a7 = 0;
	    	a28 = 15;
	    	a26 = 19;
	    	return 21;
	    } else { __VERIFIER_control_false(2760, " ");
 __VERIFIER_reached_control(2760, " ");
if((!(a7==1)&&(((a14==18)&&((a3==1)&&((((a25==1)&&((input==2)&&(a1==1)))&&(a4==18))&&(a26==18))))&&(a28==17)))){ __VERIFIER_control_true(2760, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2766, " ");
 __VERIFIER_reached_control(2766, " ");
if(((((a4==17)&&((a14==20)&&((a1==1)&&((((((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17)))&&(input==1))&&(a28==16)))))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(2766, " ");

	    	a26 = 19;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2770, " ");
 __VERIFIER_reached_control(2770, " ");
if(((((a7==1)&&((((((input==1)&&!(a3==1))&&(a4==16))&&(a28==16))&&(a14==18))&&(a1==1)))&&(a26==18))&&(a25==1))){ __VERIFIER_control_true(2770, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2775, " ");
 __VERIFIER_reached_control(2775, " ");
if((!(a7==1)&&(((a1==1)&&(((a3==1)&&(((a25==1)&&(((a26==18)||(a26==19))&&(input==3)))&&(a14==19)))&&(a28==16)))&&(a4==18)))){ __VERIFIER_control_true(2775, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2782, " ");
 __VERIFIER_reached_control(2782, " ");
if((((a3==1)&&((((input==6)&&(((a14==18)&&(((a28==16)&&(a26==17))&&(a7==1)))||(((a14==20)&&(!(a7==1)&&((a26==18)&&(a28==15))))||((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20)))))&&(a4==18))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(2782, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2789, " ");
 __VERIFIER_reached_control(2789, " ");
if(((a4==18)&&(((a28==15)&&((a25==1)&&(((((a14==19)&&(input==5))&&(a7==1))&&(a3==1))&&(a26==19))))&&(a1==1)))){ __VERIFIER_control_true(2789, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2794, " ");
 __VERIFIER_reached_control(2794, " ");
if(((a1==1)&&((a4==17)&&((((((((a26==17)&&(a7==1))&&(a14==19))||(((a14==18)&&((a26==18)&&!(a7==1)))||((a14==18)&&(!(a7==1)&&(a26==19)))))&&(input==5))&&(a25==1))&&(a3==1))&&(a28==16))))){ __VERIFIER_control_true(2794, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2801, " ");
 __VERIFIER_reached_control(2801, " ");
if(((!(a7==1)&&(!(a3==1)&&(((a14==18)&&(((a4==16)&&((a25==1)&&(input==4)))&&(a28==17)))&&(a26==17))))&&(a1==1))){ __VERIFIER_control_true(2801, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2806, " ");
 __VERIFIER_reached_control(2806, " ");
if(((((a14==20)&&(((((a4==17)&&((input==3)&&(a26==17)))&&(a3==1))&&(a25==1))&&(a1==1)))&&!(a7==1))&&(a28==15))){ __VERIFIER_control_true(2806, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2811, " ");
 __VERIFIER_reached_control(2811, " ");
if((((((a1==1)&&(!(a3==1)&&((input==3)&&(((a14==19)&&((a7==1)&&(a26==18)))||(((!(a7==1)&&(a26==19))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))))))&&(a28==17))&&(a25==1))&&(a4==18))){ __VERIFIER_control_true(2811, " ");

	    	a4 = 17;
	    	a28 = 15;
	    	a7 = 0;
	    	a26 = 18;
	    	a14 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(2818, " ");
 __VERIFIER_reached_control(2818, " ");
if(((a4==17)&&(((((input==6)&&((((((a28==15)&&(a26==18))&&!(a7==1))&&(a14==20))||((((a26==19)&&(a28==15))&&!(a7==1))&&(a14==20)))||(((a7==1)&&((a28==16)&&(a26==17)))&&(a14==18))))&&(a25==1))&&(a3==1))&&(a1==1)))){ __VERIFIER_control_true(2818, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2825, " ");
 __VERIFIER_reached_control(2825, " ");
if(((a14==19)&&(((a1==1)&&(((!(a3==1)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==5)))&&(a25==1))&&(a28==16)))&&(a4==18)))){ __VERIFIER_control_true(2825, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 0;
	    	a26 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2832, " ");
 __VERIFIER_reached_control(2832, " ");
if(((((a3==1)&&((((((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17)))&&(input==5))&&(a25==1))&&(a4==17))&&(a1==1)))&&(a28==16))&&(a14==18))){ __VERIFIER_control_true(2832, " ");

	    	a26 = 18;
	    	a28 = 15;
	    	a4 = 18;
	    	a7 = 1;
	    	a14 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(2839, " ");
 __VERIFIER_reached_control(2839, " ");
if(((((a14==18)&&(((((a3==1)&&((input==5)&&((a26==19)||((a26==17)||(a26==18)))))&&(a4==18))&&(a28==15))&&(a25==1)))&&!(a7==1))&&(a1==1))){ __VERIFIER_control_true(2839, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2844, " ");
 __VERIFIER_reached_control(2844, " ");
if(((a14==20)&&((((a4==17)&&(((a28==17)&&(((a1==1)&&(input==2))&&(a26==18)))&&(a3==1)))&&(a25==1))&&(a7==1)))){ __VERIFIER_control_true(2844, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2850, " ");
 __VERIFIER_reached_control(2850, " ");
if(((((((a28==15)&&((((a14==20)&&((a7==1)&&(a26==18)))||(((a14==19)&&(!(a7==1)&&(a26==19)))||(((a26==17)&&(a7==1))&&(a14==20))))&&(input==4)))&&(a1==1))&&(a4==18))&&(a25==1))&&(a3==1))){ __VERIFIER_control_true(2850, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2856, " ");
 __VERIFIER_reached_control(2856, " ");
if(((((a28==16)&&((a3==1)&&((a1==1)&&((a4==18)&&(((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))&&(input==4))))))&&(a14==18))&&(a25==1))){ __VERIFIER_control_true(2856, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2862, " ");
 __VERIFIER_reached_control(2862, " ");
if(((a1==1)&&((a28==16)&&(((a25==1)&&(!(a3==1)&&((a14==18)&&(((input==2)&&((a26==17)||(a26==18)))&&(a7==1)))))&&(a4==18))))){ __VERIFIER_control_true(2862, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2868, " ");
 __VERIFIER_reached_control(2868, " ");
if(((a4==18)&&((a1==1)&&(((a25==1)&&((input==2)&&((((a7==1)&&((a28==17)&&(a26==17)))&&(a14==18))||(((a14==20)&&(((a28==16)&&(a26==18))&&!(a7==1)))||((((a28==16)&&(a26==19))&&!(a7==1))&&(a14==20))))))&&(a3==1))))){ __VERIFIER_control_true(2868, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2875, " ");
 __VERIFIER_reached_control(2875, " ");
if(((a28==17)&&((((a25==1)&&((a14==19)&&((((input==2)&&!(a3==1))&&!(a7==1))&&(a26==17))))&&(a1==1))&&(a4==16)))){ __VERIFIER_control_true(2875, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2881, " ");
 __VERIFIER_reached_control(2881, " ");
if(((a3==1)&&(((((a1==1)&&((((a25==1)&&(input==2))&&(a4==18))&&(a14==20)))&&(a7==1))&&(a28==16))&&(a26==17)))){ __VERIFIER_control_true(2881, " ");

	    	return -1;
	    } else { __VERIFIER_control_false(2883, " ");
 __VERIFIER_reached_control(2883, " ");
if((((a4==18)&&(((a28==15)&&(!(a3==1)&&((input==6)&&(((a14==18)&&(!(a7==1)&&(a26==19)))||(((a26==17)&&(a7==1))&&(a14==19))))))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(2883, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2890, " ");
 __VERIFIER_reached_control(2890, " ");
if(((a1==1)&&((a25==1)&&(((a4==18)&&((((input==5)&&(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17))))&&!(a3==1))&&(a14==19)))&&(a28==15))))){ __VERIFIER_control_true(2890, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2897, " ");
 __VERIFIER_reached_control(2897, " ");
if((((a4==18)&&(((!(a3==1)&&(((a1==1)&&((input==3)&&((a26==17)||(a26==18))))&&(a25==1)))&&(a7==1))&&(a28==17)))&&(a14==18))){ __VERIFIER_control_true(2897, " ");

	    	a28 = 15;
	    	a4 = 17;
	    	a3 = 1;
	    	a26 = 19;
	    	a7 = 0;
	    	return -1;
	    } else { __VERIFIER_control_false(2904, " ");
 __VERIFIER_reached_control(2904, " ");
if((!(a3==1)&&((((a28==15)&&((a1==1)&&((((a26==19)&&(input==1))&&(a7==1))&&(a25==1))))&&(a14==18))&&(a4==16)))){ __VERIFIER_control_true(2904, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2908, " ");
 __VERIFIER_reached_control(2908, " ");
if(((a25==1)&&((((((a28==16)&&(((input==5)&&(a26==18))&&(a14==19)))&&(a1==1))&&(a7==1))&&(a4==18))&&!(a3==1)))){ __VERIFIER_control_true(2908, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2915, " ");
 __VERIFIER_reached_control(2915, " ");
if((!(a3==1)&&((a25==1)&&((a1==1)&&((input==4)&&((((((a28==17)&&((a26==18)&&(a4==16)))&&!(a7==1))&&(a14==20))||((a14==20)&&((((a26==19)&&(a4==16))&&(a28==17))&&!(a7==1))))||((((a28==15)&&((a26==17)&&(a4==17)))&&(a7==1))&&(a14==18)))))))){ __VERIFIER_control_true(2915, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2923, " ");
 __VERIFIER_reached_control(2923, " ");
if(((a14==19)&&(((a1==1)&&((((a25==1)&&((input==2)&&((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))))&&(a4==17))&&(a3==1)))&&(a28==17)))){ __VERIFIER_control_true(2923, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2930, " ");
 __VERIFIER_reached_control(2930, " ");
if(((a4==17)&&((a1==1)&&(((((((a14==20)&&(((a28==15)&&(a26==18))&&!(a7==1)))||((a14==20)&&(((a26==19)&&(a28==15))&&!(a7==1))))||(((a7==1)&&((a28==16)&&(a26==17)))&&(a14==18)))&&(input==1))&&(a25==1))&&(a3==1))))){ __VERIFIER_control_true(2930, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(2937, " ");
 __VERIFIER_reached_control(2937, " ");
if((((a1==1)&&(!(a3==1)&&(((a14==20)&&(((input==6)&&(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(a25==1)))&&(a28==16))))&&(a4==16))){ __VERIFIER_control_true(2937, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2944, " ");
 __VERIFIER_reached_control(2944, " ");
if(((((((a25==1)&&(((a28==15)&&((input==6)&&(a14==20)))&&(a4==18)))&&!(a7==1))&&(a1==1))&&!(a3==1))&&(a26==17))){ __VERIFIER_control_true(2944, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2950, " ");
 __VERIFIER_reached_control(2950, " ");
if((((((((a4==16)&&(!(a3==1)&&((input==4)&&((a26==17)||(a26==18)))))&&(a25==1))&&(a14==19))&&(a1==1))&&(a28==15))&&(a7==1))){ __VERIFIER_control_true(2950, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2955, " ");
 __VERIFIER_reached_control(2955, " ");
if(((a25==1)&&((!(a7==1)&&((((a4==17)&&((a14==18)&&(((a26==18)||(a26==19))&&(input==4))))&&(a28==16))&&(a1==1)))&&!(a3==1)))){ __VERIFIER_control_true(2955, " ");

	    	a26 = 19;
	    	a28 = 17;
	    	a7 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(2960, " ");
 __VERIFIER_reached_control(2960, " ");
if((((((a1==1)&&((input==1)&&(((a14==18)&&(((a26==17)&&(a28==16))&&(a7==1)))||(((((a26==18)&&(a28==15))&&!(a7==1))&&(a14==20))||((((a26==19)&&(a28==15))&&!(a7==1))&&(a14==20))))))&&(a25==1))&&!(a3==1))&&(a4==17))){ __VERIFIER_control_true(2960, " ");

	    	a26 = 17;
	    	a28 = 16;
	    	a14 = 19;
	    	a7 = 0;
	    	return 22;
	    } else { __VERIFIER_control_false(2966, " ");
 __VERIFIER_reached_control(2966, " ");
if(((a4==17)&&((a3==1)&&((a14==18)&&((a25==1)&&((((a28==17)&&((input==3)&&((a26==17)||(a26==18))))&&(a7==1))&&(a1==1))))))){ __VERIFIER_control_true(2966, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(2971, " ");
 __VERIFIER_reached_control(2971, " ");
if((((a14==18)&&(!(a3==1)&&((a1==1)&&(((a4==17)&&((input==6)&&((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))))&&(a28==16)))))&&(a25==1))){ __VERIFIER_control_true(2971, " ");

	    	a28 = 17;
	    	a7 = 1;
	    	a26 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(2976, " ");
 __VERIFIER_reached_control(2976, " ");
if((((a25==1)&&((((((((a26==17)||(a26==18))&&(input==6))&&(a3==1))&&(a1==1))&&(a4==17))&&(a28==17))&&(a7==1)))&&(a14==18))){ __VERIFIER_control_true(2976, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(2981, " ");
 __VERIFIER_reached_control(2981, " ");
if(((a1==1)&&((a4==16)&&(!(a3==1)&&(((((((a26==19)&&(a28==15))&&!(a7==1))&&(a14==20))||((a14==18)&&(((a26==17)&&(a28==16))&&(a7==1))))&&(input==3))&&(a25==1)))))){ __VERIFIER_control_true(2981, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(2988, " ");
 __VERIFIER_reached_control(2988, " ");
if(((((a26==19)&&((((((a14==19)&&(input==2))&&(a7==1))&&(a1==1))&&(a28==15))&&(a25==1)))&&(a4==16))&&!(a3==1))){ __VERIFIER_control_true(2988, " ");

	    	a28 = 17;
	    	a14 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(2992, " ");
 __VERIFIER_reached_control(2992, " ");
if(((((a1==1)&&((a14==19)&&((a28==15)&&(((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==3))&&(a4==17)))))&&(a25==1))&&!(a3==1))){ __VERIFIER_control_true(2992, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(2999, " ");
 __VERIFIER_reached_control(2999, " ");
if(((((a25==1)&&((((((((a26==19)&&!(a7==1))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))||((a14==19)&&((a26==18)&&(a7==1))))&&(input==5))&&!(a3==1))&&(a1==1)))&&(a28==15))&&(a4==17))){ __VERIFIER_control_true(2999, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3006, " ");
 __VERIFIER_reached_control(3006, " ");
if(((a4==18)&&((a14==20)&&(((((a1==1)&&((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==1)))&&(a25==1))&&(a28==16))&&!(a3==1))))){ __VERIFIER_control_true(3006, " ");

	    	a26 = 19;
	    	a3 = 1;
	    	a7 = 0;
	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3014, " ");
 __VERIFIER_reached_control(3014, " ");
if(((a28==17)&&((a25==1)&&((a1==1)&&((a7==1)&&((!(a3==1)&&((a26==18)&&((input==3)&&(a14==18))))&&(a4==16))))))){ __VERIFIER_control_true(3014, " ");

	    	a3 = 1;
	    	a28 = 16;
	    	a26 = 19;
	    	a4 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3020, " ");
 __VERIFIER_reached_control(3020, " ");
if((((a4==17)&&((a25==1)&&(((a28==16)&&((((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17)))&&(input==5))&&(a3==1)))&&(a1==1))))&&(a14==19))){ __VERIFIER_control_true(3020, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3027, " ");
 __VERIFIER_reached_control(3027, " ");
if((((a28==17)&&((a4==18)&&(!(a3==1)&&((a7==1)&&((((input==1)&&((a26==17)||(a26==18)))&&(a1==1))&&(a25==1))))))&&(a14==18))){ __VERIFIER_control_true(3027, " ");

	    	a26 = 17;
	    	a7 = 0;
	    	return 21;
	    } else { __VERIFIER_control_false(3031, " ");
 __VERIFIER_reached_control(3031, " ");
if((((a14==19)&&(((a25==1)&&(((((((a26==17)||(a26==18))||(a26==19))&&(input==1))&&(a4==17))&&!(a3==1))&&(a28==16)))&&(a7==1)))&&(a1==1))){ __VERIFIER_control_true(3031, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3038, " ");
 __VERIFIER_reached_control(3038, " ");
if((((a25==1)&&((((a3==1)&&((a1==1)&&((input==4)&&((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))))))&&(a28==17))&&(a4==18)))&&(a14==20))){ __VERIFIER_control_true(3038, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3045, " ");
 __VERIFIER_reached_control(3045, " ");
if(((a3==1)&&((a4==17)&&(((a1==1)&&((a26==17)&&(((a25==1)&&((a28==15)&&(input==1)))&&!(a7==1))))&&(a14==20))))){ __VERIFIER_control_true(3045, " ");

	    	a28 = 17;
	    	a14 = 19;
	    	a26 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(3050, " ");
 __VERIFIER_reached_control(3050, " ");
if(((a4==17)&&(((a1==1)&&((a14==20)&&((!(a7==1)&&(((a28==15)&&(input==6))&&!(a3==1)))&&(a26==17))))&&(a25==1)))){ __VERIFIER_control_true(3050, " ");

	    	a26 = 18;
	    	a7 = 1;
	    	a28 = 17;
	    	a4 = 16;
	    	a14 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(3057, " ");
 __VERIFIER_reached_control(3057, " ");
if(((a25==1)&&(((a28==15)&&((((a14==18)&&(!(a7==1)&&((input==4)&&((a26==19)||((a26==17)||(a26==18))))))&&!(a3==1))&&(a1==1)))&&(a4==16)))){ __VERIFIER_control_true(3057, " ");

	    	a14 = 20;
	    	a28 = 16;
	    	a26 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(3062, " ");
 __VERIFIER_reached_control(3062, " ");
if(((((a14==20)&&((((a1==1)&&((a26==17)&&((input==4)&&!(a7==1))))&&(a4==17))&&!(a3==1)))&&(a25==1))&&(a28==15))){ __VERIFIER_control_true(3062, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3068, " ");
 __VERIFIER_reached_control(3068, " ");
if((((((a3==1)&&((input==5)&&(((a14==18)&&(((a28==17)&&(a26==17))&&(a7==1)))||(((((a28==16)&&(a26==18))&&!(a7==1))&&(a14==20))||((((a26==19)&&(a28==16))&&!(a7==1))&&(a14==20))))))&&(a25==1))&&(a4==18))&&(a1==1))){ __VERIFIER_control_true(3068, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3075, " ");
 __VERIFIER_reached_control(3075, " ");
if((((a14==19)&&(((a28==15)&&((a25==1)&&((a3==1)&&(((!(a7==1)&&(a26==18))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==6)))))&&(a1==1)))&&(a4==17))){ __VERIFIER_control_true(3075, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3081, " ");
 __VERIFIER_reached_control(3081, " ");
if((((a14==18)&&((a25==1)&&((((a4==18)&&((a3==1)&&(((a26==18)||(a26==19))&&(input==1))))&&(a7==1))&&(a1==1))))&&(a28==15))){ __VERIFIER_control_true(3081, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3085, " ");
 __VERIFIER_reached_control(3085, " ");
if(((((((a1==1)&&((((input==6)&&(a25==1))&&(a26==17))&&!(a3==1)))&&!(a7==1))&&(a4==16))&&(a28==17))&&(a14==19))){ __VERIFIER_control_true(3085, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3091, " ");
 __VERIFIER_reached_control(3091, " ");
if(((((a14==18)&&((a4==18)&&((((((a26==18)&&!(a7==1))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==2))&&!(a3==1))&&(a25==1))))&&(a28==17))&&(a1==1))){ __VERIFIER_control_true(3091, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 0;
	    	a4 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(3097, " ");
 __VERIFIER_reached_control(3097, " ");
if(((((((!(a3==1)&&((((a26==17)||(a26==18))&&(input==3))&&(a1==1)))&&(a14==19))&&(a7==1))&&(a25==1))&&(a4==16))&&(a28==15))){ __VERIFIER_control_true(3097, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3102, " ");
 __VERIFIER_reached_control(3102, " ");
if(((a25==1)&&((((input==2)&&((((!(a7==1)&&((a28==17)&&((a26==18)&&(a4==16))))&&(a14==20))||((a14==20)&&(!(a7==1)&&((a28==17)&&((a26==19)&&(a4==16))))))||(((a7==1)&&(((a4==17)&&(a26==17))&&(a28==15)))&&(a14==18))))&&!(a3==1))&&(a1==1)))){ __VERIFIER_control_true(3102, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3110, " ");
 __VERIFIER_reached_control(3110, " ");
if((((a25==1)&&((((((input==6)&&((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1))))&&(a14==20))&&(a3==1))&&(a4==18))&&(a1==1)))&&(a28==16))){ __VERIFIER_control_true(3110, " ");

	    	a28 = 15;
	    	a3 = 0;
	    	a7 = 0;
	    	a4 = 16;
	    	a26 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(3117, " ");
 __VERIFIER_reached_control(3117, " ");
if(((a28==16)&&(((!(a3==1)&&((((a25==1)&&(((a26==18)||(a26==19))&&(input==1)))&&(a4==17))&&!(a7==1)))&&(a1==1))&&(a14==18)))){ __VERIFIER_control_true(3117, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3124, " ");
 __VERIFIER_reached_control(3124, " ");
if((((a25==1)&&(!(a7==1)&&(((a14==18)&&((((((a26==17)||(a26==18))||(a26==19))&&(input==1))&&!(a3==1))&&(a4==16)))&&(a1==1))))&&(a28==15))){ __VERIFIER_control_true(3124, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3129, " ");
 __VERIFIER_reached_control(3129, " ");
if(((((((a1==1)&&((a25==1)&&((input==3)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))))&&(a4==17))&&(a28==17))&&(a14==18))&&(a3==1))){ __VERIFIER_control_true(3129, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3135, " ");
 __VERIFIER_reached_control(3135, " ");
if((((a1==1)&&((!(a3==1)&&((a28==15)&&((a4==18)&&((input==6)&&(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))))))&&(a14==18)))&&(a25==1))){ __VERIFIER_control_true(3135, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3141, " ");
 __VERIFIER_reached_control(3141, " ");
if(((((a7==1)&&((((!(a3==1)&&((a26==17)&&(input==4)))&&(a14==20))&&(a25==1))&&(a28==16)))&&(a4==17))&&(a1==1))){ __VERIFIER_control_true(3141, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3147, " ");
 __VERIFIER_reached_control(3147, " ");
if((((a28==17)&&(((a4==17)&&((a3==1)&&((input==6)&&((((a7==1)&&(a26==17))&&(a14==20))||(((a14==19)&&(!(a7==1)&&(a26==18)))||((!(a7==1)&&(a26==19))&&(a14==19)))))))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(3147, " ");

	    	a14 = 20;
	    	a4 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(3154, " ");
 __VERIFIER_reached_control(3154, " ");
if(((a4==17)&&(((((a28==15)&&(!(a7==1)&&(!(a3==1)&&((a1==1)&&(input==3)))))&&(a25==1))&&(a26==18))&&(a14==19)))){ __VERIFIER_control_true(3154, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3161, " ");
 __VERIFIER_reached_control(3161, " ");
if(((a28==17)&&((a25==1)&&((a3==1)&&(((a4==17)&&(((((a14==19)&&(!(a7==1)&&(a26==18)))||(((a26==19)&&!(a7==1))&&(a14==19)))||((a14==20)&&((a7==1)&&(a26==17))))&&(input==5)))&&(a1==1)))))){ __VERIFIER_control_true(3161, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3168, " ");
 __VERIFIER_reached_control(3168, " ");
if(((a4==18)&&(((((((a3==1)&&((a14==19)&&(input==5)))&&(a7==1))&&(a1==1))&&(a26==17))&&(a28==16))&&(a25==1)))){ __VERIFIER_control_true(3168, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3173, " ");
 __VERIFIER_reached_control(3173, " ");
if(((a25==1)&&(((a1==1)&&((a4==17)&&(((a7==1)&&(((input==5)&&((a26==17)||(a26==18)))&&(a14==18)))&&(a3==1))))&&(a28==17)))){ __VERIFIER_control_true(3173, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3178, " ");
 __VERIFIER_reached_control(3178, " ");
if((((((a25==1)&&(((a4==17)&&(((a26==19)&&(input==6))&&(a14==19)))&&!(a7==1)))&&!(a3==1))&&(a28==17))&&(a1==1))){ __VERIFIER_control_true(3178, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3186, " ");
 __VERIFIER_reached_control(3186, " ");
if((((a28==15)&&(((((a25==1)&&(!(a7==1)&&((input==3)&&((a26==19)||((a26==17)||(a26==18))))))&&(a14==18))&&(a1==1))&&(a3==1)))&&(a4==18))){ __VERIFIER_control_true(3186, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3191, " ");
 __VERIFIER_reached_control(3191, " ");
if(((a26==18)&&(((a14==20)&&((((a3==1)&&((a1==1)&&((a4==18)&&(input==5))))&&!(a7==1))&&(a28==17)))&&(a25==1)))){ __VERIFIER_control_true(3191, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3198, " ");
 __VERIFIER_reached_control(3198, " ");
if((((a1==1)&&((a4==18)&&((a25==1)&&((a7==1)&&((a14==20)&&(((input==2)&&(((a26==17)||(a26==18))||(a26==19)))&&!(a3==1)))))))&&(a28==15))){ __VERIFIER_control_true(3198, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3204, " ");
 __VERIFIER_reached_control(3204, " ");
if((((a14==18)&&(((a28==15)&&((a3==1)&&((a4==18)&&(((((a26==17)||(a26==18))||(a26==19))&&(input==1))&&(a1==1)))))&&(a25==1)))&&!(a7==1))){ __VERIFIER_control_true(3204, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3209, " ");
 __VERIFIER_reached_control(3209, " ");
if(((((a28==16)&&((a1==1)&&(((input==2)&&(((a14==18)&&((a26==19)&&!(a7==1)))||(((a7==1)&&(a26==17))&&(a14==19))))&&!(a3==1))))&&(a25==1))&&(a4==18))){ __VERIFIER_control_true(3209, " ");

	    	a14 = 19;
	    	a26 = 18;
	    	a7 = 0;
	    	return 24;
	    } else { __VERIFIER_control_false(3214, " ");
 __VERIFIER_reached_control(3214, " ");
if((((a25==1)&&(!(a3==1)&&(((((((a14==19)&&((a26==19)&&!(a7==1)))||((a14==20)&&((a7==1)&&(a26==17))))||((a14==20)&&((a7==1)&&(a26==18))))&&(input==3))&&(a4==18))&&(a28==16))))&&(a1==1))){ __VERIFIER_control_true(3214, " ");

	    	a7 = 1;
	    	a26 = 18;
	    	a14 = 20;
	    	return -1;
	    } else { __VERIFIER_control_false(3219, " ");
 __VERIFIER_reached_control(3219, " ");
if(((a4==18)&&((((a25==1)&&((a28==16)&&(((input==2)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))&&!(a3==1))))&&(a1==1))&&(a14==20)))){ __VERIFIER_control_true(3219, " ");

	    	a28 = 17;
	    	a7 = 0;
	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3227, " ");
 __VERIFIER_reached_control(3227, " ");
if((((((a3==1)&&((a28==16)&&((a1==1)&&(!(a7==1)&&(((a26==18)||(a26==19))&&(input==1))))))&&(a4==17))&&(a25==1))&&(a14==20))){ __VERIFIER_control_true(3227, " ");

	    	a26 = 18;
	    	a14 = 18;
	    	a4 = 18;
	    	a7 = 1;
	    	return 21;
	    } else { __VERIFIER_control_false(3233, " ");
 __VERIFIER_reached_control(3233, " ");
if(((((((((a25==1)&&((input==6)&&((a26==17)||(a26==18))))&&(a28==16))&&(a4==16))&&(a7==1))&&(a1==1))&&!(a3==1))&&(a14==19))){ __VERIFIER_control_true(3233, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3239, " ");
 __VERIFIER_reached_control(3239, " ");
if((((a28==16)&&(!(a3==1)&&((a25==1)&&(((input==4)&&(((((a26==19)&&!(a7==1))&&(a14==19))||(((a7==1)&&(a26==17))&&(a14==20)))||(((a7==1)&&(a26==18))&&(a14==20))))&&(a1==1)))))&&(a4==16))){ __VERIFIER_control_true(3239, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3246, " ");
 __VERIFIER_reached_control(3246, " ");
if((((a7==1)&&((((a25==1)&&((a14==20)&&((a1==1)&&((((a26==17)||(a26==18))||(a26==19))&&(input==4)))))&&(a28==15))&&(a4==18)))&&!(a3==1))){ __VERIFIER_control_true(3246, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3252, " ");
 __VERIFIER_reached_control(3252, " ");
if((!(a3==1)&&(((((a4==18)&&((input==3)&&((((a26==19)&&!(a7==1))&&(a14==18))||((a14==19)&&((a26==17)&&(a7==1))))))&&(a1==1))&&(a25==1))&&(a28==16)))){ __VERIFIER_control_true(3252, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3260, " ");
 __VERIFIER_reached_control(3260, " ");
if((((a28==15)&&(((a3==1)&&((((a14==18)&&((input==6)&&((a26==19)||((a26==17)||(a26==18)))))&&!(a7==1))&&(a4==18)))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(3260, " ");

	    	a7 = 1;
	    	a26 = 19;
	    	a28 = 17;
	    	a14 = 19;
	    	return 26;
	    } else { __VERIFIER_control_false(3266, " ");
 __VERIFIER_reached_control(3266, " ");
if((((a25==1)&&(((((((a26==18)&&(input==1))&&(a4==18))&&(a14==20))&&(a1==1))&&(a3==1))&&(a28==17)))&&!(a7==1))){ __VERIFIER_control_true(3266, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3273, " ");
 __VERIFIER_reached_control(3273, " ");
if(((a4==18)&&((((((a7==1)&&(!(a3==1)&&((input==3)&&(a14==19))))&&(a25==1))&&(a28==16))&&(a1==1))&&(a26==18)))){ __VERIFIER_control_true(3273, " ");

	    	a14 = 20;
	    	return 21;
	    } else { __VERIFIER_control_false(3276, " ");
 __VERIFIER_reached_control(3276, " ");
if(((!(a7==1)&&(((a14==18)&&((a28==15)&&((((input==5)&&(a26==18))&&(a25==1))&&!(a3==1))))&&(a4==18)))&&(a1==1))){ __VERIFIER_control_true(3276, " ");

	    	a7 = 1;
	    	a14 = 19;
	    	a26 = 19;
	    	return 24;
	    } else { __VERIFIER_control_false(3281, " ");
 __VERIFIER_reached_control(3281, " ");
if(((a26==19)&&((a28==15)&&(((a4==16)&&((a1==1)&&((a25==1)&&(((input==6)&&(a14==18))&&!(a3==1)))))&&(a7==1))))){ __VERIFIER_control_true(3281, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3285, " ");
 __VERIFIER_reached_control(3285, " ");
if((((a4==16)&&((!(a3==1)&&(((((input==3)&&(a26==17))&&(a14==19))&&(a25==1))&&(a28==17)))&&(a1==1)))&&!(a7==1))){ __VERIFIER_control_true(3285, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3291, " ");
 __VERIFIER_reached_control(3291, " ");
if(((a4==17)&&((a1==1)&&(((a14==19)&&((((a28==16)&&((((a26==17)||(a26==18))||(a26==19))&&(input==3)))&&(a25==1))&&!(a3==1)))&&(a7==1))))){ __VERIFIER_control_true(3291, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3298, " ");
 __VERIFIER_reached_control(3298, " ");
if((((a3==1)&&(((a4==17)&&((a1==1)&&(((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==2))&&(a28==17))))&&(a25==1)))&&(a14==18))){ __VERIFIER_control_true(3298, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3304, " ");
 __VERIFIER_reached_control(3304, " ");
if((((a7==1)&&((a14==19)&&((((a28==15)&&(!(a3==1)&&((input==6)&&((a26==17)||(a26==18)))))&&(a4==16))&&(a1==1))))&&(a25==1))){ __VERIFIER_control_true(3304, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3309, " ");
 __VERIFIER_reached_control(3309, " ");
if((((a28==15)&&((((!(a3==1)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==3)))&&(a25==1))&&(a1==1))&&(a14==18)))&&(a4==18))){ __VERIFIER_control_true(3309, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3315, " ");
 __VERIFIER_reached_control(3315, " ");
if(((((a28==16)&&(((a1==1)&&(((((a14==19)&&(!(a7==1)&&(a26==19)))||((a14==20)&&((a7==1)&&(a26==17))))||((a14==20)&&((a7==1)&&(a26==18))))&&(input==1)))&&(a4==18)))&&(a25==1))&&!(a3==1))){ __VERIFIER_control_true(3315, " ");

	    	a26 = 17;
	    	a14 = 20;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3320, " ");
 __VERIFIER_reached_control(3320, " ");
if((!(a7==1)&&(((((!(a3==1)&&((a14==19)&&(((a26==18)||(a26==19))&&(input==2))))&&(a1==1))&&(a28==15))&&(a4==18))&&(a25==1)))){ __VERIFIER_control_true(3320, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3327, " ");
 __VERIFIER_reached_control(3327, " ");
if(((((((input==1)&&((((((a26==18)&&(a28==15))&&!(a7==1))&&(a14==20))||((((a28==15)&&(a26==19))&&!(a7==1))&&(a14==20)))||((a14==18)&&((a7==1)&&((a28==16)&&(a26==17))))))&&(a25==1))&&(a3==1))&&(a4==18))&&(a1==1))){ __VERIFIER_control_true(3327, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3334, " ");
 __VERIFIER_reached_control(3334, " ");
if((((((a14==18)&&(((a25==1)&&((((a26==17)||(a26==18))&&(input==2))&&(a1==1)))&&(a28==17)))&&(a7==1))&&!(a3==1))&&(a4==17))){ __VERIFIER_control_true(3334, " ");

	    	a14 = 19;
	    	a4 = 18;
	    	a26 = 19;
	    	a3 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(3340, " ");
 __VERIFIER_reached_control(3340, " ");
if((((a25==1)&&(((a1==1)&&((input==1)&&((((!(a7==1)&&((a26==18)&&(a28==16)))&&(a14==20))||((!(a7==1)&&((a26==19)&&(a28==16)))&&(a14==20)))||((a14==18)&&((a7==1)&&((a26==17)&&(a28==17)))))))&&(a4==16)))&&!(a3==1))){ __VERIFIER_control_true(3340, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3347, " ");
 __VERIFIER_reached_control(3347, " ");
if(((a1==1)&&(((((a4==17)&&((a28==16)&&((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))&&(input==4))))&&(a14==18))&&(a25==1))&&!(a3==1)))){ __VERIFIER_control_true(3347, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3354, " ");
 __VERIFIER_reached_control(3354, " ");
if((((((a14==19)&&(((((input==5)&&(a26==18))&&(a1==1))&&(a25==1))&&(a28==15)))&&!(a3==1))&&(a7==1))&&(a4==18))){ __VERIFIER_control_true(3354, " ");

	    	a28 = 17;
	    	a3 = 1;
	    	a26 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(3359, " ");
 __VERIFIER_reached_control(3359, " ");
if(((a25==1)&&((a14==18)&&((a1==1)&&((a7==1)&&(((a28==16)&&((a4==18)&&(((a26==17)||(a26==18))&&(input==4))))&&!(a3==1))))))){ __VERIFIER_control_true(3359, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3365, " ");
 __VERIFIER_reached_control(3365, " ");
if(((((a7==1)&&((a4==18)&&(((!(a3==1)&&(((a26==17)||(a26==18))&&(input==2)))&&(a28==15))&&(a14==18))))&&(a25==1))&&(a1==1))){ __VERIFIER_control_true(3365, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3370, " ");
 __VERIFIER_reached_control(3370, " ");
if(((((a3==1)&&((a14==18)&&((a26==18)&&((a4==18)&&((a28==17)&&((input==5)&&(a1==1)))))))&&(a25==1))&&!(a7==1))){ __VERIFIER_control_true(3370, " ");

	    	a7 = 1;
	    	a28 = 16;
	    	a4 = 16;
	    	a26 = 19;
	    	a3 = 0;
	    	return 22;
	    } else { __VERIFIER_control_false(3377, " ");
 __VERIFIER_reached_control(3377, " ");
if((((a25==1)&&((a1==1)&&((a28==15)&&(!(a3==1)&&((a4==18)&&((a14==19)&&((input==4)&&((a26==18)||(a26==19)))))))))&&!(a7==1))){ __VERIFIER_control_true(3377, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3384, " ");
 __VERIFIER_reached_control(3384, " ");
if(((!(a7==1)&&((a25==1)&&((a4==16)&&((a14==20)&&((a28==15)&&(!(a3==1)&&((input==1)&&((a26==17)||(a26==18)))))))))&&(a1==1))){ __VERIFIER_control_true(3384, " ");

	    	a4 = 18;
	    	a28 = 17;
	    	a26 = 19;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3391, " ");
 __VERIFIER_reached_control(3391, " ");
if(((a25==1)&&((a4==17)&&((a7==1)&&((((a28==15)&&(((a26==19)&&(input==4))&&(a3==1)))&&(a1==1))&&(a14==20)))))){ __VERIFIER_control_true(3391, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3396, " ");
 __VERIFIER_reached_control(3396, " ");
if(((a28==16)&&((a3==1)&&((a1==1)&&((a25==1)&&(((((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a7==1)&&(a26==19))))&&(input==4))&&(a4==17))&&(a14==20))))))){ __VERIFIER_control_true(3396, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3403, " ");
 __VERIFIER_reached_control(3403, " ");
if(((a14==19)&&(((((a28==16)&&((a25==1)&&((((a26==17)&&!(a7==1))||(((a7==1)&&(a26==18))||((a7==1)&&(a26==19))))&&(input==1))))&&(a1==1))&&(a3==1))&&(a4==18)))){ __VERIFIER_control_true(3403, " ");

	    	a14 = 20;
	    	a28 = 15;
	    	a26 = 19;
	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(3411, " ");
 __VERIFIER_reached_control(3411, " ");
if(((a14==18)&&(!(a3==1)&&((a1==1)&&(((a28==17)&&((a4==17)&&(((!(a7==1)&&(a26==18))||(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(input==4))))&&(a25==1)))))){ __VERIFIER_control_true(3411, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3418, " ");
 __VERIFIER_reached_control(3418, " ");
if(((a28==15)&&(((((a25==1)&&((a14==18)&&((a4==18)&&((input==3)&&((a26==17)||(a26==18))))))&&!(a3==1))&&(a7==1))&&(a1==1)))){ __VERIFIER_control_true(3418, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3423, " ");
 __VERIFIER_reached_control(3423, " ");
if((((a1==1)&&(((((a4==17)&&((input==1)&&((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||((a26==17)&&!(a7==1)))))&&!(a3==1))&&(a14==18))&&(a25==1)))&&(a28==16))){ __VERIFIER_control_true(3423, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3430, " ");
 __VERIFIER_reached_control(3430, " ");
if(((a28==15)&&(!(a7==1)&&((a25==1)&&(!(a3==1)&&((a1==1)&&((a26==17)&&(((input==5)&&(a4==17))&&(a14==20))))))))){ __VERIFIER_control_true(3430, " ");

	    	return -1;
	    } else { __VERIFIER_control_false(3432, " ");
 __VERIFIER_reached_control(3432, " ");
if(((a25==1)&&((a4==18)&&(((a28==15)&&(!(a3==1)&&((((a14==18)&&(!(a7==1)&&(a26==19)))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==1))))&&(a1==1))))){ __VERIFIER_control_true(3432, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3439, " ");
 __VERIFIER_reached_control(3439, " ");
if(((((a26==18)&&(((a4==17)&&((!(a7==1)&&((input==2)&&(a28==15)))&&(a25==1)))&&(a1==1)))&&!(a3==1))&&(a14==19))){ __VERIFIER_control_true(3439, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3446, " ");
 __VERIFIER_reached_control(3446, " ");
if(((((!(a3==1)&&((a14==20)&&((a4==16)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==2)))))&&(a25==1))&&(a1==1))&&(a28==16))){ __VERIFIER_control_true(3446, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3453, " ");
 __VERIFIER_reached_control(3453, " ");
if(((((((a4==16)&&((((input==2)&&((a26==17)||(a26==18)))&&(a25==1))&&!(a7==1)))&&(a14==19))&&(a28==15))&&(a1==1))&&!(a3==1))){ __VERIFIER_control_true(3453, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3459, " ");
 __VERIFIER_reached_control(3459, " ");
if(((a28==15)&&((a25==1)&&(!(a3==1)&&((a4==17)&&(((input==2)&&(((a14==19)&&((a26==18)&&(a7==1)))||((((a26==19)&&!(a7==1))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))))&&(a1==1))))))){ __VERIFIER_control_true(3459, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3466, " ");
 __VERIFIER_reached_control(3466, " ");
if((((a25==1)&&((a14==18)&&(((a28==17)&&((a1==1)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==5))))&&(a3==1))))&&(a4==17))){ __VERIFIER_control_true(3466, " ");

	    	a26 = 19;
	    	a28 = 16;
	    	a4 = 18;
	    	a7 = 0;
	    	return 22;
	    } else { __VERIFIER_control_false(3472, " ");
 __VERIFIER_reached_control(3472, " ");
if((((a4==17)&&(((a28==17)&&(((a1==1)&&((a25==1)&&((input==5)&&!(a7==1))))&&(a14==19)))&&!(a3==1)))&&(a26==18))){ __VERIFIER_control_true(3472, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3480, " ");
 __VERIFIER_reached_control(3480, " ");
if(((a14==19)&&(((a7==1)&&((((a26==18)&&((a1==1)&&((input==2)&&(a28==15))))&&(a25==1))&&(a4==18)))&&!(a3==1)))){ __VERIFIER_control_true(3480, " ");

	    	a14 = 20;
	    	a28 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(3486, " ");
 __VERIFIER_reached_control(3486, " ");
if((((a14==19)&&(!(a3==1)&&((((a1==1)&&((input==1)&&(((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))))&&(a25==1))&&(a4==18))))&&(a28==15))){ __VERIFIER_control_true(3486, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3493, " ");
 __VERIFIER_reached_control(3493, " ");
if(((a4==17)&&(!(a3==1)&&((((a25==1)&&((((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a7==1)&&(a26==19))))&&(input==2))&&(a28==16)))&&(a1==1))&&(a14==18))))){ __VERIFIER_control_true(3493, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3500, " ");
 __VERIFIER_reached_control(3500, " ");
if(((a7==1)&&((!(a3==1)&&((((((a14==18)&&(input==2))&&(a25==1))&&(a1==1))&&(a4==16))&&(a26==19)))&&(a28==17)))){ __VERIFIER_control_true(3500, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3505, " ");
 __VERIFIER_reached_control(3505, " ");
if((((((a1==1)&&(((a28==16)&&((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==3)))&&(a4==18)))&&(a14==20))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(3505, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a7 = 0;
	    	a26 = 17;
	    	a14 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(3512, " ");
 __VERIFIER_reached_control(3512, " ");
if(((a28==16)&&(((a4==17)&&(!(a3==1)&&((((a25==1)&&((input==4)&&((a26==19)||((a26==17)||(a26==18)))))&&(a1==1))&&(a14==19))))&&(a7==1)))){ __VERIFIER_control_true(3512, " ");

	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3519, " ");
 __VERIFIER_reached_control(3519, " ");
if((((a4==17)&&((a14==19)&&((a25==1)&&((((a1==1)&&((input==3)&&(a28==17)))&&!(a3==1))&&(a26==18)))))&&!(a7==1))){ __VERIFIER_control_true(3519, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3527, " ");
 __VERIFIER_reached_control(3527, " ");
if(((a4==18)&&((a25==1)&&(((a1==1)&&((input==3)&&((((!(a7==1)&&((a26==18)&&(a28==15)))&&(a14==20))||((a14==20)&&(!(a7==1)&&((a26==19)&&(a28==15)))))||((((a26==17)&&(a28==16))&&(a7==1))&&(a14==18)))))&&(a3==1))))){ __VERIFIER_control_true(3527, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3534, " ");
 __VERIFIER_reached_control(3534, " ");
if(((a3==1)&&((a25==1)&&(((a1==1)&&((a28==17)&&((((a14==19)&&((a26==19)&&!(a7==1)))||((a14==20)&&((a7==1)&&(a26==17))))&&(input==4))))&&(a4==18))))){ __VERIFIER_control_true(3534, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3541, " ");
 __VERIFIER_reached_control(3541, " ");
if(((a3==1)&&((a25==1)&&(((input==3)&&(((a14==20)&&((((a4==17)&&(a26==19))&&(a28==17))&&!(a7==1)))||(((((a26==17)&&(a4==18))&&(a28==15))&&(a7==1))&&(a14==18))))&&(a1==1))))){ __VERIFIER_control_true(3541, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3548, " ");
 __VERIFIER_reached_control(3548, " ");
if((((a25==1)&&(((a1==1)&&((a4==17)&&((((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))||(!(a7==1)&&(a26==18)))&&(input==4))&&(a14==20))))&&(a3==1)))&&(a28==17))){ __VERIFIER_control_true(3548, " ");

	    	a7 = 0;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 18;
	    	return 26;
	    } else { __VERIFIER_control_false(3554, " ");
 __VERIFIER_reached_control(3554, " ");
if(((((((a1==1)&&((input==6)&&(((a14==19)&&((a7==1)&&(a26==18)))||(((!(a7==1)&&(a26==19))&&(a14==18))||((a14==19)&&((a26==17)&&(a7==1)))))))&&!(a3==1))&&(a25==1))&&(a28==17))&&(a4==18))){ __VERIFIER_control_true(3554, " ");

	    	a7 = 0;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 17;
	    	a28 = 15;
	    	return 24;
	    } else { __VERIFIER_control_false(3561, " ");
 __VERIFIER_reached_control(3561, " ");
if(((a4==16)&&((!(a3==1)&&((a1==1)&&(!(a7==1)&&((((a26==17)&&(input==6))&&(a28==17))&&(a14==18)))))&&(a25==1)))){ __VERIFIER_control_true(3561, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3566, " ");
 __VERIFIER_reached_control(3566, " ");
if((((((a1==1)&&((a28==17)&&((a25==1)&&(((input==3)&&(a14==20))&&(a26==18)))))&&(a3==1))&&!(a7==1))&&(a4==18))){ __VERIFIER_control_true(3566, " ");

	    	a28 = 16;
	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 0;
	    	a14 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(3573, " ");
 __VERIFIER_reached_control(3573, " ");
if(((a1==1)&&((a4==18)&&((a14==20)&&((a28==16)&&((!(a7==1)&&(!(a3==1)&&(((a26==18)||(a26==19))&&(input==6))))&&(a25==1))))))){ __VERIFIER_control_true(3573, " ");

	    	a3 = 1;
	    	a26 = 19;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3580, " ");
 __VERIFIER_reached_control(3580, " ");
if(((!(a3==1)&&(((a1==1)&&(((((input==3)&&((a26==17)||(a26==18)))&&(a7==1))&&(a14==18))&&(a28==16)))&&(a25==1)))&&(a4==18))){ __VERIFIER_control_true(3580, " ");

	    	a14 = 19;
	    	a26 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(3584, " ");
 __VERIFIER_reached_control(3584, " ");
if((((a1==1)&&((a28==15)&&(((a3==1)&&(((((a14==19)&&((a26==19)&&!(a7==1)))||(((a26==17)&&(a7==1))&&(a14==20)))||((a14==20)&&((a7==1)&&(a26==18))))&&(input==2)))&&(a25==1))))&&(a4==18))){ __VERIFIER_control_true(3584, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3590, " ");
 __VERIFIER_reached_control(3590, " ");
if(((a1==1)&&(((a4==17)&&((a25==1)&&((input==3)&&(((a14==18)&&(((a28==16)&&(a26==17))&&(a7==1)))||(((a14==20)&&(((a26==18)&&(a28==15))&&!(a7==1)))||((((a28==15)&&(a26==19))&&!(a7==1))&&(a14==20)))))))&&!(a3==1)))){ __VERIFIER_control_true(3590, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3598, " ");
 __VERIFIER_reached_control(3598, " ");
if((!(a7==1)&&((a25==1)&&(!(a3==1)&&(((a14==18)&&(((a1==1)&&(((a26==18)||(a26==19))&&(input==3)))&&(a28==16)))&&(a4==16)))))){ __VERIFIER_control_true(3598, " ");

	    	a28 = 15;
	    	a26 = 18;
	    	a14 = 20;
	    	return 26;
	    } else { __VERIFIER_control_false(3603, " ");
 __VERIFIER_reached_control(3603, " ");
if((!(a3==1)&&(((a1==1)&&((a25==1)&&(((((a14==18)&&((a26==19)&&!(a7==1)))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==4))&&(a28==17))))&&(a4==16)))){ __VERIFIER_control_true(3603, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3610, " ");
 __VERIFIER_reached_control(3610, " ");
if((((a1==1)&&((a28==15)&&((a14==19)&&((a4==18)&&(((input==6)&&(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&!(a3==1))))))&&(a25==1))){ __VERIFIER_control_true(3610, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3617, " ");
 __VERIFIER_reached_control(3617, " ");
if(((a28==15)&&((a14==19)&&(((((a26==18)&&((a1==1)&&((a25==1)&&(input==1))))&&(a3==1))&&(a7==1))&&(a4==18))))){ __VERIFIER_control_true(3617, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3622, " ");
 __VERIFIER_reached_control(3622, " ");
if((((a3==1)&&((((a1==1)&&((input==6)&&((((a7==1)&&(a26==17))&&(a14==19))||(((!(a7==1)&&(a26==18))&&(a14==18))||((!(a7==1)&&(a26==19))&&(a14==18))))))&&(a25==1))&&(a28==17)))&&(a4==17))){ __VERIFIER_control_true(3622, " ");

	    	a14 = 19;
	    	a28 = 16;
	    	a4 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(3629, " ");
 __VERIFIER_reached_control(3629, " ");
if((((a1==1)&&((a25==1)&&((a4==18)&&(((input==6)&&(((a14==20)&&((a26==18)&&(a7==1)))||((((a26==19)&&!(a7==1))&&(a14==19))||(((a26==17)&&(a7==1))&&(a14==20)))))&&(a28==16)))))&&!(a3==1))){ __VERIFIER_control_true(3629, " ");

	    	a26 = 17;
	    	a4 = 17;
	    	a7 = 0;
	    	a14 = 18;
	    	a28 = 15;
	    	return 21;
	    } else { __VERIFIER_control_false(3636, " ");
 __VERIFIER_reached_control(3636, " ");
if(((((a25==1)&&((a7==1)&&((((a1==1)&&((a4==18)&&(input==4)))&&(a3==1))&&(a26==19))))&&(a14==20))&&(a28==15))){ __VERIFIER_control_true(3636, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3641, " ");
 __VERIFIER_reached_control(3641, " ");
if(((a28==15)&&((a14==20)&&((((a7==1)&&((((input==4)&&(a1==1))&&(a25==1))&&!(a3==1)))&&(a26==19))&&(a4==16))))){ __VERIFIER_control_true(3641, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3646, " ");
 __VERIFIER_reached_control(3646, " ");
if((((a3==1)&&((a4==17)&&((((((input==1)&&(a7==1))&&(a1==1))&&(a26==19))&&(a25==1))&&(a14==20))))&&(a28==15))){ __VERIFIER_control_true(3646, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3651, " ");
 __VERIFIER_reached_control(3651, " ");
if((((a25==1)&&(!(a3==1)&&((a1==1)&&(((((a14==18)&&(!(a7==1)&&(a26==19)))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==2))&&(a4==18)))))&&(a28==15))){ __VERIFIER_control_true(3651, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3658, " ");
 __VERIFIER_reached_control(3658, " ");
if((((a4==16)&&((a25==1)&&(((a1==1)&&((((a14==18)&&(!(a7==1)&&(a26==19)))||(((a26==17)&&(a7==1))&&(a14==19)))&&(input==3)))&&!(a3==1))))&&(a28==17))){ __VERIFIER_control_true(3658, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3665, " ");
 __VERIFIER_reached_control(3665, " ");
if(((a25==1)&&((a1==1)&&((a14==20)&&(!(a3==1)&&((a4==17)&&((a7==1)&&(((a28==16)&&(input==3))&&(a26==17))))))))){ __VERIFIER_control_true(3665, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3671, " ");
 __VERIFIER_reached_control(3671, " ");
if(((a4==18)&&(((a28==15)&&(((a7==1)&&((((input==4)&&((a26==17)||(a26==18)))&&(a14==18))&&(a1==1)))&&(a25==1)))&&!(a3==1)))){ __VERIFIER_control_true(3671, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3676, " ");
 __VERIFIER_reached_control(3676, " ");
if(((a14==20)&&(((((a7==1)&&((((input==6)&&((a26==17)||(a26==18)))&&(a28==15))&&(a25==1)))&&!(a3==1))&&(a1==1))&&(a4==16)))){ __VERIFIER_control_true(3676, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3681, " ");
 __VERIFIER_reached_control(3681, " ");
if(((a14==19)&&(!(a3==1)&&(((((a1==1)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==5)))&&(a28==15))&&(a25==1))&&(a4==17))))){ __VERIFIER_control_true(3681, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3688, " ");
 __VERIFIER_reached_control(3688, " ");
if(((a25==1)&&(!(a3==1)&&(((((a14==20)&&((((a26==19)||((a26==17)||(a26==18)))&&(input==4))&&(a1==1)))&&(a7==1))&&(a28==15))&&(a4==17))))){ __VERIFIER_control_true(3688, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3694, " ");
 __VERIFIER_reached_control(3694, " ");
if(((a1==1)&&(((a3==1)&&(((a4==18)&&(((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==5))&&(a25==1)))&&(a28==17)))&&(a14==18)))){ __VERIFIER_control_true(3694, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3700, " ");
 __VERIFIER_reached_control(3700, " ");
if(((a28==17)&&(((((a4==17)&&((a3==1)&&(((input==1)&&(a1==1))&&(a25==1))))&&(a7==1))&&(a14==20))&&(a26==18)))){ __VERIFIER_control_true(3700, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3706, " ");
 __VERIFIER_reached_control(3706, " ");
if(((a28==17)&&(((a1==1)&&((a3==1)&&(((a25==1)&&(((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))&&(input==5)))&&(a4==18))))&&(a14==19)))){ __VERIFIER_control_true(3706, " ");

	    	a14 = 18;
	    	a26 = 19;
	    	a7 = 0;
	    	return 24;
	    } else { __VERIFIER_control_false(3711, " ");
 __VERIFIER_reached_control(3711, " ");
if(((((a1==1)&&((a25==1)&&((((input==3)&&(((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17))))&&(a14==18))&&(a28==16))))&&(a4==16))&&!(a3==1))){ __VERIFIER_control_true(3711, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3717, " ");
 __VERIFIER_reached_control(3717, " ");
if(((a28==15)&&((((a3==1)&&((((((!(a7==1)&&(a26==19))&&(a14==19))||((a14==20)&&((a7==1)&&(a26==17))))||(((a7==1)&&(a26==18))&&(a14==20)))&&(input==5))&&(a25==1)))&&(a4==18))&&(a1==1)))){ __VERIFIER_control_true(3717, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3723, " ");
 __VERIFIER_reached_control(3723, " ");
if(((((a25==1)&&(((input==4)&&(((a14==18)&&((a7==1)&&((a28==16)&&(a26==17))))||(((!(a7==1)&&((a26==18)&&(a28==15)))&&(a14==20))||((!(a7==1)&&((a28==15)&&(a26==19)))&&(a14==20)))))&&(a3==1)))&&(a4==17))&&(a1==1))){ __VERIFIER_control_true(3723, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3730, " ");
 __VERIFIER_reached_control(3730, " ");
if((((a4==18)&&((((a26==18)&&((!(a7==1)&&((input==3)&&(a28==15)))&&!(a3==1)))&&(a14==18))&&(a25==1)))&&(a1==1))){ __VERIFIER_control_true(3730, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3736, " ");
 __VERIFIER_reached_control(3736, " ");
if((((((a4==17)&&((a14==19)&&(((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==4))&&!(a3==1))))&&(a1==1))&&(a25==1))&&(a28==17))){ __VERIFIER_control_true(3736, " ");

	    	a14 = 20;
	    	a7 = 0;
	    	a26 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(3741, " ");
 __VERIFIER_reached_control(3741, " ");
if((!(a3==1)&&((((a28==16)&&((((a1==1)&&((input==3)&&((a26==18)||(a26==19))))&&!(a7==1))&&(a14==20)))&&(a4==18))&&(a25==1)))){ __VERIFIER_control_true(3741, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 17;
	    	a26 = 18;
	    	a14 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(3748, " ");
 __VERIFIER_reached_control(3748, " ");
if(((a25==1)&&(((a1==1)&&((a3==1)&&((a28==17)&&((input==6)&&(((a14==19)&&((a26==19)&&!(a7==1)))||(((a7==1)&&(a26==17))&&(a14==20)))))))&&(a4==18)))){ __VERIFIER_control_true(3748, " ");

	    	a26 = 18;
	    	a14 = 19;
	    	a7 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(3753, " ");
 __VERIFIER_reached_control(3753, " ");
if((((((((!(a7==1)&&((a28==17)&&(((a4==18)&&(a3==1))&&(a26==19))))&&(a14==20))||((a14==18)&&((a7==1)&&(((!(a3==1)&&(a4==16))&&(a26==17))&&(a28==15)))))||(((a7==1)&&((a28==15)&&(((a4==16)&&!(a3==1))&&(a26==18))))&&(a14==18)))&&(input==1))&&(a25==1))&&(a1==1))){ __VERIFIER_control_true(3753, " ");

	    	a4 = 16;
	    	a14 = 19;
	    	a26 = 19;
	    	a3 = 0;
	    	a7 = 1;
	    	a28 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(3761, " ");
 __VERIFIER_reached_control(3761, " ");
if(((a1==1)&&((a25==1)&&(((a4==17)&&((a28==16)&&(((input==2)&&((((a7==1)&&(a26==18))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17))))&&(a3==1))))&&(a14==19))))){ __VERIFIER_control_true(3761, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3768, " ");
 __VERIFIER_reached_control(3768, " ");
if(((a28==16)&&(((a14==20)&&((!(a3==1)&&(((a1==1)&&((a7==1)&&(input==1)))&&(a26==17)))&&(a4==17)))&&(a25==1)))){ __VERIFIER_control_true(3768, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3774, " ");
 __VERIFIER_reached_control(3774, " ");
if((!(a7==1)&&((((((a14==20)&&((a28==15)&&((input==1)&&(a3==1))))&&(a26==17))&&(a25==1))&&(a1==1))&&(a4==18)))){ __VERIFIER_control_true(3774, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3779, " ");
 __VERIFIER_reached_control(3779, " ");
if((!(a3==1)&&((a14==19)&&(((a4==16)&&(((a25==1)&&(((input==2)&&((a26==17)||(a26==18)))&&(a28==16)))&&(a7==1)))&&(a1==1))))){ __VERIFIER_control_true(3779, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3785, " ");
 __VERIFIER_reached_control(3785, " ");
if(((((a4==18)&&((((((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||((a26==17)&&!(a7==1)))&&(input==5))&&(a28==17))&&(a1==1))&&(a25==1)))&&(a3==1))&&(a14==20))){ __VERIFIER_control_true(3785, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a7 = 1;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3792, " ");
 __VERIFIER_reached_control(3792, " ");
if((((a14==20)&&((a1==1)&&((a4==16)&&(((a28==17)&&((input==2)&&(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))))&&!(a3==1)))))&&(a25==1))){ __VERIFIER_control_true(3792, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3799, " ");
 __VERIFIER_reached_control(3799, " ");
if(((((a28==15)&&(((a4==18)&&(((a26==19)&&((input==5)&&(a14==20)))&&(a1==1)))&&(a3==1)))&&(a25==1))&&(a7==1))){ __VERIFIER_control_true(3799, " ");

	    	a3 = 0;
	    	a14 = 18;
	    	a4 = 16;
	    	return 26;
	    } else { __VERIFIER_control_false(3804, " ");
 __VERIFIER_reached_control(3804, " ");
if(((((a28==15)&&(((a4==18)&&(((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==3))&&(a25==1)))&&(a1==1)))&&!(a3==1))&&(a14==19))){ __VERIFIER_control_true(3804, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3811, " ");
 __VERIFIER_reached_control(3811, " ");
if(((a1==1)&&((a25==1)&&(((((a7==1)&&(((a14==20)&&(input==2))&&(a26==19)))&&(a4==16))&&!(a3==1))&&(a28==15))))){ __VERIFIER_control_true(3811, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3816, " ");
 __VERIFIER_reached_control(3816, " ");
if(((a4==16)&&((!(a3==1)&&(((input==2)&&(((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20))||(((a7==1)&&((a28==16)&&(a26==17)))&&(a14==18))))&&(a1==1)))&&(a25==1)))){ __VERIFIER_control_true(3816, " ");

	    	a14 = 19;
	    	a7 = 0;
	    	a28 = 17;
	    	a26 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(3822, " ");
 __VERIFIER_reached_control(3822, " ");
if((((a1==1)&&((!(a3==1)&&((a14==19)&&((a28==16)&&((a26==19)&&((input==2)&&!(a7==1))))))&&(a25==1)))&&(a4==17))){ __VERIFIER_control_true(3822, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3830, " ");
 __VERIFIER_reached_control(3830, " ");
if((((a1==1)&&(((input==4)&&((((((a4==17)&&(a26==19))&&(a28==17))&&!(a7==1))&&(a14==20))||(((a7==1)&&((a28==15)&&((a26==17)&&(a4==18))))&&(a14==18))))&&(a3==1)))&&(a25==1))){ __VERIFIER_control_true(3830, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3837, " ");
 __VERIFIER_reached_control(3837, " ");
if(((a14==19)&&((a1==1)&&((a3==1)&&((a4==17)&&(((a25==1)&&((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==4)))&&(a28==16))))))){ __VERIFIER_control_true(3837, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3844, " ");
 __VERIFIER_reached_control(3844, " ");
if(((!(a3==1)&&(((((!(a7==1)&&((input==1)&&(a4==17)))&&(a25==1))&&(a26==18))&&(a1==1))&&(a14==19)))&&(a28==17))){ __VERIFIER_control_true(3844, " ");

	    	a7 = 1;
	    	a4 = 18;
	    	a14 = 18;
	    	a28 = 15;
	    	return 24;
	    } else { __VERIFIER_control_false(3850, " ");
 __VERIFIER_reached_control(3850, " ");
if(((((((((((a26==17)&&!(a7==1))||(((a7==1)&&(a26==18))||((a7==1)&&(a26==19))))&&(input==1))&&(a4==17))&&(a14==18))&&(a25==1))&&(a1==1))&&(a3==1))&&(a28==16))){ __VERIFIER_control_true(3850, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3856, " ");
 __VERIFIER_reached_control(3856, " ");
if(((((((a14==18)&&((a28==16)&&((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==6))))&&(a25==1))&&(a1==1))&&(a4==16))&&!(a3==1))){ __VERIFIER_control_true(3856, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3862, " ");
 __VERIFIER_reached_control(3862, " ");
if(((a4==16)&&(((a7==1)&&((!(a3==1)&&(((a14==18)&&((a26==19)&&(input==4)))&&(a28==17)))&&(a25==1)))&&(a1==1)))){ __VERIFIER_control_true(3862, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3867, " ");
 __VERIFIER_reached_control(3867, " ");
if(((a28==16)&&(((a4==17)&&((((input==6)&&((((a7==1)&&(a26==17))&&(a14==20))||((((a26==18)&&!(a7==1))&&(a14==19))||((!(a7==1)&&(a26==19))&&(a14==19)))))&&(a25==1))&&(a3==1)))&&(a1==1)))){ __VERIFIER_control_true(3867, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3874, " ");
 __VERIFIER_reached_control(3874, " ");
if(((a1==1)&&((!(a7==1)&&(((((((a26==18)||(a26==19))&&(input==5))&&(a25==1))&&!(a3==1))&&(a28==16))&&(a14==20)))&&(a4==18)))){ __VERIFIER_control_true(3874, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(3879, " ");
 __VERIFIER_reached_control(3879, " ");
if((((!(a3==1)&&((a28==15)&&(((input==1)&&(((a14==19)&&((a26==18)&&(a7==1)))||(((a14==18)&&(!(a7==1)&&(a26==19)))||(((a7==1)&&(a26==17))&&(a14==19)))))&&(a4==17))))&&(a1==1))&&(a25==1))){ __VERIFIER_control_true(3879, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3886, " ");
 __VERIFIER_reached_control(3886, " ");
if(((a25==1)&&((a1==1)&&(!(a3==1)&&(((input==4)&&(((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20))||(((a7==1)&&((a28==16)&&(a26==17)))&&(a14==18))))&&(a4==16)))))){ __VERIFIER_control_true(3886, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3893, " ");
 __VERIFIER_reached_control(3893, " ");
if(((((((!(a3==1)&&(((input==1)&&(a25==1))&&(a28==15)))&&(a14==20))&&(a1==1))&&(a4==17))&&(a26==17))&&!(a7==1))){ __VERIFIER_control_true(3893, " ");

	    	a7 = 1;
	    	a26 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(3897, " ");
 __VERIFIER_reached_control(3897, " ");
if((((!(a3==1)&&((a14==20)&&((a4==17)&&(((a1==1)&&(((a26==18)||(a26==19))&&(input==1)))&&(a28==16)))))&&!(a7==1))&&(a25==1))){ __VERIFIER_control_true(3897, " ");

	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3900, " ");
 __VERIFIER_reached_control(3900, " ");
if((((a4==16)&&(((((a28==15)&&((a14==19)&&(((a26==17)||(a26==18))&&(input==1))))&&!(a3==1))&&!(a7==1))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(3900, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3906, " ");
 __VERIFIER_reached_control(3906, " ");
if(((!(a7==1)&&((a25==1)&&((a1==1)&&((a3==1)&&((a4==18)&&(((input==4)&&((a26==18)||(a26==19)))&&(a28==16)))))))&&(a14==19))){ __VERIFIER_control_true(3906, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3913, " ");
 __VERIFIER_reached_control(3913, " ");
if(((a28==15)&&((((a7==1)&&((a4==17)&&(((a25==1)&&(((a26==18)||(a26==19))&&(input==1)))&&(a1==1))))&&!(a3==1))&&(a14==18)))){ __VERIFIER_control_true(3913, " ");

	    	a26 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(3916, " ");
 __VERIFIER_reached_control(3916, " ");
if(((a26==19)&&((a28==16)&&((!(a7==1)&&((a3==1)&&(((a25==1)&&((input==4)&&(a4==18)))&&(a1==1))))&&(a14==18))))){ __VERIFIER_control_true(3916, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3922, " ");
 __VERIFIER_reached_control(3922, " ");
if(((((a25==1)&&((a28==17)&&(!(a3==1)&&(((((a14==19)&&((a26==19)&&!(a7==1)))||((a14==20)&&((a26==17)&&(a7==1))))||((a14==20)&&((a7==1)&&(a26==18))))&&(input==3)))))&&(a1==1))&&(a4==16))){ __VERIFIER_control_true(3922, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(3929, " ");
 __VERIFIER_reached_control(3929, " ");
if(((((((a25==1)&&((!(a7==1)&&((input==1)&&(a28==15)))&&(a1==1)))&&(a4==17))&&!(a3==1))&&(a14==19))&&(a26==19))){ __VERIFIER_control_true(3929, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3936, " ");
 __VERIFIER_reached_control(3936, " ");
if(((((a1==1)&&((a28==15)&&((a4==17)&&((input==6)&&(((((a26==19)&&!(a7==1))&&(a14==18))||((a14==19)&&((a7==1)&&(a26==17))))||(((a7==1)&&(a26==18))&&(a14==19)))))))&&(a25==1))&&!(a3==1))){ __VERIFIER_control_true(3936, " ");

	    	a7 = 0;
	    	a28 = 16;
	    	a26 = 19;
	    	a14 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(3942, " ");
 __VERIFIER_reached_control(3942, " ");
if(((a14==18)&&((a28==17)&&((((a25==1)&&(!(a3==1)&&((a1==1)&&(((a26==17)||(a26==18))&&(input==4)))))&&(a4==18))&&(a7==1))))){ __VERIFIER_control_true(3942, " ");

	    	a14 = 19;
	    	a26 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(3949, " ");
 __VERIFIER_reached_control(3949, " ");
if((!(a7==1)&&((a28==17)&&((a14==18)&&(((a1==1)&&((a26==18)&&(!(a3==1)&&((input==2)&&(a25==1)))))&&(a4==16)))))){ __VERIFIER_control_true(3949, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3955, " ");
 __VERIFIER_reached_control(3955, " ");
if(((!(a3==1)&&(((((((((a26==17)||(a26==18))||(a26==19))&&(input==4))&&!(a7==1))&&(a25==1))&&(a1==1))&&(a28==17))&&(a14==20)))&&(a4==17))){ __VERIFIER_control_true(3955, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3963, " ");
 __VERIFIER_reached_control(3963, " ");
if((((((((a4==17)&&(((input==5)&&(a25==1))&&(a1==1)))&&(a14==20))&&(a3==1))&&(a26==18))&&(a7==1))&&(a28==15))){ __VERIFIER_control_true(3963, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3968, " ");
 __VERIFIER_reached_control(3968, " ");
if(((a4==16)&&(((a25==1)&&((a1==1)&&((input==5)&&(((a14==18)&&((a7==1)&&((a28==17)&&(a26==17))))||(((((a26==18)&&(a28==16))&&!(a7==1))&&(a14==20))||((a14==20)&&(((a26==19)&&(a28==16))&&!(a7==1))))))))&&!(a3==1)))){ __VERIFIER_control_true(3968, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(3975, " ");
 __VERIFIER_reached_control(3975, " ");
if(((a25==1)&&((a3==1)&&((((a4==17)&&(((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==6))&&(a28==16)))&&(a14==19))&&(a1==1))))){ __VERIFIER_control_true(3975, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(3982, " ");
 __VERIFIER_reached_control(3982, " ");
if(((((((a4==16)&&(!(a7==1)&&((a14==18)&&((input==5)&&(a1==1)))))&&!(a3==1))&&(a28==17))&&(a25==1))&&(a26==18))){ __VERIFIER_control_true(3982, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3988, " ");
 __VERIFIER_reached_control(3988, " ");
if((((((((a28==15)&&(((input==3)&&((a26==18)||(a26==19)))&&(a25==1)))&&!(a3==1))&&!(a7==1))&&(a4==18))&&(a1==1))&&(a14==20))){ __VERIFIER_control_true(3988, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(3995, " ");
 __VERIFIER_reached_control(3995, " ");
if(((a14==19)&&(((a1==1)&&((((a4==18)&&((input==6)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))))&&(a3==1))&&(a28==17)))&&(a25==1)))){ __VERIFIER_control_true(3995, " ");

	    	a26 = 17;
	    	a7 = 0;
	    	return 22;
	    } else { __VERIFIER_control_false(3999, " ");
 __VERIFIER_reached_control(3999, " ");
if(((a4==18)&&(((((((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))&&(input==2))&&(a28==16))&&(a14==19))&&(a25==1))&&!(a3==1))&&(a1==1)))){ __VERIFIER_control_true(3999, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4007, " ");
 __VERIFIER_reached_control(4007, " ");
if(((a25==1)&&((((a1==1)&&((a14==18)&&(((input==5)&&((((a26==19)&&(a7==1))||(!(a7==1)&&(a26==17)))||((a26==18)&&!(a7==1))))&&(a4==17))))&&!(a3==1))&&(a28==17)))){ __VERIFIER_control_true(4007, " ");

	    	a3 = 1;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4014, " ");
 __VERIFIER_reached_control(4014, " ");
if((((a25==1)&&((a7==1)&&(((((a14==18)&&(((a26==17)||(a26==18))&&(input==6)))&&(a4==17))&&!(a3==1))&&(a1==1))))&&(a28==17))){ __VERIFIER_control_true(4014, " ");

	    	a26 = 17;
	    	a4 = 18;
	    	a28 = 16;
	    	a14 = 20;
	    	a3 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(4021, " ");
 __VERIFIER_reached_control(4021, " ");
if(((a4==16)&&((!(a3==1)&&((a28==17)&&((a1==1)&&((input==5)&&(((a14==18)&&(!(a7==1)&&(a26==19)))||(((a26==17)&&(a7==1))&&(a14==19)))))))&&(a25==1)))){ __VERIFIER_control_true(4021, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4028, " ");
 __VERIFIER_reached_control(4028, " ");
if(((a28==17)&&(((a26==18)&&(!(a7==1)&&((a4==18)&&((((a3==1)&&(input==4))&&(a25==1))&&(a1==1)))))&&(a14==19)))){ __VERIFIER_control_true(4028, " ");

	    	a7 = 1;
	    	a28 = 16;
	    	a26 = 17;
	    	a14 = 20;
	    	return 26;
	    } else { __VERIFIER_control_false(4034, " ");
 __VERIFIER_reached_control(4034, " ");
if(((a25==1)&&(((a28==16)&&((a3==1)&&(((a4==17)&&((input==3)&&((!(a7==1)&&(a26==17))||(((a7==1)&&(a26==18))||((a26==19)&&(a7==1))))))&&(a1==1))))&&(a14==19)))){ __VERIFIER_control_true(4034, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4041, " ");
 __VERIFIER_reached_control(4041, " ");
if((((a25==1)&&(((a14==20)&&(((a28==15)&&(((input==4)&&((a26==18)||(a26==19)))&&(a4==18)))&&(a1==1)))&&!(a3==1)))&&!(a7==1))){ __VERIFIER_control_true(4041, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a3 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4048, " ");
 __VERIFIER_reached_control(4048, " ");
if((!(a3==1)&&(((a14==19)&&((a4==17)&&(((a1==1)&&(!(a7==1)&&((a25==1)&&(input==2))))&&(a28==15))))&&(a26==19)))){ __VERIFIER_control_true(4048, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4055, " ");
 __VERIFIER_reached_control(4055, " ");
if(((a1==1)&&(((((((a14==19)&&((a4==18)&&(input==6)))&&(a25==1))&&(a28==16))&&(a26==18))&&!(a3==1))&&!(a7==1)))){ __VERIFIER_control_true(4055, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 20;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4062, " ");
 __VERIFIER_reached_control(4062, " ");
if(((a4==18)&&((a1==1)&&(((a14==20)&&(((((!(a7==1)&&(a26==17))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==1))&&(a25==1))&&(a3==1)))&&(a28==17))))){ __VERIFIER_control_true(4062, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4069, " ");
 __VERIFIER_reached_control(4069, " ");
if(((a26==19)&&(!(a7==1)&&((a4==17)&&((a1==1)&&((((a28==17)&&((input==1)&&!(a3==1)))&&(a25==1))&&(a14==19))))))){ __VERIFIER_control_true(4069, " ");

	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	return 21;
	    } else { __VERIFIER_control_false(4074, " ");
 __VERIFIER_reached_control(4074, " ");
if(((a28==17)&&((((a25==1)&&(((input==2)&&((((a7==1)&&(a26==18))&&(a14==20))||(((a14==19)&&(!(a7==1)&&(a26==19)))||(((a7==1)&&(a26==17))&&(a14==20)))))&&(a4==16)))&&!(a3==1))&&(a1==1)))){ __VERIFIER_control_true(4074, " ");

	    	a4 = 17;
	    	a7 = 0;
	    	a14 = 18;
	    	a26 = 18;
	    	a28 = 16;
	    	return 22;
	    }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}} return calculate_output4(input);
	}

	int calculate_output4(int input) {
	    { __VERIFIER_reached_control(4085, " ");
if(((a25==1)&&((a28==17)&&((a14==18)&&(((((a26==17)&&((a4==16)&&(input==5)))&&!(a3==1))&&!(a7==1))&&(a1==1)))))){ __VERIFIER_control_true(4085, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4090, " ");
 __VERIFIER_reached_control(4090, " ");
if(((a3==1)&&(((a1==1)&&((a28==16)&&(((a4==18)&&((input==1)&&((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))))&&(a14==18))))&&(a25==1)))){ __VERIFIER_control_true(4090, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4096, " ");
 __VERIFIER_reached_control(4096, " ");
if(((!(a7==1)&&(((a25==1)&&(((((input==2)&&(((a26==17)||(a26==18))||(a26==19)))&&(a1==1))&&!(a3==1))&&(a28==17)))&&(a4==17)))&&(a14==20))){ __VERIFIER_control_true(4096, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4104, " ");
 __VERIFIER_reached_control(4104, " ");
if(((a4==17)&&((a28==17)&&((a25==1)&&((a3==1)&&(((input==3)&&((((a14==19)&&(!(a7==1)&&(a26==18)))||(((a26==19)&&!(a7==1))&&(a14==19)))||(((a7==1)&&(a26==17))&&(a14==20))))&&(a1==1))))))){ __VERIFIER_control_true(4104, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4111, " ");
 __VERIFIER_reached_control(4111, " ");
if(((a28==15)&&((a1==1)&&(((a25==1)&&(((a4==16)&&(((((a26==17)||(a26==18))||(a26==19))&&(input==5))&&!(a7==1)))&&!(a3==1)))&&(a14==18))))){ __VERIFIER_control_true(4111, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4116, " ");
 __VERIFIER_reached_control(4116, " ");
if((((!(a7==1)&&((a4==17)&&((a14==19)&&((a1==1)&&((((a26==17)||(a26==18))&&(input==4))&&!(a3==1))))))&&(a28==16))&&(a25==1))){ __VERIFIER_control_true(4116, " ");

	    	a4 = 16;
	    	a26 = 18;
	    	a7 = 1;
	    	a28 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(4122, " ");
 __VERIFIER_reached_control(4122, " ");
if((!(a3==1)&&(((a14==20)&&((a25==1)&&((a1==1)&&(((input==4)&&(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17))))&&(a4==18)))))&&(a28==16)))){ __VERIFIER_control_true(4122, " ");

	    	a28 = 17;
	    	a26 = 18;
	    	a14 = 18;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(4128, " ");
 __VERIFIER_reached_control(4128, " ");
if(((((a1==1)&&((((a14==19)&&((input==3)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))||((a26==18)&&!(a7==1)))))&&(a28==16))&&!(a3==1)))&&(a25==1))&&(a4==16))){ __VERIFIER_control_true(4128, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4135, " ");
 __VERIFIER_reached_control(4135, " ");
if(((a3==1)&&((((a28==17)&&(((a14==18)&&((input==3)&&(((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a7==1)&&(a26==19))))))&&(a1==1)))&&(a25==1))&&(a4==18)))){ __VERIFIER_control_true(4135, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4141, " ");
 __VERIFIER_reached_control(4141, " ");
if(((a28==16)&&(((a4==16)&&(((a25==1)&&((input==5)&&((((a7==1)&&(a26==18))&&(a14==20))||(((a14==19)&&(!(a7==1)&&(a26==19)))||((a14==20)&&((a26==17)&&(a7==1)))))))&&(a1==1)))&&!(a3==1)))){ __VERIFIER_control_true(4141, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4148, " ");
 __VERIFIER_reached_control(4148, " ");
if(((a4==16)&&((((a14==20)&&(!(a3==1)&&((a28==17)&&((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==6)))))&&(a25==1))&&(a1==1)))){ __VERIFIER_control_true(4148, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4155, " ");
 __VERIFIER_reached_control(4155, " ");
if(((((a14==19)&&((a1==1)&&((a28==16)&&(((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==4))&&(a4==18)))))&&!(a3==1))&&(a25==1))){ __VERIFIER_control_true(4155, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	a7 = 0;
	    	a3 = 1;
	    	a14 = 20;
	    	return -1;
	    } else { __VERIFIER_control_false(4162, " ");
 __VERIFIER_reached_control(4162, " ");
if(((a25==1)&&(((!(a3==1)&&((((a28==16)&&((input==6)&&(((a26==17)||(a26==18))||(a26==19))))&&(a1==1))&&(a4==17)))&&(a14==19))&&(a7==1)))){ __VERIFIER_control_true(4162, " ");

	    	a14 = 18;
	    	a7 = 0;
	    	a28 = 17;
	    	a26 = 19;
	    	return 26;
	    } else { __VERIFIER_control_false(4168, " ");
 __VERIFIER_reached_control(4168, " ");
if((((a7==1)&&((a25==1)&&(!(a3==1)&&((((((a26==17)||(a26==18))&&(input==5))&&(a28==16))&&(a14==18))&&(a1==1)))))&&(a4==18))){ __VERIFIER_control_true(4168, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4174, " ");
 __VERIFIER_reached_control(4174, " ");
if((((a4==17)&&(((((((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))||(!(a7==1)&&(a26==18)))&&(input==1))&&(a25==1))&&(a1==1))&&(a14==18))&&!(a3==1)))&&(a28==17))){ __VERIFIER_control_true(4174, " ");

	    	a14 = 19;
	    	a7 = 0;
	    	a28 = 16;
	    	a26 = 18;
	    	return 24;
	    } else { __VERIFIER_control_false(4180, " ");
 __VERIFIER_reached_control(4180, " ");
if(((a28==16)&&(!(a7==1)&&((a26==19)&&((a25==1)&&(!(a3==1)&&((a14==19)&&(((input==4)&&(a1==1))&&(a4==17))))))))){ __VERIFIER_control_true(4180, " ");

	    	a26 = 18;
	    	a28 = 17;
	    	return 23;
	    } else { __VERIFIER_control_false(4184, " ");
 __VERIFIER_reached_control(4184, " ");
if((((a4==18)&&(((a28==16)&&((a25==1)&&((a14==18)&&((input==4)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))||((a26==18)&&!(a7==1)))))))&&!(a3==1)))&&(a1==1))){ __VERIFIER_control_true(4184, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4191, " ");
 __VERIFIER_reached_control(4191, " ");
if(((a28==15)&&(!(a3==1)&&((a1==1)&&((a4==18)&&(((((!(a7==1)&&(a26==19))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==4))&&(a25==1))))))){ __VERIFIER_control_true(4191, " ");

	    	a26 = 19;
	    	a14 = 19;
	    	a7 = 0;
	    	return 22;
	    } else { __VERIFIER_control_false(4196, " ");
 __VERIFIER_reached_control(4196, " ");
if((((a25==1)&&((a28==16)&&((a4==16)&&((a1==1)&&((input==2)&&(((a14==20)&&((a26==18)&&(a7==1)))||((((a26==19)&&!(a7==1))&&(a14==19))||((a14==20)&&((a26==17)&&(a7==1))))))))))&&!(a3==1))){ __VERIFIER_control_true(4196, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4203, " ");
 __VERIFIER_reached_control(4203, " ");
if(((a4==18)&&(!(a7==1)&&(((a26==18)&&(((((a3==1)&&(input==2))&&(a28==17))&&(a1==1))&&(a14==19)))&&(a25==1))))){ __VERIFIER_control_true(4203, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4210, " ");
 __VERIFIER_reached_control(4210, " ");
if((((a14==20)&&(((a3==1)&&(!(a7==1)&&((a25==1)&&(((input==6)&&((a26==18)||(a26==19)))&&(a28==16)))))&&(a4==17)))&&(a1==1))){ __VERIFIER_control_true(4210, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4217, " ");
 __VERIFIER_reached_control(4217, " ");
if((((a1==1)&&((((a7==1)&&((a14==18)&&((a28==17)&&(((a26==17)||(a26==18))&&(input==6)))))&&(a4==18))&&(a25==1)))&&!(a3==1))){ __VERIFIER_control_true(4217, " ");

	    	a7 = 0;
	    	a4 = 16;
	    	a26 = 19;
	    	a14 = 20;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4224, " ");
 __VERIFIER_reached_control(4224, " ");
if((((((a1==1)&&((a4==17)&&((input==6)&&(((!(a7==1)&&(a26==19))&&(a14==19))||(((a26==17)&&(a7==1))&&(a14==20))))))&&(a25==1))&&(a28==15))&&(a3==1))){ __VERIFIER_control_true(4224, " ");

	    	a14 = 19;
	    	a7 = 0;
	    	a26 = 18;
	    	a28 = 16;
	    	return 23;
	    } else { __VERIFIER_control_false(4230, " ");
 __VERIFIER_reached_control(4230, " ");
if((((a28==17)&&((((a3==1)&&((input==4)&&(((!(a7==1)&&(a26==19))&&(a14==18))||((a14==19)&&((a26==17)&&(a7==1))))))&&(a4==18))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(4230, " ");

	    	a7 = 0;
	    	a14 = 20;
	    	a28 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4236, " ");
 __VERIFIER_reached_control(4236, " ");
if(((a28==17)&&((a1==1)&&((a4==18)&&((a3==1)&&(((a25==1)&&(((input==6)&&!(a7==1))&&(a26==18)))&&(a14==18))))))){ __VERIFIER_control_true(4236, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4242, " ");
 __VERIFIER_reached_control(4242, " ");
if(((((a3==1)&&((a14==19)&&((a28==15)&&(((a1==1)&&((input==1)&&((a26==17)||(a26==18))))&&!(a7==1)))))&&(a25==1))&&(a4==18))){ __VERIFIER_control_true(4242, " ");

	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4248, " ");
 __VERIFIER_reached_control(4248, " ");
if(((a1==1)&&(((a25==1)&&(((!(a3==1)&&((input==5)&&((!(a7==1)&&(a26==18))||(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17))))))&&(a28==16))&&(a4==16)))&&(a14==19)))){ __VERIFIER_control_true(4248, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4255, " ");
 __VERIFIER_reached_control(4255, " ");
if((((((a25==1)&&(((a26==18)&&((a4==18)&&((input==1)&&(a1==1))))&&(a28==15)))&&!(a3==1))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4255, " ");

	    	a7 = 1;
	    	a26 = 17;
	    	a3 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4261, " ");
 __VERIFIER_reached_control(4261, " ");
if(((a4==17)&&((a28==16)&&(((a14==18)&&((!(a7==1)&&((a25==1)&&(((a26==18)||(a26==19))&&(input==6))))&&!(a3==1)))&&(a1==1))))){ __VERIFIER_control_true(4261, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4268, " ");
 __VERIFIER_reached_control(4268, " ");
if((((a3==1)&&((a28==16)&&(((a1==1)&&((a14==18)&&(((((a26==18)&&(a7==1))||((a26==19)&&(a7==1)))||(!(a7==1)&&(a26==17)))&&(input==6))))&&(a4==17))))&&(a25==1))){ __VERIFIER_control_true(4268, " ");

	    	a26 = 19;
	    	a4 = 18;
	    	a28 = 15;
	    	a14 = 19;
	    	a7 = 1;
	    	return 23;
	    } else { __VERIFIER_control_false(4275, " ");
 __VERIFIER_reached_control(4275, " ");
if((((a25==1)&&((a1==1)&&((a4==17)&&((a3==1)&&((input==4)&&((((!(a7==1)&&(a26==18))&&(a14==18))||((a14==18)&&(!(a7==1)&&(a26==19))))||((a14==19)&&((a7==1)&&(a26==17)))))))))&&(a28==16))){ __VERIFIER_control_true(4275, " ");

	    	a14 = 19;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 18;
	    	a7 = 0;
	    	return 23;
	    } else { __VERIFIER_control_false(4282, " ");
 __VERIFIER_reached_control(4282, " ");
if(((a14==19)&&((a25==1)&&(((a1==1)&&((((a28==15)&&((input==5)&&((a26==17)||(a26==18))))&&!(a3==1))&&!(a7==1)))&&(a4==16))))){ __VERIFIER_control_true(4282, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4288, " ");
 __VERIFIER_reached_control(4288, " ");
if(((a28==16)&&((a14==18)&&((a4==16)&&((!(a3==1)&&((a25==1)&&((input==1)&&(((a7==1)&&(a26==19))||((a26==17)&&!(a7==1))))))&&(a1==1)))))){ __VERIFIER_control_true(4288, " ");

	    	a14 = 20;
	    	a7 = 1;
	    	a28 = 17;
	    	a26 = 17;
	    	return 26;
	    } else { __VERIFIER_control_false(4294, " ");
 __VERIFIER_reached_control(4294, " ");
if(((((a26==19)&&((a7==1)&&((a3==1)&&((a25==1)&&((a28==15)&&((a1==1)&&(input==6)))))))&&(a14==20))&&(a4==18))){ __VERIFIER_control_true(4294, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4299, " ");
 __VERIFIER_reached_control(4299, " ");
if(((((a4==17)&&((a14==19)&&((a7==1)&&(!(a3==1)&&((((a26==19)||((a26==17)||(a26==18)))&&(input==2))&&(a1==1))))))&&(a25==1))&&(a28==16))){ __VERIFIER_control_true(4299, " ");

	    	a28 = 17;
	    	a7 = 0;
	    	a26 = 17;
	    	return 22;
	    } else { __VERIFIER_control_false(4304, " ");
 __VERIFIER_reached_control(4304, " ");
if(((a4==17)&&(!(a3==1)&&(((a1==1)&&((input==4)&&((((!(a7==1)&&((a26==18)&&(a28==15)))&&(a14==20))||((!(a7==1)&&((a26==19)&&(a28==15)))&&(a14==20)))||(((a7==1)&&((a26==17)&&(a28==16)))&&(a14==18)))))&&(a25==1))))){ __VERIFIER_control_true(4304, " ");

	    	a26 = 17;
	    	a14 = 19;
	    	a28 = 16;
	    	a7 = 0;
	    	return 26;
	    } else { __VERIFIER_control_false(4310, " ");
 __VERIFIER_reached_control(4310, " ");
if((((((((((input==3)&&(a26==17))&&(a25==1))&&(a1==1))&&(a14==20))&&!(a7==1))&&(a4==17))&&!(a3==1))&&(a28==15))){ __VERIFIER_control_true(4310, " ");

	    	a7 = 1;
	    	a4 = 16;
	    	a3 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4316, " ");
 __VERIFIER_reached_control(4316, " ");
if(((((a3==1)&&((a28==17)&&((a14==19)&&((a4==17)&&((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==6))))))&&(a1==1))&&(a25==1))){ __VERIFIER_control_true(4316, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4323, " ");
 __VERIFIER_reached_control(4323, " ");
if(((a7==1)&&((a1==1)&&((a28==17)&&((((a4==16)&&(((input==2)&&((a26==18)||(a26==19)))&&(a25==1)))&&!(a3==1))&&(a14==19)))))){ __VERIFIER_control_true(4323, " ");

	    	a7 = 0;
	    	a4 = 17;
	    	a28 = 15;
	    	a26 = 17;
	    	a14 = 20;
	    	return 26;
	    } else { __VERIFIER_control_false(4330, " ");
 __VERIFIER_reached_control(4330, " ");
if(((((a7==1)&&((a14==19)&&((a1==1)&&(!(a3==1)&&(((a4==18)&&(input==3))&&(a28==15))))))&&(a25==1))&&(a26==18))){ __VERIFIER_control_true(4330, " ");

	    	a26 = 17;
	    	a28 = 16;
	    	a14 = 20;
	    	a3 = 1;
	    	return 26;
	    } else { __VERIFIER_control_false(4336, " ");
 __VERIFIER_reached_control(4336, " ");
if((((a4==17)&&((a28==17)&&((a14==20)&&((!(a7==1)&&((a1==1)&&((((a26==17)||(a26==18))||(a26==19))&&(input==6))))&&!(a3==1)))))&&(a25==1))){ __VERIFIER_control_true(4336, " ");

	    	a14 = 18;
	    	a3 = 1;
	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4344, " ");
 __VERIFIER_reached_control(4344, " ");
if(((((((a1==1)&&(((((a14==18)&&((a26==18)&&!(a7==1)))||((a14==18)&&(!(a7==1)&&(a26==19))))||(((a7==1)&&(a26==17))&&(a14==19)))&&(input==3)))&&(a3==1))&&(a4==17))&&(a28==17))&&(a25==1))){ __VERIFIER_control_true(4344, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4351, " ");
 __VERIFIER_reached_control(4351, " ");
if((((a3==1)&&((a25==1)&&((a1==1)&&(((a14==18)&&((a4==18)&&((a26==18)&&(input==3))))&&(a28==17)))))&&!(a7==1))){ __VERIFIER_control_true(4351, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4357, " ");
 __VERIFIER_reached_control(4357, " ");
if((((a14==19)&&((a4==17)&&((((!(a3==1)&&((input==3)&&!(a7==1)))&&(a1==1))&&(a26==19))&&(a25==1))))&&(a28==15))){ __VERIFIER_control_true(4357, " ");

	    	a26 = 18;
	    	a7 = 1;
	    	a14 = 18;
	    	return 26;
	    } else { __VERIFIER_control_false(4362, " ");
 __VERIFIER_reached_control(4362, " ");
if(((a4==17)&&(((a7==1)&&((((a3==1)&&((a25==1)&&((input==4)&&(a14==20))))&&(a28==15))&&(a26==18)))&&(a1==1)))){ __VERIFIER_control_true(4362, " ");

	    	a28 = 16;
	    	a7 = 0;
	    	return 24;
	    } else { __VERIFIER_control_false(4366, " ");
 __VERIFIER_reached_control(4366, " ");
if(((a4==18)&&((a3==1)&&(((((input==2)&&((((a26==19)&&!(a7==1))&&(a14==18))||((a14==19)&&((a26==17)&&(a7==1)))))&&(a28==17))&&(a25==1))&&(a1==1))))){ __VERIFIER_control_true(4366, " ");

	    	a7 = 1;
	    	a28 = 16;
	    	a14 = 20;
	    	a26 = 19;
	    	return -1;
	    } else { __VERIFIER_control_false(4372, " ");
 __VERIFIER_reached_control(4372, " ");
if(((a25==1)&&((a1==1)&&((((a26==18)&&((((a14==20)&&(input==6))&&(a3==1))&&(a4==17)))&&(a28==17))&&(a7==1))))){ __VERIFIER_control_true(4372, " ");

	    	a4 = 16;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4378, " ");
 __VERIFIER_reached_control(4378, " ");
if(((((a26==19)&&(((((a1==1)&&((input==4)&&(a28==15)))&&!(a7==1))&&(a4==16))&&(a25==1)))&&!(a3==1))&&(a14==19))){ __VERIFIER_control_true(4378, " ");

	    	a26 = 17;
	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4384, " ");
 __VERIFIER_reached_control(4384, " ");
if(((((input==2)&&((((!(a7==1)&&((a28==17)&&((a26==19)&&((a3==1)&&(a4==18)))))&&(a14==20))||((a14==18)&&((a7==1)&&((a28==15)&&((!(a3==1)&&(a4==16))&&(a26==17))))))||(((a7==1)&&((a28==15)&&((a26==18)&&((a4==16)&&!(a3==1)))))&&(a14==18))))&&(a1==1))&&(a25==1))){ __VERIFIER_control_true(4384, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a3 = 1;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4392, " ");
 __VERIFIER_reached_control(4392, " ");
if(((a4==18)&&(((a1==1)&&((!(a7==1)&&((a14==19)&&((a25==1)&&((input==2)&&((a26==17)||(a26==18))))))&&(a28==15)))&&(a3==1)))){ __VERIFIER_control_true(4392, " ");

	    	a26 = 18;
	    	a14 = 20;
	    	a28 = 17;
	    	return 24;
	    } else { __VERIFIER_control_false(4397, " ");
 __VERIFIER_reached_control(4397, " ");
if(((((a25==1)&&((a4==16)&&(((a14==20)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))&&(input==1)))&&!(a3==1))))&&(a28==17))&&(a1==1))){ __VERIFIER_control_true(4397, " ");

	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4404, " ");
 __VERIFIER_reached_control(4404, " ");
if((((a4==18)&&((((a14==18)&&(((((a26==18)||(a26==19))&&(input==6))&&(a28==15))&&(a1==1)))&&(a25==1))&&(a7==1)))&&(a3==1))){ __VERIFIER_control_true(4404, " ");

	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4408, " ");
 __VERIFIER_reached_control(4408, " ");
if(((a3==1)&&((a25==1)&&((a28==17)&&((((input==4)&&((((a14==19)&&((a26==18)&&!(a7==1)))||((a14==19)&&(!(a7==1)&&(a26==19))))||(((a7==1)&&(a26==17))&&(a14==20))))&&(a1==1))&&(a4==17)))))){ __VERIFIER_control_true(4408, " ");

	    	a4 = 18;
	    	a28 = 16;
	    	a26 = 19;
	    	a7 = 0;
	    	a14 = 19;
	    	return 23;
	    } else { __VERIFIER_control_false(4415, " ");
 __VERIFIER_reached_control(4415, " ");
if(((((((a26==19)&&((a14==19)&&((a4==17)&&((input==6)&&(a25==1)))))&&!(a7==1))&&(a1==1))&&(a28==16))&&!(a3==1))){ __VERIFIER_control_true(4415, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4423, " ");
 __VERIFIER_reached_control(4423, " ");
if(((a26==17)&&((a1==1)&&((((((!(a3==1)&&(input==3))&&(a14==18))&&(a28==17))&&!(a7==1))&&(a25==1))&&(a4==16))))){ __VERIFIER_control_true(4423, " ");

	    	a7 = 1;
	    	a3 = 1;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4428, " ");
 __VERIFIER_reached_control(4428, " ");
if(((a4==16)&&(((a26==17)&&((a14==19)&&(((a28==17)&&((!(a7==1)&&(input==4))&&(a1==1)))&&!(a3==1))))&&(a25==1)))){ __VERIFIER_control_true(4428, " ");

	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4434, " ");
 __VERIFIER_reached_control(4434, " ");
if(((a4==17)&&(((((((a1==1)&&((a3==1)&&(input==5)))&&(a14==19))&&(a7==1))&&(a26==18))&&(a25==1))&&(a28==15)))){ __VERIFIER_control_true(4434, " ");

	    	a14 = 20;
	    	a26 = 19;
	    	return 22;
	    } else { __VERIFIER_control_false(4438, " ");
 __VERIFIER_reached_control(4438, " ");
if((!(a3==1)&&((a4==18)&&((((a14==18)&&((a28==16)&&((input==1)&&((((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))||(!(a7==1)&&(a26==18))))))&&(a25==1))&&(a1==1))))){ __VERIFIER_control_true(4438, " ");

	    	a14 = 19;
	    	a26 = 18;
	    	a7 = 1;
	    	return 22;
	    } else { __VERIFIER_control_false(4443, " ");
 __VERIFIER_reached_control(4443, " ");
if((((a7==1)&&((a3==1)&&((a14==20)&&((a25==1)&&((a4==17)&&(((input==6)&&(a26==18))&&(a28==15)))))))&&(a1==1))){ __VERIFIER_control_true(4443, " ");

	    	a26 = 17;
	    	a7 = 0;
	    	a28 = 16;
	    	return 24;
	    } else { __VERIFIER_control_false(4448, " ");
 __VERIFIER_reached_control(4448, " ");
if(((a25==1)&&(((a1==1)&&((a28==15)&&((a26==17)&&((a4==18)&&(((a14==20)&&(input==6))&&(a3==1))))))&&!(a7==1)))){ __VERIFIER_control_true(4448, " ");

	    	a4 = 16;
	    	a7 = 1;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4453, " ");
 __VERIFIER_reached_control(4453, " ");
if((((a4==18)&&((a3==1)&&((a28==15)&&((((a25==1)&&((a1==1)&&(input==5)))&&(a7==1))&&(a26==17)))))&&(a14==19))){ __VERIFIER_control_true(4453, " ");

	    	a28 = 17;
	    	a7 = 0;
	    	a26 = 18;
	    	return 22;
	    } else { __VERIFIER_control_false(4458, " ");
 __VERIFIER_reached_control(4458, " ");
if((((a26==19)&&((a1==1)&&((a14==18)&&(((((input==5)&&(a25==1))&&!(a3==1))&&(a4==16))&&(a7==1)))))&&(a28==17))){ __VERIFIER_control_true(4458, " ");

	    	a3 = 1;
	    	a26 = 17;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4463, " ");
 __VERIFIER_reached_control(4463, " ");
if((((a1==1)&&((a4==17)&&((a28==17)&&((a14==20)&&((!(a3==1)&&((((a26==17)||(a26==18))||(a26==19))&&(input==4)))&&(a7==1))))))&&(a25==1))){ __VERIFIER_control_true(4463, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4470, " ");
 __VERIFIER_reached_control(4470, " ");
if((!(a7==1)&&((!(a3==1)&&((((a28==17)&&((a14==19)&&((a26==18)&&(input==3))))&&(a25==1))&&(a1==1)))&&(a4==16)))){ __VERIFIER_control_true(4470, " ");

	    	a3 = 1;
	    	a7 = 1;
	    	a14 = 18;
	    	a28 = 15;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4477, " ");
 __VERIFIER_reached_control(4477, " ");
if((((a4==18)&&((a14==20)&&((a26==18)&&(((a1==1)&&((a25==1)&&((a3==1)&&(input==4))))&&!(a7==1)))))&&(a28==17))){ __VERIFIER_control_true(4477, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4484, " ");
 __VERIFIER_reached_control(4484, " ");
if((!(a3==1)&&((a4==18)&&(!(a7==1)&&((a25==1)&&((a28==16)&&(((a1==1)&&((input==2)&&((a26==18)||(a26==19))))&&(a14==20)))))))){ __VERIFIER_control_true(4484, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a4 = 17;
	    	a26 = 18;
	    	return 23;
	    } else { __VERIFIER_control_false(4490, " ");
 __VERIFIER_reached_control(4490, " ");
if(((a4==18)&&((a26==17)&&(((a14==19)&&(((a25==1)&&(((a7==1)&&(input==3))&&(a3==1)))&&(a28==15)))&&(a1==1))))){ __VERIFIER_control_true(4490, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4494, " ");
 __VERIFIER_reached_control(4494, " ");
if(((a25==1)&&(((a4==18)&&((((a3==1)&&((((a26==17)&&!(a7==1))||(((a26==18)&&(a7==1))||((a26==19)&&(a7==1))))&&(input==3)))&&(a28==16))&&(a1==1)))&&(a14==19)))){ __VERIFIER_control_true(4494, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4501, " ");
 __VERIFIER_reached_control(4501, " ");
if((!(a3==1)&&(!(a7==1)&&((a25==1)&&((a1==1)&&((a28==17)&&((a14==18)&&(((input==2)&&(a26==17))&&(a4==16))))))))){ __VERIFIER_control_true(4501, " ");

	    	a3 = 1;
	    	a28 = 15;
	    	a7 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4506, " ");
 __VERIFIER_reached_control(4506, " ");
if((((a14==18)&&((((a1==1)&&((a4==17)&&((((a26==19)&&(a7==1))||((a26==17)&&!(a7==1)))&&(input==1))))&&(a28==17))&&(a25==1)))&&(a3==1))){ __VERIFIER_control_true(4506, " ");

	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4512, " ");
 __VERIFIER_reached_control(4512, " ");
if((((a1==1)&&((((((((!(a7==1)&&(a26==19))&&(a14==18))||(((a7==1)&&(a26==17))&&(a14==19)))||((a14==19)&&((a26==18)&&(a7==1))))&&(input==4))&&(a28==17))&&(a25==1))&&(a4==18)))&&!(a3==1))){ __VERIFIER_control_true(4512, " ");

	    	a26 = 18;
	    	a14 = 19;
	    	a7 = 1;
	    	return 24;
	    } else { __VERIFIER_control_false(4517, " ");
 __VERIFIER_reached_control(4517, " ");
if(((a1==1)&&(!(a3==1)&&((a4==16)&&(((a14==19)&&(((a28==17)&&(((a26==18)||(a26==19))&&(input==3)))&&(a7==1)))&&(a25==1)))))){ __VERIFIER_control_true(4517, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4523, " ");
 __VERIFIER_reached_control(4523, " ");
if(((a25==1)&&((a1==1)&&((((a28==17)&&((input==5)&&((((!(a7==1)&&(a26==18))&&(a14==18))||((a14==18)&&((a26==19)&&!(a7==1))))||(((a7==1)&&(a26==17))&&(a14==19)))))&&(a3==1))&&(a4==17))))){ __VERIFIER_control_true(4523, " ");

	    	a14 = 18;
	    	a28 = 15;
	    	a7 = 1;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4530, " ");
 __VERIFIER_reached_control(4530, " ");
if(((a25==1)&&((a26==18)&&(((a4==16)&&(((((input==2)&&(a28==16))&&(a1==1))&&(a7==1))&&!(a3==1)))&&(a14==18))))){ __VERIFIER_control_true(4530, " ");

	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4535, " ");
 __VERIFIER_reached_control(4535, " ");
if(((!(a3==1)&&((((a7==1)&&((((a14==18)&&(input==6))&&(a1==1))&&(a4==16)))&&(a26==19))&&(a28==17)))&&(a25==1))){ __VERIFIER_control_true(4535, " ");

	    	a28 = 15;
	    	a26 = 17;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4540, " ");
 __VERIFIER_reached_control(4540, " ");
if(((a25==1)&&(((a4==18)&&((a28==15)&&((a1==1)&&(((a26==18)&&((a3==1)&&(input==6)))&&(a7==1)))))&&(a14==19)))){ __VERIFIER_control_true(4540, " ");

	    	a26 = 17;
	    	a4 = 16;
	    	a14 = 18;
	    	return -1;
	    } else { __VERIFIER_control_false(4545, " ");
 __VERIFIER_reached_control(4545, " ");
if(((a14==18)&&((a25==1)&&((a28==16)&&(((((input==3)&&(((a26==18)&&!(a7==1))||(((a7==1)&&(a26==19))||(!(a7==1)&&(a26==17)))))&&(a1==1))&&(a4==18))&&!(a3==1)))))){ __VERIFIER_control_true(4545, " ");

	    	a28 = 15;
	    	a3 = 1;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4552, " ");
 __VERIFIER_reached_control(4552, " ");
if((((a3==1)&&((((((((a26==19)&&(a4==17))&&(a28==17))&&!(a7==1))&&(a14==20))||((a14==18)&&((((a26==17)&&(a4==18))&&(a28==15))&&(a7==1))))&&(input==6))&&(a1==1)))&&(a25==1))){ __VERIFIER_control_true(4552, " ");

	    	a28 = 15;
	    	a14 = 18;
	    	a26 = 17;
	    	a7 = 1;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4559, " ");
 __VERIFIER_reached_control(4559, " ");
if(((a14==20)&&((a1==1)&&((((a25==1)&&(((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==5))&&(a28==17)))&&(a4==16))&&!(a3==1))))){ __VERIFIER_control_true(4559, " ");

	    	a7 = 1;
	    	a14 = 18;
	    	a26 = 17;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4566, " ");
 __VERIFIER_reached_control(4566, " ");
if(((!(a3==1)&&((a7==1)&&(((((((a26==18)||(a26==19))&&(input==5))&&(a4==17))&&(a14==18))&&(a25==1))&&(a1==1))))&&(a28==15))){ __VERIFIER_control_true(4566, " ");

	    	a28 = 16;
	    	a14 = 20;
	    	a4 = 18;
	    	a3 = 1;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4573, " ");
 __VERIFIER_reached_control(4573, " ");
if((((a4==16)&&((!(a3==1)&&((a25==1)&&((((a14==20)&&((a26==18)&&(a7==1)))||((((a26==19)&&!(a7==1))&&(a14==19))||((a14==20)&&((a7==1)&&(a26==17)))))&&(input==1))))&&(a1==1)))&&(a28==16))){ __VERIFIER_control_true(4573, " ");

	    	a26 = 18;
	    	a14 = 18;
	    	a4 = 17;
	    	a7 = 0;
	    	a28 = 15;
	    	return 21;
	    } else { __VERIFIER_control_false(4580, " ");
 __VERIFIER_reached_control(4580, " ");
if(((a1==1)&&((((((a28==15)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==4)))&&(a14==19))&&!(a3==1))&&(a25==1))&&(a4==18)))){ __VERIFIER_control_true(4580, " ");

	    	a7 = 1;
	    	a26 = 18;
	    	a14 = 20;
	    	return 24;
	    } else { __VERIFIER_control_false(4585, " ");
 __VERIFIER_reached_control(4585, " ");
if((((!(a3==1)&&((((((((a4==16)&&(a26==18))&&(a28==17))&&!(a7==1))&&(a14==20))||((a14==20)&&((((a26==19)&&(a4==16))&&(a28==17))&&!(a7==1))))||((a14==18)&&((((a26==17)&&(a4==17))&&(a28==15))&&(a7==1))))&&(input==6)))&&(a1==1))&&(a25==1))){ __VERIFIER_control_true(4585, " ");

	    	a26 = 17;
	    	a14 = 18;
	    	a4 = 16;
	    	a7 = 1;
	    	a28 = 15;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4593, " ");
 __VERIFIER_reached_control(4593, " ");
if((((a26==18)&&((((a14==19)&&((a25==1)&&((a1==1)&&((a4==17)&&(input==5)))))&&(a28==15))&&!(a3==1)))&&!(a7==1))){ __VERIFIER_control_true(4593, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4600, " ");
 __VERIFIER_reached_control(4600, " ");
if(((a1==1)&&((a25==1)&&(((a28==17)&&(((a14==18)&&((a7==1)&&((input==2)&&(a26==18))))&&(a4==16)))&&!(a3==1))))){ __VERIFIER_control_true(4600, " ");

	    	return 22;
	    } else { __VERIFIER_control_false(4602, " ");
 __VERIFIER_reached_control(4602, " ");
if((((a25==1)&&((a3==1)&&((a4==18)&&((a14==20)&&((((input==5)&&(a1==1))&&(a26==17))&&(a7==1))))))&&(a28==16))){ __VERIFIER_control_true(4602, " ");

	    	a4 = 16;
	    	a14 = 18;
	    	a28 = 15;
	    	return -1;
	    } else { __VERIFIER_control_false(4607, " ");
 __VERIFIER_reached_control(4607, " ");
if((((a3==1)&&((a25==1)&&((a7==1)&&((a14==18)&&((a28==17)&&((a4==17)&&((input==1)&&((a26==17)||(a26==18)))))))))&&(a1==1))){ __VERIFIER_control_true(4607, " ");

	    	a28 = 15;
	    	a4 = 16;
	    	a26 = 17;
	    	return -1;
	    } else { __VERIFIER_control_false(4612, " ");
 __VERIFIER_reached_control(4612, " ");
if(((a1==1)&&((a25==1)&&(!(a3==1)&&((((a14==18)&&((((a4==17)&&(a26==17))&&(a28==15))&&(a7==1)))||(((!(a7==1)&&(((a26==18)&&(a4==16))&&(a28==17)))&&(a14==20))||((a14==20)&&(!(a7==1)&&(((a4==16)&&(a26==19))&&(a28==17))))))&&(input==3)))))){ __VERIFIER_control_true(4612, " ");

	    	a3 = 1;
	    	a14 = 18;
	    	a7 = 1;
	    	a28 = 15;
	    	a26 = 17;
	    	a4 = 16;
	    	return -1;
	    } else { __VERIFIER_control_false(4620, " ");
 __VERIFIER_reached_control(4620, " ");
if(((a28==17)&&((a14==20)&&((a4==16)&&((((a25==1)&&((((a7==1)&&(a26==19))||((a26==17)&&!(a7==1)))&&(input==3)))&&(a1==1))&&!(a3==1)))))){ __VERIFIER_control_true(4620, " ");

	    	a26 = 17;
	    	a7 = 1;
	    	a28 = 15;
	    	a14 = 18;
	    	a3 = 1;
	    	return -1;
	    } else { __VERIFIER_control_false(4627, " ");
 __VERIFIER_reached_control(4627, " ");
if((((a4==18)&&((a14==19)&&((a28==17)&&((a25==1)&&(((input==4)&&((((a26==18)&&(a7==1))||((a7==1)&&(a26==19)))||(!(a7==1)&&(a26==17))))&&(a3==1))))))&&(a1==1))){ __VERIFIER_control_true(4627, " ");

	    	a7 = 1;
	    	a14 = 20;
	    	a28 = 16;
	    	a26 = 18;
	    	return -1;
	    }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}} 
	    { __VERIFIER_reached_control(4634, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4634, " ");

	    	error_12: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4637, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==16))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4637, " ");

	    	error_19: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4640, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==16))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4640, " ");

	    	error_31: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4643, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==17))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4643, " ");

	    	error_39: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4646, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==17))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4646, " ");

	    	error_52: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4649, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4649, " ");

	    	error_6: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4652, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4652, " ");

	    	error_58: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4655, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==17))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4655, " ");

	    	error_40: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4658, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4658, " ");

	    	error_4: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4661, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==17))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4661, " ");

	    	error_38: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4664, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==17))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4664, " ");

	    	error_45: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4667, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4667, " ");

	    	error_11: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4670, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==16))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4670, " ");

	    	error_26: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4673, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4673, " ");

	    	globalError: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4676, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4676, " ");

	    	error_9: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4679, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==16))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4679, " ");

	    	error_17: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4682, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==16))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4682, " ");

	    	error_32: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4685, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==17))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4685, " ");

	    	error_35: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4688, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4688, " ");

	    	error_55: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4691, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==17))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4691, " ");

	    	error_36: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4694, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4694, " ");

	    	error_14: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4697, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==16))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4697, " ");

	    	error_18: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4700, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4700, " ");

	    	error_13: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4703, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4703, " ");

	    	error_15: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4706, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==16))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4706, " ");

	    	error_27: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4709, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==16))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4709, " ");

	    	error_30: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4712, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==17))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4712, " ");

	    	error_44: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4715, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4715, " ");

	    	error_5: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4718, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==16))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4718, " ");

	    	error_29: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4721, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4721, " ");

	    	error_3: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4724, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==17))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4724, " ");

	    	error_47: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4727, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==17))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4727, " ");

	    	error_51: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4730, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==16))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4730, " ");

	    	error_34: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4733, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4733, " ");

	    	error_7: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4736, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4736, " ");

	    	error_59: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4739, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==17))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4739, " ");

	    	error_49: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4742, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==17))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4742, " ");

	    	error_46: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4745, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==16))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4745, " ");

	    	error_20: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4748, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4748, " ");

	    	error_57: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4751, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4751, " ");

	    	error_53: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4754, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==16))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4754, " ");

	    	error_21: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4757, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==16))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4757, " ");

	    	error_25: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4760, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==17))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4760, " ");

	    	error_43: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4763, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4763, " ");

	    	error_16: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4766, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4766, " ");

	    	error_56: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4769, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4769, " ");

	    	error_0: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4772, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4772, " ");

	    	error_2: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4775, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==16))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4775, " ");

	    	error_24: {reach_error();abort();}
	    }} 
	    { __VERIFIER_reached_control(4778, " ");
if(((((((((a3==1)&&(a4==17))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==15))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4778, " ");

	    	error_54: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4781, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==16))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4781, " ");

	    	error_23: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4784, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==17))&&(a7==1))&&(a14==20))){ __VERIFIER_control_true(4784, " ");

	    	error_48: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4787, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==15))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4787, " ");

	    	error_8: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4790, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==16))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4790, " ");

	    	error_28: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4793, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4793, " ");

	    	error_1: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4796, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==15))&&!(a7==1))&&(a14==19))){ __VERIFIER_control_true(4796, " ");

	    	error_10: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4799, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==17))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4799, " ");

	    	error_41: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4802, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==16))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4802, " ");

	    	error_33: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4805, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==16))&&!(a7==1))&&(a14==18))){ __VERIFIER_control_true(4805, " ");

	    	error_22: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4808, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==18))&&(a28==17))&&(a7==1))&&(a14==19))){ __VERIFIER_control_true(4808, " ");

	    	error_42: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4811, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==19))&&(a28==17))&&(a7==1))&&(a14==18))){ __VERIFIER_control_true(4811, " ");

	    	error_37: exit(0);
	    }} 
	    { __VERIFIER_reached_control(4814, " ");
if(((((((((a3==1)&&(a4==16))&&(a25==1))&&(a1==1))&&(a26==17))&&(a28==17))&&!(a7==1))&&(a14==20))){ __VERIFIER_control_true(4814, " ");

	    	error_50: exit(0);
	    }} 
	    return -2; 
	}

int main()
{
    // default output
    int output = -1;

    // main i/o-loop
    __VERIFIER_reached_control(4827, " ");
 while(1)
    {printf("CBMC Instrumentation @ line4827");static myBool pStored = myFalse;myBool flag=__VERIFIER_nondet_myBool();static int oa;static int oa1;static int oa14;static int oa25;static int oa26;static int oa28;static int oa3;static int oa4;static int oa7;static int ob;static int oc;static int od;static int oe;static int of;static int ooutput;static int ou;static int ov;static int ow;static int ox;static int oy;static int oz;if(pStored){__CPROVER_assert(!(oa==a && oa1==a1 && oa14==a14 && oa25==a25 && oa26==a26 && oa28==a28 && oa3==a3 && oa4==a4 && oa7==a7 && ob==b && oc==c && od==d && oe==e && of==f && ooutput==output && ou==u && ov==v && ow==w && ox==x && oy==y && oz==z),"recurrent state found");} if(flag){oa=a;oa1=a1;oa14=a14;oa25=a25;oa26=a26;oa28=a28;oa3=a3;oa4=a4;oa7=a7;ob=b;oc=c;od=d;oe=e;of=f;ooutput=output;ou=u;ov=v;ow=w;ox=x;oy=y;oz=z;pStored=myTrue;}  __VERIFIER_loop_head(4827, " ");

        // read input
        int input;
        input = __VERIFIER_nondet_int();
        { __VERIFIER_reached_control(4831, " ");
if ((input != 1) && (input != 2) && (input != 3) && (input != 4) && (input != 5) && (input != 6)) { __VERIFIER_control_true(4831, " ");
return -2;}}

        // operate eca engine
        output = calculate_output(input);

    }
}
