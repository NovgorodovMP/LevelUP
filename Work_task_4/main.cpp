/*Задача 4.
Дан массив длиной N. Массив состоит из целых чисел. Дано целое число K. Найти в этом массиве такой интервал, что бы сумма элементов в нем равнялась K.
*/
#include <stdio.h>
struct Pair
{
 int first;
 int second;
};

Pair find( int* mass, int N, int k )
{
    Pair interval;
    int summ = 0;
    for (int i = 0; i < N - 1; ++i)
    {
        summ = mass[i];
        for (int j = i+1; j < N; ++j)
        {
            summ += mass[j];
            if (summ == k)
            {
                interval.first = i;
                interval.second = j;
                return interval;
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    Pair pair = find(array, 5, 7);
    printf("%d and %d\n", pair.first, pair.second);
}
