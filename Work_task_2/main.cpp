/* Задача 2.
Есть несколько детей, у каждого ребенка есть некоторое число конфет. Число конфет у детей задается массивом. Так же есть некоторое число дополнительных конфет.
Требуется определить, если указанному ребенку отдать все дополнительные конфеты, то будет ли у него их максимальное количество.
*/
#include <stdio.h>
bool find( int* mass, int size, int child, int count )
{
    int max = 0;
    for(int i = 0; i < size; ++i)
    {
        max = mass[i] > max ? mass[i] : max;
    }
    return (mass[child] + count) >= max;
}


int main()
{
    int array[5] = {1, 2, 5, 2, 1};
    printf("%d", find(array, 5, 3, 2));
}
