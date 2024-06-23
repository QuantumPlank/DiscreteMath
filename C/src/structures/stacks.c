#include"stacks.h"

typedef struct Stack{
    int value;
    struct Stack* next;
} Stack;

void push(Stack* stack, int value){
    Stack* new = malloc(sizeof(Stack));
    new->value = value;
    new->next = stack;
}

int pop(Stack* stack){
    int val = stack->value;
    Stack* old = stack;
    stack = stack->next;
    free(old);
    return val;
}