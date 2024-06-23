#include"propositions.h"

typedef struct {
    char letter;
    int value;
} variables;

void readProposition(unsigned int propositionSize, const char* proposition){
    for(unsigned int i=0; proposition[i]; i++){
        switch(proposition[i]){
            case '&':
                break;
            case '|':
                break;
            case '^':
                break;
            case '>':
                break;
            case '-':
                break;
            case '~':
                break;
            case '(':
                break;
            case ')':
                break;
            default:
                break;
        }
    }
}

int evalProposition(unsigned int propositionSize, const char* proposition, const variables* vars){
    
    for(int i=0; i<propositionSize; i++){
        proposition[i];
    }
}