/* Домащняя работа 4
 * Задание 4
 * Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали */


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr size_t size = 7;
    int M[size][size] = {};
    srand(time(nullptr));
    int sum = 0;
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size; ++j)
        {
            M[i][j] = rand() % 100;
            if (i < size - j - 1)
            {
                sum += M[i][j];
            }
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }
    printf("Summ is: %d", sum);

}
