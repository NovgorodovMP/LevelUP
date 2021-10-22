#include "calculateSum.h"
int calculateSum(int** array, size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size; ++j)
        {
            if (i < size - j - 1)
            {
                sum += array[i][j];
            }
        }
    }
    printf("Summ is: %d", sum);
    return sum;
}
