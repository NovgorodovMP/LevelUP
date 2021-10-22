#include "../countingLine.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_5, Test_1)
{
    double number  = 0.5;
    double testExpect = 0.52353;
    double testResult = countingLine(number);
    EXPECT_EQ(testExpect, testResult);
}


