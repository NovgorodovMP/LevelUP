#include "swapElements.h"

int swapElements(int* array, size_t size)
{
    if (array == nullptr) return -1;
    int maxValue = -100;
    int lastNegativeIndex = 0;
    int maxValueIndex = 0;
    for (size_t i = 0; i < size; ++i)
    {
        if (array[i] >= maxValue)
        {
            maxValue = array[i];
            maxValueIndex = i;
        }
        lastNegativeIndex = array[i] < 0 ? i : lastNegativeIndex;
    }
    if (lastNegativeIndex == 0 && array[lastNegativeIndex] >= 0)
    {
        return 0;
    }
    else
    {
        array[maxValueIndex] = array[lastNegativeIndex];
        array[lastNegativeIndex] = maxValue;
    }

    return 0;
}
