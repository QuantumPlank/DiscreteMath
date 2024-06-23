#include"bitstrings.h"
#include"unity.h"
#include<string.h>
#include<stdio.h>

#define numberOfBits 8
#define bitStringSize (numberOfBits+1)

char bitStringA[bitStringSize];
char bitStringB[bitStringSize];
char bitStringC[bitStringSize];

char zeros[] = "00000000";
char ones[] = "11111111";
char alternate[] = "10101010";

void setUp(void) 
{
    strcpy(bitStringA, zeros);
    strcpy(bitStringB, zeros);
}

void tearDown(void)
{
}

void test_setBitString(void)
{
    setBitString(0, bitStringSize, bitStringA);
    TEST_ASSERT_EQUAL_STRING(zeros, bitStringA);
    setBitString(255, bitStringSize, bitStringA);
    TEST_ASSERT_EQUAL_STRING(ones, bitStringA);
    setBitString(170, bitStringSize, bitStringA);
    TEST_ASSERT_EQUAL_STRING(alternate, bitStringA);
}

void test_getBitStringValue(void)
{
    int ret = 0;
    ret = getBitStringValue(bitStringSize, zeros);
    TEST_ASSERT_EQUAL_INT(0,ret);
    ret = getBitStringValue(bitStringSize, ones);
    TEST_ASSERT_EQUAL_INT(255,ret);
    ret = getBitStringValue(bitStringSize, alternate);
    TEST_ASSERT_EQUAL_INT(170,ret);
}

void test_bitwiseAND(void)
{
    int ret = 0;
    ret = bitwiseAND(0, 1);
    TEST_ASSERT_EQUAL_INT(0,ret);
    ret = bitwiseAND(100, 100);
    TEST_ASSERT_EQUAL_INT(100,ret);
    ret = bitwiseAND(20, 5);
    TEST_ASSERT_EQUAL_INT(4,ret);
}

void test_bitwiseOR(void)
{
    int ret = 0;
    ret = bitwiseOR(0, 1);
    TEST_ASSERT_EQUAL_INT(1,ret);
    ret = bitwiseOR(100, 100);
    TEST_ASSERT_EQUAL_INT(100,ret);
    ret = bitwiseOR(20, 5);
    TEST_ASSERT_EQUAL_INT(21,ret);
    
}

void test_bitwiseXOR(void)
{
    int ret = 0;
    ret = bitwiseXOR(0, 1);
    TEST_ASSERT_EQUAL_INT(1,ret);
    ret = bitwiseXOR(100, 100);
    TEST_ASSERT_EQUAL_INT(0,ret);
    ret = bitwiseXOR(20, 5);
    TEST_ASSERT_EQUAL_INT(17,ret);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_setBitString);
    RUN_TEST(test_getBitStringValue);
    RUN_TEST(test_bitwiseAND);
    RUN_TEST(test_bitwiseOR);
    RUN_TEST(test_bitwiseXOR);
    return UNITY_END();
}
