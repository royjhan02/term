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
	for (int loopi, loopj;loopi<10;loopi++){printf("DirNT State @ line20: <");printf("arrayindex=%d,",arrayindex);printf("loopi=%d,",loopi);printf("loopj=%d,",loopj);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
		x=loopi;
		}

	    while (x >= 0) {printf("DirNT State @ line24: Array Found\n");
	    	x = x - y;
		array[5]=1;
    	}
	}

	for (int loopi, loopj;loopi<10;loopi++){printf("DirNT State @ line30: Array Found\n");
		x=loopi;
		array[arrayindex]=1;
		}

	    while (x >= 0) {printf("DirNT State @ line35: <");printf("arrayindex=%d,",arrayindex);printf("x=%d,",x);printf("y=%d,",y);printf(">\n");
	    	x = x - y;
	}


	    while (x >= 0) {printf("DirNT State @ line40: Array Found\n");
	    	x = x - y;
		array[arrayindex]=array[3];
		x=array[arrayindex];
	}

	return 0;
}
