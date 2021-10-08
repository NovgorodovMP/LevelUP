/* Домашняя работа 3
 * Задание 1
 * Дано натуральное число N. Программа определяет количество цифр в этом числе*/


#include <math.h>
#include <stdio.h>

int main()
{
    int N;
    printf("Enter number: ");
    scanf("%d", &N);
    int counter = 0;
    do
    {
        N /= 10;
        ++counter;
    }while (N != 0);
    printf("There are %d digits", counter);

    return 0;
}
