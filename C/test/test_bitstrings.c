#include"bitstrings.h"
#include"unity.h"
#include<string.h>

#define numberOfBits 8
#define testBitStringSize (numberOfBits+1)

char bitStringA[testBitStringSize];
char bitStringB[testBitStringSize];
char bitStringC[testBitStringSize];
char bitStringD[testBitStringSize];

void setUp(void) 
{
    strcpy(bitStringA, "abcdefgh\0");
    strcpy(bitStringB, "00000000\0");
    strcpy(bitStringC, "11111111\0");
    strcpy(bitStringD, "10101010\0");
}

void tearDown(void)
{
}

void test_formatBitString(void)
{
    formatBitString(testBitStringSize, bitStringA);
    TEST_ASSERT_EQUAL_STRING("11111111", bitStringA);
    formatBitString(testBitStringSize, bitStringB);
    TEST_ASSERT_EQUAL_STRING("00000000", bitStringB);
    formatBitString(testBitStringSize, bitStringC);
    TEST_ASSERT_EQUAL_STRING("11111111", bitStringC);
    formatBitString(testBitStringSize, bitStringD);
    TEST_ASSERT_EQUAL_STRING("10101010", bitStringD);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_formatBitString);
    return UNITY_END();
}
