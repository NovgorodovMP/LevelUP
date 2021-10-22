#include "../checkCorrectBracketSequences.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_11, Test_1)
{
    char string[] = "()()()()";
    int testExpect = 0;

    EXPECT_EQ(testExpect, checkCorrectBracketSequences(string));

}

TEST (TestsForHW5_11, Test_2)
{
    char string[] = "(()()()()";
    int testExpect = 1;

    EXPECT_EQ(testExpect, checkCorrectBracketSequences(string));

}
TEST (TestsForHW5_11, Test_3)
{
    char string[] = "()()()())";
    int testExpect = -1;

    EXPECT_EQ(testExpect, checkCorrectBracketSequences(string));

}

TEST (TestsForHW5_11, Test_4)
{
    char string[] = "";
    int testExpect = 0;

    EXPECT_EQ(testExpect, checkCorrectBracketSequences(string));

}


