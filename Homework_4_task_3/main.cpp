/* Домащняя работа 4
 * Задание 3
 * Дана матрица 7х7. Поменять местами k-ый столбец с k-ой строкой */


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr size_t size = 7;
    int M[size][size] = {};
    srand(time(nullptr));
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size; ++j)
        {
            M[i][j] = rand() % 100;
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }
    int k = 1;
    printf("Enter k: ");
    scanf("%d", &k);
    k = k > 7 ? 7 : k;
    --k;
    k = k > 0 ? k : 1;
    int step1 = 0;
    int step2 = 0;
    for (size_t i = 0; i < size; ++i)
    {
        step1 = M[k][i];
        step2 = M[i][k];

        M[i][k] = step1;
        M[k][i] = step2;
    }
    printf("Result:\n");
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size; ++j)
        {
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }


    return 0;
}
