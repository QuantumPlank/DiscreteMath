#include"bitstrings.h"
#include"unity.h"
#include<string.h>

#define testBitStringSize 8

char bitStringA[testBitStringSize];
char bitStringB[testBitStringSize];
char bitStringC[testBitStringSize];
char bitStringD[testBitStringSize];

void setUp(void) 
{
    strcpy(bitStringA, "abcdefgh");
    strcpy(bitStringB, "00000000");
    strcpy(bitStringC, "11111111");
    strcpy(bitStringD, "10101010");
}

void tearDown(void)
{
}

void test_formatBitString(void)
{
    formatBitString(testBitStringSize, bitStringA);
    TEST_ASSERT_EQUAL_STRING("11111111", bitStringA);

}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_formatBitString);
    return UNITY_END();
}
