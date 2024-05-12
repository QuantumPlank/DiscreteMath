#include"chapter1.h"
#include"propositions.h"
#include<stdio.h>
#include<ctype.h>


int c11(void){
    bool p = false;
    bool q = false;
    char p_val;
    char q_val;

    printf("p: ");
    scanf(" %c", &p_val);
    printf("q: ");
    scanf(" %c", &q_val);

    if(tolower(p_val) =='t') {
        p = true;
    }
    if(tolower(q_val) =='t') {
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

