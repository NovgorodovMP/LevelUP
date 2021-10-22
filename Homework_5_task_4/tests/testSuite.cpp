#include "../dec2bin.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_4, Test_1)
{
    int number     = 9;
    int* testExpect = new int[sizeof(number) * CHAR_BIT/2];
    testExpect[sizeof(number) * CHAR_BIT/2 - 1] = 1;
    testExpect[sizeof(number) * CHAR_BIT/2 - 2] = 0;
    testExpect[sizeof(number) * CHAR_BIT/2 - 3] = 0;
    testExpect[sizeof(number) * CHAR_BIT/2 - 4] = 1;

//    int* testResult;// = new int[sizeof(number) * CHAR_BIT/2];
    int* testResult = dec2bin(number);
    EXPECT_EQ(0, memcmp(testResult, testExpect, sizeof(number) * CHAR_BIT/2));

    delete[] testResult;
    delete[] testExpect;

}

TEST (TestsForHW5_4, Test_2)
{
    int number     = 8;
    int* testExpect = new int[sizeof(number) * CHAR_BIT/2];
    testExpect[sizeof(number) * CHAR_BIT/2 - 1] = 0;
    testExpect[sizeof(number) * CHAR_BIT/2 - 2] = 0;
    testExpect[sizeof(number) * CHAR_BIT/2 - 3] = 0;
    testExpect[sizeof(number) * CHAR_BIT/2 - 4] = 1;

    int* testResult = dec2bin(number);
    EXPECT_EQ(0, memcmp(testResult, testExpect, sizeof(number) * CHAR_BIT/2));

    delete[] testResult;
    delete[] testExpect;
}

TEST (TestsForHW5_4, Test_3)
{
    int number     = 0;
    int* testExpect = new int[sizeof(number) * CHAR_BIT/2];

    int* testResult = dec2bin(number);
    EXPECT_EQ(0, memcmp(testResult, testExpect, sizeof(number) * CHAR_BIT/2));

    delete[] testResult;
    delete[] testExpect;
}
