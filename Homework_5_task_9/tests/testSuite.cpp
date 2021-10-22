#include "../calculateSum.h"
#include "gtest/gtest.h"

TEST (TestsForHW5_9, Test_1)
{
    int** array = new int*[7]{  new int[7]{80,  37,  92,  55,   7,  11,  95},
                                new int[7]{95,  28,  73,  96,  80,  41,  68},
                                new int[7]{96,  97,  97,  11,  12,   6,  47},
                                new int[7]{22,  24,   7,  94,   0,   9,  74},
                                new int[7]{46,  27,  99,  55,   3,  79,  91},
                                new int[7]{75,  52,  20,   2,  82,  95,  92},
                                new int[7]{58,   1,  43,  26,  67,  84,  94}};

    int testExpect = 1156;
    EXPECT_EQ(testExpect, calculateSum(array, 7));

}

TEST (TestsForHW5_9, Test_2)
{
    int** array = new int*[5]{  new int[5]{},
                                new int[5]{},
                                new int[5]{},
                                new int[5]{},
                                new int[5]{}};

    int testExpect = 0;
    EXPECT_EQ(testExpect, calculateSum(array, 7));
}

