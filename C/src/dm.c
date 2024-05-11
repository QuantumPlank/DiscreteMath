#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<propositions.h>


int main(int argc, char *argv[]) {
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

    conjunction(p, q);
    disjunction(p, q);
    exclusiveor(p, q);
    conditional(p, q);
    biconditional(p, q);

    return 0;
}