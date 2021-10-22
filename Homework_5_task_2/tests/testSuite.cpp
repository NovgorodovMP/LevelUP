#include "../findLCD.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_2, Test_1)
{
    int* threeNumbers = new int[3] {2, 4, 6};
    int testExpect = 2;
    int testResult = findingLCD(threeNumbers);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_2, Test_2)
{
    int* threeNumbers = new int[3] {3, 4, 5};
    int testExpect = 1;
    int testResult = findingLCD(threeNumbers);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_2, Test_3)
{
    int* threeNumbers = new int[3] {-3, 9, -6};
    int testExpect = 3;
    int testResult = findingLCD(threeNumbers);
    EXPECT_EQ(testExpect, testResult);
}

TEST (TestsForHW5_2, Test_4)
{
    int* pointer = nullptr;
    int testExpect = -1;
    int testResult = findingLCD(pointer);
    EXPECT_EQ(testExpect, testResult);
}
