#include"logic-operators.h"
#include<stdbool.h>

bool conjunction(bool p, bool q){
    if(p && q){
        return true;
    } 
    else {
        return false;
    }
}

bool disjunction(bool p, bool q){
    if(p || q){
        return true;
    } 
    else {
        return false;
    }
}

bool exclusiveor(bool p, bool q){
    if((p && q) || (!p && !q)){
        return false;
    } 
    else {
        return true;
    }
}

bool conditional(bool p, bool q){
    if(p && (!q)){
        return false;
    } 
    else {
        return true;
    }
}

bool biconditional(bool p, bool q){
    if((p && q) || (!p && !q)){
        return true;
    } 
    else {
        return false;
    }
}