#include"chapter1.h"
#include"logic-operators.h"
#include"bitstrings.h"
#include<stdio.h>
#include<ctype.h>


int ch1_cp1(void){
    bool p = false;
    bool q = false;
    char p_val;
    char q_val;

    printf("p: ");
    scanf(" %c", &p_val);
    printf("q: ");
    scanf(" %c", &q_val);

    if(tolower(p_val) =='t'){
        p = true;
    }
    if(tolower(q_val) =='t'){
        q = true;
    }

    printf("p & q = ");
    conjunction(p, q) ? printf("T") : printf("F");
    printf("\n");

    printf("p | q = ");
    disjunction(p, q) ? printf("T") : printf("F");
    printf("\n");

    printf("p ^ q = ");
    exclusiveor(p, q) ? printf("T") : printf("F");
    printf("\n");

    printf("p -> q = ");
    conditional(p, q) ? printf("T") : printf("F");
    printf("\n");

    printf("p <-> q = ");
    biconditional(p, q) ? printf("T") : printf("F");
    printf("\n");

    return 0;
}

int ch1_cp2(void){
    const unsigned int bitStringSize = 32; 
    char bitStringA[bitStringSize];
    char bitStringB[bitStringSize];
    for(int i=0;i<bitStringSize;i++){
        bitStringA[i] = 0;
        bitStringB[i] = 0;
    }
    printf("bit string A: ");
    scanf(" %s", bitStringA);
    printf("%s\n", bitStringA);

    printf("bit string B: ");
    scanf(" %s", bitStringB);
    printf("%s\n", bitStringB);
    return 0;
}