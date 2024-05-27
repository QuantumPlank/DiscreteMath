#ifndef PROPOSITIONS_H
#define PROPOSITIONS_H

#include<stdbool.h>

int conjunction(int p, int q);

int disjunction(int p, int q);

int exclusiveor(int p, int q);

int conditional(int p, int q);

int biconditional(int p, int q);

#endif