#include "../swapRowColumn.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_8, Test_1)
{
    int** array = new int*[5]{  new int[5]{68,  57,   4,   1,   5},
                                new int[5]{34,  73,  29,  36,  56},
                                new int[5]{93,   6,  70,   3,  77},
                                new int[5]{70,  67,  37,  72,  97},
                                new int[5]{6,  46,  72,  16,  54 }};

    int** testExpect = new int*[5] {new int[5]  {68,  57,  93,   1,   5},
                                    new int[5]  {34,  73,   6,  36,  56},
                                    new int[5]  { 4,  29,  70,  37,  72},
                                    new int[5]  {70,  67,   3,  72,  97},
                                    new int[5]  { 6,  46,  77,  16,  54}};
    swapRowColumn(array, 5, 2);
    EXPECT_EQ(0, memcmp(array[2], testExpect[2], 5));
    for (size_t i = 0; i < 5; ++i)
    {
        EXPECT_EQ(array[i][2], testExpect[i][2]);
    }
}

TEST (TestsForHW5_8, Test_2)
{
    int** array = new int*[5]{  new int[5]{},
                                new int[5]{},
                                new int[5]{},
                                new int[5]{},
                                new int[5]{}};

    int** testExpect = new int*[5] {new int[5]  {},
                                    new int[5]  {},
                                    new int[5]  {},
                                    new int[5]  {},
                                    new int[5]  {}};
    swapRowColumn(array, 5, 2);
    EXPECT_EQ(0, memcmp(array[2], testExpect[2], 5));
    for (size_t i = 0; i < 5; ++i)
    {
        EXPECT_EQ(array[i][2], testExpect[i][2]);
    }
}

