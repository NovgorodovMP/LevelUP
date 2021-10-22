#include "../removeOddWords.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_10, Test_1)
{
    char string[255] = "qwe qwer asd asdf";
    char testExpect[255] = "qwer asdf";

    char resultString[255] = {};
    removeOddWords(string, resultString);
    EXPECT_EQ(0, memcmp(testExpect, resultString, 255));
}
TEST (TestsForHW5_10, Test_2)
{
    char string[255] = "qwe asd";
    char testExpect[255] = "";

    char resultString[255] = {};
    removeOddWords(string, resultString);
    EXPECT_EQ(0, memcmp(testExpect, resultString, 255));
}
TEST (TestsForHW5_10, Test_3)
{
    char string[255] = "qwe    qwer     asd";
    char testExpect[255] = "qwer ";

    char resultString[255] = {};
    removeOddWords(string, resultString);
    EXPECT_EQ(0, memcmp(testExpect, resultString, 255));
}


