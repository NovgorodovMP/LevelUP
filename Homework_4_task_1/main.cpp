/* Домащняя работа 4
 * Задание 1
 * Поменять местами максимальный и последний отрицательный элементы массива М(40) */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr size_t size = 40;
    int M[size] = {};
    srand(time(nullptr));
    int maxValue = -100;
    int lastNegativeIndex = 0;
    int maxValueIndex = 0;
    for (size_t i = 0; i < size; ++i)
    {
        M[i] = rand() % 200 - 100;
        if (M[i] >= maxValue)
        {
            maxValue = M[i];
            maxValueIndex = i;
        }

        lastNegativeIndex = M[i] < 0 ? i : lastNegativeIndex;

        printf("%d ", M[i]);
    }
    M[maxValueIndex] = M[lastNegativeIndex];
    M[lastNegativeIndex] = maxValue;
    printf("\n");
    printf("maxValueIndex: %d\nlastNegativeIndex: %d\n", maxValueIndex, lastNegativeIndex);

    for (size_t i = 0; i < size; ++i)
    {
        printf("%d ", M[i]);
    }

    return 0;
}
