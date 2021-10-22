#include "../switchDigits.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_3, Test_1)
{
    int number     = 123456;
    int testExpect = 623451;
    int testResult = switchDigits(number);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_3, Test_2)
{
    int number     = -125;
    int testExpect = -521;
    int testResult = switchDigits(number);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_3, Test_3)
{
    int number     = 5;
    int testExpect = 5;
    int testResult = switchDigits(number);
    EXPECT_EQ(testExpect, testResult);
}
