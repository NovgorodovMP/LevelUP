#include "../swapElements.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_6, Test_1)
{
    int array[5] = {1, 5, -8, 20, -1};
    int testExpect[5] = {1, 5, -8, -1, 20};
    swapElements(array, 5);
    EXPECT_EQ(0, memcmp(array, testExpect, 5 * sizeof(int)));

}

TEST (TestsForHW5_6, Test_2)
{
    EXPECT_EQ(-1, swapElements(nullptr, 5));
}

TEST (TestsForHW5_6, Test_3)
{
    int array[5] = {-1, -5, -8, -20, -15};
    int testExpect[5] = {-15, -5, -8, -20, -1};
    swapElements(array, 5);
    EXPECT_EQ(0, memcmp(array, testExpect, 5 * sizeof(int)));

}

TEST (TestsForHW5_6, Test_4)
{
    int array[5] = {1, 5, 8, 20, 15};
    int testExpect[5] = {1, 5, 8, 20, 15};
    swapElements(array, 5);
    EXPECT_EQ(0, memcmp(array, testExpect, 5 * sizeof(int)));

}

//TEST (TestsForHW5_3, Test_3)
//{
//    int number     = 5;
//    int testExpect = 5;
//    int testResult = switchDigits(number);
//    EXPECT_EQ(testExpect, testResult);
//}
