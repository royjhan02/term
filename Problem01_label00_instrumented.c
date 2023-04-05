#include <stdio.h>
// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2014-2020 The SV-Benchmarks Community
// SPDX-FileCopyrightText: 2012 The RERS Challenge <https://www.rers-challenge.org>
//
// SPDX-License-Identifier: Apache-2.0

int calculate_output(int);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Problem01_label00.c", 4, "reach_error"); }
extern int __VERIFIER_nondet_int(void);
extern void exit(int);

	// inputs
	int a= 1;
	int d= 4;
	int e= 5;
	int f= 6;
	int c= 3;
	int b= 2;

	// outputs
	int u = 21;
	int v = 22;
	int w = 23;
	int x = 24;
	int y = 25;
	int z = 26;

	int a17 = 1;
	int a7 = 0;
	int a20 = 1;
	int a8 = 15;
	int a12 = 8;
	int a16 = 5;
	int a21 = 1;

	int calculate_output(int input) {
	    if((((a8==15)&&(((((a21==1)&&(((a16==5)||(a16==6))&&(input==1)))&&(a20==1))&&(a17==1))&&!(a7==1)))&&(a12==8))){
	    	a16 = 5;printf("DirNT State @ line42: <");printf("a16=%d,",a16);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line43: <");printf("a16=%d,",a16);printf("a20=%d,",a20);printf(">\n");
	    	return 24;
	    } else if((((((((input==5)&&((((a16==6)&&(a17==1))||(!(a17==1)&&(a16==4)))||(!(a17==1)&&(a16==5))))&&(a20==1))&&(a12==8))&&(a7==1))&&!(a21==1))&&(a8==13))){
	    	a20 = 0;printf("DirNT State @ line46: <");printf("a16=%d,",a16);printf("a20=%d,",a20);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line47: <");printf("a16=%d,",a16);printf("a20=%d,",a20);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line48: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf(">\n");
	    	a8 = 15;printf("DirNT State @ line49: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line50: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line51: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 26;
	    } else if(((!(a7==1)&&((((a16==6)&&((a21==1)&&((a17==1)&&(input==3))))&&!(a20==1))&&(a8==15)))&&(a12==8))){
	    	a20 = 1;printf("DirNT State @ line54: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line55: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line56: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line57: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a17==1)&&((!(a7==1)&&(((a21==1)&&((((a16==5)||(a16==6))&&(input==6))&&(a20==1)))&&(a8==15)))&&(a12==8)))){
	    	a8 = 13;printf("DirNT State @ line60: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line61: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line62: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((input==3)&&((((a16==6)&&((!(a20==1)&&(!(a7==1)&&!(a17==1)))&&(a8==15)))&&(a21==1))||((((a8==13)&&((a20==1)&&((a17==1)&&(a7==1))))&&(a16==4))&&!(a21==1))))&&(a12==8))){
	    	a7 = 0;printf("DirNT State @ line65: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line66: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line67: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line68: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line69: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line70: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((a17==1)&&(((a21==1)&&((!(a7==1)&&((input==4)&&(a8==15)))&&!(a20==1)))&&(a12==8)))&&(a16==6))){
	    	a17 = 0;printf("DirNT State @ line73: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 26;
	    } else if((((a12==8)&&(((a21==1)&&((((input==5)&&!(a7==1))&&(a8==15))&&(a16==5)))&&!(a20==1)))&&!(a17==1))){
	    	a7 = 1;printf("DirNT State @ line76: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line77: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line78: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line79: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line80: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a12==8)&&((input==1)&&(((a21==1)&&(((a8==15)&&((!(a17==1)&&!(a7==1))&&!(a20==1)))&&(a16==6)))||(!(a21==1)&&((a16==4)&&((a8==13)&&(((a17==1)&&(a7==1))&&(a20==1))))))))){
	    	a7 = 1;printf("DirNT State @ line83: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line84: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 0;printf("DirNT State @ line85: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line86: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line87: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 5;printf("DirNT State @ line88: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 26;
	    } else if(((((!(a17==1)&&(!(a7==1)&&((a21==1)&&((a8==15)&&(input==4)))))&&!(a20==1))&&(a12==8))&&(a16==4))){
	    	a17 = 1;printf("DirNT State @ line91: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 5;printf("DirNT State @ line92: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 21;
	    } else if(((((((a16==6)&&((!(a20==1)&&(!(a17==1)&&!(a7==1)))&&(a8==15)))&&(a21==1))||(((a16==4)&&(((a20==1)&&((a17==1)&&(a7==1)))&&(a8==13)))&&!(a21==1)))&&(input==2))&&(a12==8))){
	    	a7 = 0;printf("DirNT State @ line95: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line96: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 14;printf("DirNT State @ line97: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line98: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line99: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line100: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a8==13)&&(!(a21==1)&&((((input==3)&&((((a20==1)&&!(a17==1))&&(a16==6))||((!(a20==1)&&(a17==1))&&(a16==4))))&&(a12==8))&&(a7==1))))){
	    	a16 = 4;printf("DirNT State @ line103: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line104: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line105: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 26;
	    } else if(((((a21==1)&&((a12==8)&&((input==1)&&(((!(a20==1)&&(a17==1))&&(a16==4))||(((a16==5)&&(!(a17==1)&&(a20==1)))||((a16==6)&&(!(a17==1)&&(a20==1))))))))&&!(a7==1))&&(a8==15))){
	    	a16 = 6;printf("DirNT State @ line108: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line109: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line110: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 24;
	    } else if((((a16==5)&&(((a7==1)&&((!(a21==1)&&((a12==8)&&(input==3)))&&(a8==13)))&&(a17==1)))&&(a20==1))){
	    	a20 = 0;printf("DirNT State @ line113: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 15;printf("DirNT State @ line114: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line115: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line116: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a17==1)&&(((a8==15)&&(((a12==8)&&((!(a7==1)&&(input==5))&&(a21==1)))&&!(a20==1)))&&(a16==5)))){
	    	a20 = 1;printf("DirNT State @ line119: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line120: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line121: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line122: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((!(a7==1)&&(((((a21==1)&&(((a8==15)&&(input==5))&&!(a17==1)))&&(a12==8))&&(a20==1))&&(a16==4)))){
	    	a8 = 13;printf("DirNT State @ line125: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line126: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line127: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((!(a21==1)&&(((a12==8)&&((((a16==6)&&((a20==1)&&!(a17==1)))||((!(a20==1)&&(a17==1))&&(a16==4)))&&(input==1)))&&(a8==13)))&&(a7==1))){
	    	a16 = 6;printf("DirNT State @ line130: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line131: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line132: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a17==1)&&(!(a7==1)&&(((a21==1)&&(((a12==8)&&((input==5)&&((a16==5)||(a16==6))))&&(a20==1)))&&(a8==15))))){
	    	a7 = 1;printf("DirNT State @ line135: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line136: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line137: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((a12==8)&&(!(a21==1)&&((a7==1)&&((a8==13)&&((input==6)&&((((a16==6)&&(a17==1))||((a16==4)&&!(a17==1)))||((a16==5)&&!(a17==1))))))))&&(a20==1))){
	    	a8 = 15;printf("DirNT State @ line140: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line141: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line142: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line143: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line144: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((a16==5)&&((((a8==15)&&((!(a7==1)&&(input==2))&&(a21==1)))&&(a12==8))&&!(a20==1)))&&!(a17==1))){
	    	a16 = 4;printf("DirNT State @ line147: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line148: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 24;
	    } else if((!(a20==1)&&((a21==1)&&((a16==4)&&((a8==15)&&(((a12==8)&&((input==2)&&!(a7==1)))&&!(a17==1))))))){
	    	a17 = 1;printf("DirNT State @ line151: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 5;printf("DirNT State @ line152: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 21;
	    } else if((((a21==1)&&(!(a7==1)&&((!(a20==1)&&(!(a17==1)&&((a12==8)&&(input==6))))&&(a16==4))))&&(a8==15))){
	    	a20 = 1;printf("DirNT State @ line155: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line156: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 22;
	    } else if(((a17==1)&&((((((a12==8)&&((input==4)&&(a8==13)))&&(a20==1))&&!(a21==1))&&(a16==5))&&(a7==1)))){
	    	a16 = 4;printf("DirNT State @ line159: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line160: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 25;
	    } else if(((((a8==13)&&((a12==8)&&((((((a16==6)&&(a17==1))||(!(a17==1)&&(a16==4)))||(!(a17==1)&&(a16==5)))&&(input==1))&&!(a21==1))))&&(a20==1))&&(a7==1))){
	    	a8 = 15;printf("DirNT State @ line163: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line164: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line165: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line166: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line167: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line168: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a8==13)&&(!(a21==1)&&((((((!(a17==1)&&(a20==1))&&(a16==6))||((a16==4)&&((a17==1)&&!(a20==1))))&&(input==5))&&(a7==1))&&(a12==8))))){
	    	a17 = 1;printf("DirNT State @ line171: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line172: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line173: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 25;
	    } else if(((!(a21==1)&&((((((a16==6)&&((a20==1)&&!(a17==1)))||(((a17==1)&&!(a20==1))&&(a16==4)))&&(input==4))&&(a7==1))&&(a12==8)))&&(a8==13))){
	    	a8 = 15;printf("DirNT State @ line176: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line177: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line178: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line179: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line180: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line181: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 26;
	    } else if((((a21==1)&&(!(a7==1)&&((((((a16==5)&&((a20==1)&&!(a17==1)))||((!(a17==1)&&(a20==1))&&(a16==6)))||((a16==4)&&((a17==1)&&!(a20==1))))&&(input==4))&&(a12==8))))&&(a8==15))){
	    	a16 = 4;printf("DirNT State @ line184: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line185: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line186: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 24;
	    } else if(((((((a16==6)&&((!(a20==1)&&(!(a17==1)&&!(a7==1)))&&(a8==15)))&&(a21==1))||(((a16==4)&&((((a7==1)&&(a17==1))&&(a20==1))&&(a8==13)))&&!(a21==1)))&&(input==4))&&(a12==8))){
	    	a17 = 0;printf("DirNT State @ line189: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 5;printf("DirNT State @ line190: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line191: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 14;printf("DirNT State @ line192: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line193: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line194: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((!(a17==1)&&(((a12==8)&&(!(a20==1)&&(((a8==15)&&((a21==1)&&(input==4)))&&!(a7==1))))&&(a16==5)))){
	    	a17 = 1;printf("DirNT State @ line197: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 24;
	    } else if((((!(a7==1)&&(((input==2)&&((((a16==5)&&((a20==1)&&!(a17==1)))||((a16==6)&&((a20==1)&&!(a17==1))))||((a16==4)&&(!(a20==1)&&(a17==1)))))&&(a8==15)))&&(a12==8))&&(a21==1))){
	    	a17 = 0;printf("DirNT State @ line200: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 5;printf("DirNT State @ line201: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line202: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 25;
	    } else if((!(a20==1)&&(((((((input==6)&&(a16==5))&&(a21==1))&&!(a17==1))&&(a12==8))&&!(a7==1))&&(a8==15)))){
	    	a17 = 1;printf("DirNT State @ line205: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 24;
	    } else if(((a12==8)&&(((((((a21==1)&&(input==5))&&(a8==15))&&(a17==1))&&!(a7==1))&&!(a20==1))&&(a16==6)))){
	    	a20 = 1;printf("DirNT State @ line208: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line209: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line210: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line211: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((((a8==15)&&(!(a7==1)&&((((!(a20==1)&&(a17==1))&&(a16==4))||(((!(a17==1)&&(a20==1))&&(a16==5))||((a16==6)&&((a20==1)&&!(a17==1)))))&&(input==6))))&&(a12==8))&&(a21==1))){
	    	a20 = 0;printf("DirNT State @ line214: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line215: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line216: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 22;
	    } else if(((a8==15)&&((a16==4)&&(!(a20==1)&&((((a21==1)&&(!(a17==1)&&(input==5)))&&!(a7==1))&&(a12==8)))))){
	    	a7 = 1;printf("DirNT State @ line219: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line220: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line221: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line222: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a17==1)&&((a12==8)&&((a8==15)&&(((!(a7==1)&&(((a16==5)||(a16==6))&&(input==2)))&&(a21==1))&&(a20==1)))))){
	    	a17 = 0;printf("DirNT State @ line225: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line226: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 22;
	    } else if((!(a7==1)&&(((a8==15)&&((!(a17==1)&&((a12==8)&&((input==3)&&(a21==1))))&&(a16==4)))&&(a20==1)))){
	    	a17 = 1;printf("DirNT State @ line229: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line230: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line231: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a16==5)&&((!(a21==1)&&(((a8==13)&&(((input==2)&&(a20==1))&&(a12==8)))&&(a7==1)))&&(a17==1)))){
	    	a21 = 1;printf("DirNT State @ line234: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 14;printf("DirNT State @ line235: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line236: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line237: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line238: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line239: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a20==1)&&(((a12==8)&&((a7==1)&&((a8==13)&&(((!(a17==1)&&(a16==5))||(((a17==1)&&(a16==6))||(!(a17==1)&&(a16==4))))&&(input==3)))))&&!(a21==1)))){
	    	a8 = 14;printf("DirNT State @ line242: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line243: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line244: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line245: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line246: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a12==8)&&((a7==1)&&(!(a21==1)&&((a8==13)&&((input==6)&&(((a16==6)&&((a20==1)&&!(a17==1)))||((a16==4)&&((a17==1)&&!(a20==1)))))))))){
	    	a20 = 0;printf("DirNT State @ line249: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line250: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line251: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 14;printf("DirNT State @ line252: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line253: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((!(a7==1)&&(!(a17==1)&&((((a16==4)&&((a8==15)&&(input==1)))&&(a12==8))&&(a21==1))))&&(a20==1))){
	    	a7 = 1;printf("DirNT State @ line256: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line257: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line258: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a17==1)&&(((a21==1)&&(!(a20==1)&&((a12==8)&&((a8==15)&&(!(a7==1)&&(input==1))))))&&(a16==6)))){
	    	a20 = 1;printf("DirNT State @ line261: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line262: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line263: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line264: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a20==1)&&((a12==8)&&((((a17==1)&&((((a16==5)||(a16==6))&&(input==4))&&(a8==15)))&&(a21==1))&&!(a7==1))))){
	    	a16 = 4;printf("DirNT State @ line267: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line268: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line269: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((((a8==13)&&((((!(a21==1)&&(input==6))&&(a20==1))&&(a12==8))&&(a17==1)))&&(a7==1))&&(a16==5))){
	    	a16 = 4;printf("DirNT State @ line272: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line273: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 25;
	    } else if(((a16==5)&&(((((a12==8)&&(!(a7==1)&&((input==2)&&!(a20==1))))&&(a21==1))&&(a17==1))&&(a8==15)))){
	    	a17 = 0;printf("DirNT State @ line276: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 24;
	    } else if((((a12==8)&&(((!(a17==1)&&((a21==1)&&((input==4)&&!(a7==1))))&&(a8==15))&&(a20==1)))&&(a16==4))){
	    	a20 = 0;printf("DirNT State @ line279: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line280: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line281: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 21;
	    } else if(((a7==1)&&((a8==13)&&((a12==8)&&(!(a21==1)&&((input==2)&&((((a20==1)&&!(a17==1))&&(a16==6))||(((a17==1)&&!(a20==1))&&(a16==4))))))))){
	    	a16 = 4;printf("DirNT State @ line284: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line285: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line286: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((((((!(a20==1)&&(!(a17==1)&&!(a7==1)))&&(a8==15))&&(a16==6))&&(a21==1))||((((a8==13)&&(((a17==1)&&(a7==1))&&(a20==1)))&&(a16==4))&&!(a21==1)))&&(input==6))&&(a12==8))){
	    	a20 = 1;printf("DirNT State @ line289: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line290: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line291: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line292: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line293: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line294: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((!(a7==1)&&(!(a17==1)&&(((((input==3)&&(a21==1))&&(a16==4))&&(a8==15))&&(a12==8))))&&!(a20==1))){
	    	a17 = 1;printf("DirNT State @ line297: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line298: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line299: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line300: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((((a12==8)&&(((((a17==1)&&!(a20==1))&&(a16==4))||((((a20==1)&&!(a17==1))&&(a16==5))||((!(a17==1)&&(a20==1))&&(a16==6))))&&(input==3)))&&(a8==15))&&(a21==1))&&!(a7==1))){
	    	a16 = 4;printf("DirNT State @ line303: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line304: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line305: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line306: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line307: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((!(a7==1)&&(((input==5)&&((((a16==5)&&(!(a17==1)&&(a20==1)))||((a16==6)&&((a20==1)&&!(a17==1))))||((a16==4)&&(!(a20==1)&&(a17==1)))))&&(a12==8)))&&(a21==1))&&(a8==15))){
	    	a16 = 4;printf("DirNT State @ line310: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line311: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line312: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line313: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line314: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((!(a7==1)&&(((a21==1)&&(((a17==1)&&((a12==8)&&(input==2)))&&!(a20==1)))&&(a16==6)))&&(a8==15))){
	    	a8 = 13;printf("DirNT State @ line317: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line318: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line319: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line320: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((!(a17==1)&&((a21==1)&&((!(a20==1)&&((a12==8)&&((input==3)&&!(a7==1))))&&(a8==15))))&&(a16==5))){
	    	a8 = 13;printf("DirNT State @ line323: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line324: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((a16==5)&&(!(a20==1)&&(((((input==6)&&(a21==1))&&(a17==1))&&!(a7==1))&&(a12==8))))&&(a8==15))){
	    	return 24;
	    } else if((!(a7==1)&&((a17==1)&&(((a16==6)&&(!(a20==1)&&(((input==6)&&(a12==8))&&(a21==1))))&&(a8==15))))){
	    	a7 = 1;printf("DirNT State @ line329: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line330: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line331: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line332: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((((a21==1)&&((a8==15)&&((a12==8)&&(!(a7==1)&&(!(a17==1)&&(input==2))))))&&(a16==4))&&(a20==1))){
	    	a17 = 1;printf("DirNT State @ line335: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line336: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line337: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a8==15)&&(((a16==4)&&((a12==8)&&((!(a20==1)&&(!(a7==1)&&(input==1)))&&!(a17==1))))&&(a21==1)))){
	    	a16 = 6;printf("DirNT State @ line340: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 1;printf("DirNT State @ line341: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 22;
	    } else if(((a21==1)&&(((a12==8)&&((((a17==1)&&((input==3)&&((a16==5)||(a16==6))))&&!(a7==1))&&(a20==1)))&&(a8==15)))){
	    	a17 = 0;printf("DirNT State @ line344: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line345: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 21;
	    } else if((!(a21==1)&&((a20==1)&&(((a12==8)&&((a8==13)&&((((a16==5)&&!(a17==1))||(((a17==1)&&(a16==6))||(!(a17==1)&&(a16==4))))&&(input==2))))&&(a7==1))))){
	    	a21 = 1;printf("DirNT State @ line348: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 15;printf("DirNT State @ line349: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line350: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line351: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line352: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line353: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a7==1)&&((a12==8)&&((((a20==1)&&(((!(a17==1)&&(a16==5))||(((a17==1)&&(a16==6))||((a16==4)&&!(a17==1))))&&(input==4)))&&(a8==13))&&!(a21==1))))){
	    	a8 = 15;printf("DirNT State @ line356: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line357: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line358: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line359: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line360: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line361: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return 26;
	    } else if(((a21==1)&&((((!(a7==1)&&((a8==15)&&(!(a20==1)&&(input==4))))&&(a17==1))&&(a16==5))&&(a12==8)))){
	    	return 24;
	    } else if((((!(a7==1)&&((!(a20==1)&&((a21==1)&&((input==3)&&(a17==1))))&&(a8==15)))&&(a12==8))&&(a16==5))){
	    	a20 = 1;printf("DirNT State @ line366: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line367: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line368: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 4;printf("DirNT State @ line369: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((((!(a17==1)&&(!(a20==1)&&((a8==15)&&((input==1)&&(a16==5)))))&&(a12==8))&&(a21==1))&&!(a7==1))){
	    	return -1;
	    } else if(((((a21==1)&&((a8==15)&&(((a16==5)&&((a12==8)&&(input==1)))&&(a17==1))))&&!(a7==1))&&!(a20==1))){
	    	return 21;
	    } else if(((!(a21==1)&&((a20==1)&&((((a8==13)&&((a7==1)&&(input==5)))&&(a17==1))&&(a12==8))))&&(a16==5))){
	    	a21 = 1;printf("DirNT State @ line376: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line377: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line378: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 14;printf("DirNT State @ line379: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a20 = 0;printf("DirNT State @ line380: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if((((!(a7==1)&&((a21==1)&&((((input==6)&&(a20==1))&&(a8==15))&&!(a17==1))))&&(a12==8))&&(a16==4))){
	    	a7 = 1;printf("DirNT State @ line383: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 13;printf("DirNT State @ line384: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 1;printf("DirNT State @ line385: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((((a20==1)&&(((!(a21==1)&&((a7==1)&&(input==1)))&&(a8==13))&&(a17==1)))&&(a12==8))&&(a16==5))){
	    	a21 = 1;printf("DirNT State @ line388: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 6;printf("DirNT State @ line389: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 0;printf("DirNT State @ line390: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } else if(((a12==8)&&((input==5)&&((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==15))&&(a16==6))&&(a21==1))||(!(a21==1)&&((a16==4)&&(((a20==1)&&((a7==1)&&(a17==1)))&&(a8==13)))))))){
	    	a20 = 0;printf("DirNT State @ line393: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a21 = 1;printf("DirNT State @ line394: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a8 = 14;printf("DirNT State @ line395: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a17 = 0;printf("DirNT State @ line396: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a16 = 5;printf("DirNT State @ line397: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	a7 = 1;printf("DirNT State @ line398: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf(">\n");
	    	return -1;
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_20: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_47: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_32: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_37: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_56: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_33: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_57: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_50: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_35: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_15: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_38: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_21: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_44: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_41: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_19: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_40: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_27: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_59: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_2: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_1: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_31: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_28: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_5: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_23: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_4: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	globalError: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_24: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_58: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_18: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_29: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_36: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_26: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_7: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_34: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_51: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_49: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_0: {reach_error();abort();}
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_11: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_10: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_55: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_46: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_8: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_53: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_42: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_17: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_45: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_9: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_25: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_12: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_48: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_54: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_13: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_6: exit(0);
	    } 
	    if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_30: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_52: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_22: exit(0);
	    } 
	    if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_43: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_3: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
	    	error_16: exit(0);
	    } 
	    if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
	    	error_14: exit(0);
	    } 
	    if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
	    	error_39: exit(0);
	    } 
	    return -2; 
	}

int main()
{
    // default output
    int output = -1;printf("DirNT State @ line590: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf("output=%d,",output);printf(">\n");

    // main i/o-loop
    while(1)
    {
        // read input
        int input;
        input = __VERIFIER_nondet_int();printf("DirNT State @ line597: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf("input=%d,",input);printf("output=%d,",output);printf(">\n");
        if ((input != 1) && (input != 2) && (input != 3) && (input != 4) && (input != 5) && (input != 6)) return -2;

        // operate eca engine
        output = calculate_output(input);printf("DirNT State @ line601: <");printf("a16=%d,",a16);printf("a17=%d,",a17);printf("a20=%d,",a20);printf("a21=%d,",a21);printf("a7=%d,",a7);printf("a8=%d,",a8);printf("input=%d,",input);printf("output=%d,",output);printf(">\n");

    }
}
