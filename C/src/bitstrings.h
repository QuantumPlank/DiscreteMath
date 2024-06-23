#ifndef BITSTRINGS_H
#define BITSTRINGS_H

void setBitString(unsigned int bitStringValue, unsigned int bitStringSize, char* bitString);

unsigned int getBitStringValue(unsigned int bitStringSize, const char* bitString);

unsigned int bitwiseAND(unsigned int bitStringA, unsigned int bitStringB);

unsigned int bitwiseOR(unsigned int bitStringA, unsigned int bitStringB);

unsigned int bitwiseXOR(unsigned int bitStringA, unsigned int bitStringB);

#endif