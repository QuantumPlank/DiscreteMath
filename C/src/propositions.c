#include<propositions.h>

bool conjunction(bool p, bool q) {
    printf("p & q (conjunction)\n");
    if(p && q) {
        printf("True\n");
        return true;
    } 
    else {
        printf("False\n");
        return false;
    }
}

bool disjunction(bool p, bool q) {
    printf("p | q (disjunction)\n");
    if(p || q) {
        printf("True\n");
        return true;
    } 
    else {
        printf("False\n");
        return false;
    }
}

bool exclusiveor(bool p, bool q) {
    printf("p ^ q (exclusive or)\n");
    if((p && q) || (!p && !q)) {
        printf("False\n");
        return false;
    } 
    else {
        printf("True\n");
        return true;
    }
}

bool conditional(bool p, bool q) {
    printf("p -> q (conditional)\n");
    if(p && (!q)) {
        printf("False\n");
        return false;
    } 
    else {
        printf("True\n");
        return true;
    }
}

bool biconditional(bool p, bool q) {
    printf("p <-> q (biconditional)\n");
    if((p && q) || (!p && !q)) {
        printf("True\n");
        return true;
    } 
    else {
        printf("False\n");
        return false;
    }
}