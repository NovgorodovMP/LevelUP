#include <swapElements.h>

void swapElements(int* array, size_t size)
{
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
    array[maxValueIndex] = array[lastNegativeIndex];
    array[lastNegativeIndex] = maxValue;
}
