#include "../counting.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_1, Test_1)
{
    int number     = 123456;
    int testExpect = 6;
    int testResult = countingNumbers(number);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_1, Test_2)
{
    int number     = -125;
    int testExpect = 3;
    int testResult = countingNumbers(number);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_1, Test_3)
{
    int number     = 5;
    int testExpect = 1;
    int testResult = countingNumbers(number);
    EXPECT_EQ(testExpect, testResult);
}
