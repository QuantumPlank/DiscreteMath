#ifndef PROPOSITIONS_H
#define PROPOSITIONS_H

#include<stdbool.h>

bool conjunction(bool p, bool q);

bool disjunction(bool p, bool q);

bool exclusiveor(bool p, bool q);

bool conditional(bool p, bool q);

bool biconditional(bool p, bool q);

#endif