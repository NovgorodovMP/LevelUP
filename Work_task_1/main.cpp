/*Задача 1.
Дан массив чисел. Каждое число в массиве встречается по 2 раза, кроме одного.
Найти это одинокое число.*/
#include <stdio.h>

int find( int* mass, int size )
{
//    int counter;
//    for (int i = 0; i < size; ++i)
//    {
//        counter = 0;
//        for (int j = 0; j < size; ++j)
//        {
//            if (mass[j] == mass[i])
//            {
//                counter++;
//            }
//        }
//        if (counter == 1) return counter;
//    }
//    return -1;
    int counter = 0;
    for (int i = 0; i < size; ++i)
    {
        counter ^= mass[i];

    }
    printf("%d\n", counter);
    return counter;
}
int main()
{
    int array[5] = {1, 1, 2, 2, 7};
    find(array, 5);
}
