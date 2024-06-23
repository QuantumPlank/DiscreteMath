#ifndef LOGICOPERATORS_H
#define LOGICOPERATORS_H

#include"logic-operators.h"

#ifndef PROPOSITION_LENGTH
#define PROPOSITION_LENGTH 256
#endif

#ifndef PROPOSITION_VARS
#define PROPOSITION_VARS 3
#endif

void readProposition(unsigned int propositionSize, const char* proposition);

#endif

