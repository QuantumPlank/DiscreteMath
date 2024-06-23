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
  TEST_ASSERT_TRUE(conjunction(1, 1));
  TEST_ASSERT_FALSE(conjunction(1,0));
  TEST_ASSERT_FALSE(conjunction(0,1));
  TEST_ASSERT_FALSE(conjunction(0,0));
}

void test_disjunction(void)
{
  TEST_ASSERT_TRUE(disjunction(1, 1));
  TEST_ASSERT_TRUE(disjunction(1, 0));
  TEST_ASSERT_TRUE(disjunction(0, 1));
  TEST_ASSERT_FALSE(disjunction(0, 0));
}

void test_exclusiveor(void)
{
  TEST_ASSERT_FALSE(exclusiveor(1, 1));
  TEST_ASSERT_TRUE(exclusiveor(1, 0));
  TEST_ASSERT_TRUE(exclusiveor(0, 1));
  TEST_ASSERT_FALSE(exclusiveor(0, 0));
}

void test_conditional(void)
{
  TEST_ASSERT_TRUE(conditional(1, 1));
  TEST_ASSERT_FALSE(conditional(1, 0));
  TEST_ASSERT_TRUE(conditional(0, 1));
  TEST_ASSERT_TRUE(conditional(0, 0));
}

void test_biconditional(void)
{
  TEST_ASSERT_TRUE(biconditional(1, 1));
  TEST_ASSERT_FALSE(biconditional(1, 0));
  TEST_ASSERT_FALSE(biconditional(0, 1));
  TEST_ASSERT_TRUE(biconditional(0, 0));
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
