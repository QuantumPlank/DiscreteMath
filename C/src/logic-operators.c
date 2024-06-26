#include"logic-operators.h"

/**
 * @brief Obtain conjunction of p and q
 * 
 * @param p 
 * @param q 
 * @return int 
 */
int conjunction(int p, int q){
    if(p && q){
        return 1;
    } 
    else {
        return 0;
    }
}

/**
 * @brief Obtain disjunction of p and q
 * 
 * @param p 
 * @param q 
 * @return int 
 */
int disjunction(int p, int q){
    if(p || q){
        return 1;
    } 
    else {
        return 0;
    }
}

/**
 * @brief Obtain exclusive or of p and q
 * 
 * @param p 
 * @param q 
 * @return int 
 */
int exclusiveor(int p, int q){
    if((p && q) || (!p && !q)){
        return 0;
    } 
    else {
        return 1;
    }
}

/**
 * @brief Obtain conditional of p and q
 * 
 * @param p 
 * @param q 
 * @return int 
 */
int conditional(int p, int q){
    if(p && (!q)){
        return 0;
    } 
    else {
        return 1;
    }
}

/**
 * @brief Obtain biconditional of p and q
 * 
 * @param p 
 * @param q 
 * @return int 
 */
int biconditional(int p, int q){
    if((p && q) || (!p && !q)){
        return 1;
    } 
    else {
        return 0;
    }
}