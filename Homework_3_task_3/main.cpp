/* Домашняя работа 3
 * Задание 3
 * Поменять местами цифры старшего и младшего разрядов данного натурального числа (например, 3879 -> 9873)*/

#include <math.h>
#include <stdio.h>

int main()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    int N = number;
    int numberNew = 0;
    int counter = 0;
    while(true)
    {
        N /= 10;
        ++counter;
        if (N == 0)
        {
            numberNew = counter > 1 ? (numberNew + number / pow(10, counter - 1)) : number;
            break;
        }
    }
    numberNew += counter > 1 ? (number % 10 * pow(10, counter - 1)) : 0;
    number /= 10;
    for (int i = 1; i < counter - 1; ++i)
    {
        int step = number%10 * pow(10, i);
        number /= 10;
        numberNew += step;
    }

    printf("Answer is %d", numberNew);
    return 0;
}
