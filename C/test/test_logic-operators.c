#include"logic-operators.h"
#include"unity.h"

void setUp(void) 
{
}

void tearDown(void)
{
}

void test_conjunction(void)
{
  TEST_ASSERT_TRUE(conjunction(true, true));
  TEST_ASSERT_FALSE(conjunction(true,false));
  TEST_ASSERT_FALSE(conjunction(false,true));
  TEST_ASSERT_FALSE(conjunction(false,false));
}

void test_disjunction(void)
{
  TEST_ASSERT_TRUE(disjunction(true, true));
  TEST_ASSERT_TRUE(disjunction(true, false));
  TEST_ASSERT_TRUE(disjunction(false, true));
  TEST_ASSERT_FALSE(disjunction(false, false));
}

void test_exclusiveor(void)
{
  TEST_ASSERT_FALSE(exclusiveor(true, true));
  TEST_ASSERT_TRUE(exclusiveor(true, false));
  TEST_ASSERT_TRUE(exclusiveor(false, true));
  TEST_ASSERT_FALSE(exclusiveor(false, false));
}

void test_conditional(void)
{
  TEST_ASSERT_TRUE(conditional(true, true));
  TEST_ASSERT_FALSE(conditional(true, false));
  TEST_ASSERT_TRUE(conditional(false, true));
  TEST_ASSERT_TRUE(conditional(false, false));
}

void test_biconditional(void)
{
  TEST_ASSERT_TRUE(biconditional(true, true));
  TEST_ASSERT_FALSE(biconditional(true, false));
  TEST_ASSERT_FALSE(biconditional(false, true));
  TEST_ASSERT_TRUE(biconditional(false, false));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_conjunction);
    RUN_TEST(test_disjunction);
    RUN_TEST(test_exclusiveor);
    RUN_TEST(test_conditional);
    RUN_TEST(test_biconditional);
    return UNITY_END();
}
