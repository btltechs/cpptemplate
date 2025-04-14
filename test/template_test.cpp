// template_test.cpp
// UT suite for example class. For demonstration only

#include <gtest/gtest.h>
#include <iostream>
#include "template.h"
#include "template_config.h"

// Testing class. See GTest documentation for more info
class ExampleTest : public ::testing::Test {
 protected:
  ExampleTest() {
  }

  ~ExampleTest() override {

  }

  void SetUp() override {

  }

  void TearDown() override {

  }

  // Instance of example class "Template" to test
  Template uut;
};

// Test that both members of Example instance can be set accurately
TEST_F(ExampleTest, MemberSetTest) {
  uut.a = 2;
  uut.b = 35;
  ASSERT_EQ(uut.a, 2);
  ASSERT_EQ(uut.b, 35);
}

// Test correctness of sum() for uut, following execution of MemberSetTest
TEST_F(ExampleTest, SumTest) {
  ASSERT_EQ(uut.sum(), 37);
}

// Another test for the correctness of sum() for uut. Just an example
TEST_F(ExampleTest, SumTest2) {
  uut.a = 333;
  uut.b = -333;
  ASSERT_EQ(uut.sum(), 0);
}

// Test correctness of divide() for uut
// Note that this doesn't handle division by zero!
TEST_F(ExampleTest, DivideTest) {
  uut.a = 4;
  uut.b = 2;
  ASSERT_EQ(uut.divide(), 2);
}

