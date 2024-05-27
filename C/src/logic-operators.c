#include"logic-operators.h"

int conjunction(int p, int q){
    if(p && q){
        return true;
    } 
    else {
        return false;
    }
}

int disjunction(int p, int q){
    if(p || q){
        return true;
    } 
    else {
        return false;
    }
}

int exclusiveor(int p, int q){
    if((p && q) || (!p && !q)){
        return false;
    } 
    else {
        return true;
    }
}

int conditional(int p, int q){
    if(p && (!q)){
        return false;
    } 
    else {
        return true;
    }
}

int biconditional(int p, int q){
    if((p && q) || (!p && !q)){
        return true;
    } 
    else {
        return false;
    }
}