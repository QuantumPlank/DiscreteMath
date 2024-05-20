#include"chapter1.h"
#include"logic-operators.h"
#include"bitstrings.h"
#include<stdio.h>
#include<ctype.h>

/**
 * @brief Chapter: 1. Computer Projects: 1.
 * Given the truth values of the propositions p and q, find the truth values of the conjunction, disjunction, exclusive
 * or, conditional statement, and biconditional of these propositions.
 * 
 * @return int 
 */
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

/**
 * @brief Chapter: 1. Computer Projects: 2.
 * Given two bit strings of length n, find the bitwise AND, bitwise OR, and bitwise XOR of these strings.
 * 
 * @return int 
 */
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


/**
 * @brief Chapter: 1. Computer Projects: 3.
 * Give a compound proposition, determine whether it is satisfiable by checking its truth value for all positive
 * assignments of truth values to its propositional variables.
 *
 * @return int 
 */
int ch1_cp3(void){
    return 0;
} 

/**
 * @brief Chapter: 1. Computer Projects: 4.
 * Given the truth values of the propositions p and q in fuzzy logic, find the truth value of the disjunction and the
 * conjunction of p and q (see Exercises 46 and 47 of Section 1.1).
 *
 * @return int 
 */
int ch1_cp4(void){
    return 0;
}

/**
 * @brief Chapter: 1. Computer Projects: 5.
 * Given positive integers m and n, interactively play the game of Chomp.
 *
 * @return int 
 */
int ch1_cp5(void);

/**
 * @brief Chapter: 1. Computer Projects: 6.
 * Given a portion of a checkerboard, look for tilings of this checkerboard with various types of polyominoes, including
 * dominoes, the two types of triominoes, and larger polyominoes.
 *
 * @return int 
 */
int ch1_cp6(void);