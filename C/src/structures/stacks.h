#ifndef STACKS_H
#define STACKS_H

#include<stdlib.h>

typedef struct Stack Stack;

void push(Stack* stack, int value);
int pop(Stack* stack);

#endif