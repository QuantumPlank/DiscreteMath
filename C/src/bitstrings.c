#include"bitstrings.h"

void formatBitString(unsigned int bitStringSize, char* bitString){
    for(unsigned int i=0; i<bitStringSize; i++){
        if(bitString[i] == '0'){
            bitString[i] = '0';
        }
        else {
            bitString[i] = '1';
        }
    }
}