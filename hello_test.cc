#include <gtest/gtest.h>

TEST(HelloWorldSuite,BasicAssertions){
 // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}