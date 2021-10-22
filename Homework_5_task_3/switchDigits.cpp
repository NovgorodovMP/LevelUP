#include "switchDigits.h"
int enterNumber()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    return number;
}
int switchDigits(int number)
{
    int N = number;
    int numberNew = 0;
    int counter = 0;
    while(true)
    {
        N /= 10;
        ++counter;
        if (N == 0)
        {

            break;
        }
    }
    numberNew = counter > 1 ? (numberNew + number / pow(10, counter - 1)) : number;
    numberNew += counter > 1 ? (number % 10 * pow(10, counter - 1)) : 0;
    number /= 10;
    for (int i = 1; i < counter - 1; ++i)
    {
        int step = number%10 * pow(10, i);
        number /= 10;
        numberNew += step;
    }

    printf("Answer is %d", numberNew);
    return numberNew;
}
