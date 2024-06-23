#include"bitstrings.h"

/**
 * @brief Set the Bit String object
 * 
 * @param bitStringValue 
 * @param bitStringSize 
 * @param bitString 
 */
void setBitString(unsigned int bitStringValue, unsigned int bitStringSize, char* bitString){
    for(unsigned int i=0; i<bitStringSize-1; i++){
        if((bitStringValue>>i) & 1){
            bitString[bitStringSize-2-i] = '1';
        } else {
            bitString[bitStringSize-2-i] = '0';
        }
    }
    bitString[bitStringSize-1] = '\0';
}

/**
 * @brief Get the Bit String Value object
 * 
 * @param bitStringSize 
 * @param bitString 
 * @return unsigned int 
 */
unsigned int getBitStringValue(unsigned int bitStringSize, const char* bitString){
    unsigned int bitStringValue = 0;
    for(unsigned int i=0; bitString[i]; i++){
        bitStringValue = bitStringValue << 1;
        if(bitString[i] == '1'){
            bitStringValue += 1;
        }
    }
    return bitStringValue;
}

/**
 * @brief Obtain the bitwise AND between two bitstrings
 * 
 * @param bitStringA 
 * @param bitStringB 
 * @return unsigned int 
 */
unsigned int bitwiseAND(unsigned int bitStringA, unsigned int bitStringB){
    return bitStringA & bitStringB;
}

/**
 * @brief Obtain the bitwise OR between two bitstrings
 * 
 * @param bitStringA 
 * @param bitStringB 
 * @return unsigned int 
 */
unsigned int bitwiseOR(unsigned int bitStringA, unsigned int bitStringB){
    return bitStringA | bitStringB;
}

/**
 * @brief Obtain the bitwise XOR between two bitstrings
 * 
 * @param bitStringA 
 * @param bitStringB 
 * @return unsigned int 
 */
unsigned int bitwiseXOR(unsigned int bitStringA, unsigned int bitStringB){
    return bitStringA ^ bitStringB;
}
