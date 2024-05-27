#include"bitstrings.h"

unsigned int getBitStringValue(unsigned int bitStringSize, char* bitString){
    unsigned int bitStringValue = 0;
    for(unsigned int i=0; bitString[i]!='/0'; i++){
        if(bitString[i] != '0'){
            bitStringValue += 1;
        }
        bitStringValue << 1;
    }
    return bitStringValue;
}

unsigned int bitwiseAND(unsigned int bitStringA, unsigned int bitStringB){
    return 0;
}

unsigned int bitwiseOR(unsigned int bitStringA, unsigned int bitStringB){
    return 0;
}

unsigned int bitwiseXOR(unsigned int bitStringA, unsigned int bitStringB){
    return 0;
}
