/* Домащняя работа 4
 * Задание 2
 * Определить положение элементов массива А(30), не встречающихся в массиве В(15) */


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr size_t sizeA = 30;
    constexpr size_t sizeB = 15;
    int A[sizeA]        = {};
    int B[sizeB]        = {};
    srand(time(nullptr));
    for (size_t i = 0; i < sizeA; ++i)
    {
        A[i] = rand() % 100;
        printf("%d ", A[i]);
    }
    printf("\n");
    for (size_t i = 0; i < sizeB; ++i)
    {
        B[i] = rand() % 100;
        printf("%d ", B[i]);
    }

    printf("\nArray A elements with indices ");
    bool flag = true;
    for (size_t i = 0; i < sizeA; ++i)
    {
        flag = true;
        for (size_t j = 0; j < sizeB; ++j)
        {
            if (A[i] == B[j])
            {
                flag = false;
            }
        }
        if (flag)
        {
            printf("%d, ", i);
        }

    }

    printf("do not appear in the array B");

    return 0;
}
