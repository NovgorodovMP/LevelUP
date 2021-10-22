#include "../findElements.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_7, Test_1)
{
    int arrayA[10] = {4, 7, 7, 0, 0, 1, 7, 4, 1, 1};
    int arrayB[5] = {0, 2, 2, 6, 0};
    int arrayExpect[10] = {0, 1, 2, 5, 6, 7, 8, 9};
    int resultArray[10] = {};
    findElements(arrayB, 5, arrayA, 10, resultArray);
    EXPECT_EQ(0, memcmp(resultArray, arrayExpect, 10 * sizeof(int)));

}

TEST (TestsForHW5_7, Test_2)
{
    int arrayA[0] = {};
    int arrayB[0] = {};
    int arrayExpect[0] = {};
    int resultArray[0] = {};
    findElements(arrayB, 0, arrayA, 0, resultArray);
    EXPECT_EQ(0, memcmp(resultArray, arrayExpect, 0 * sizeof(int)));

}

TEST (TestsForHW5_7, Test_3)
{
    int arrayA[10] = {4, 7, 7, 0, 0, 1, 7, 4, 1, 1};
    int arrayB[5] = {4, 2, 7, 1, 0};
    int arrayExpect[10] = {};
    int resultArray[10] = {};
    findElements(arrayB, 5, arrayA, 10, resultArray);
    EXPECT_EQ(0, memcmp(resultArray, arrayExpect, 10 * sizeof(int)));

}

TEST (TestsForHW5_7, Test_4)
{
    int arrayA[10] = {4, 7, 7, 0, 0, 1, 7, 4, 1, 1};
    int arrayB[5] = {3, 2, 2, 6, 3};
    int arrayExpect[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int resultArray[10] = {};
    findElements(arrayB, 5, arrayA, 10, resultArray);
    EXPECT_EQ(0, memcmp(resultArray, arrayExpect, 10 * sizeof(int)));

}
