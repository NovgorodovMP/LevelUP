/* Домашняя работа 3
 * Задание 2
 * Найти наименьший общий делитель трех натуральных чисел (1 будет считаться наименьшим общим делителем только если других общих делителей у чисел нет)*/

#include <math.h>
#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter three number: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    int numberMax = abs(number1) > abs(number2) ? (abs(number1) > abs(number3) ? abs(number1) : abs(number3)) : (number2 > abs(number3) ? abs(number2) : abs(number3));
    int divider = 1;
    for (int i = abs(numberMax); i > 1; --i)
    {
        if((number1 % i == 0) && (number2 % i == 0) && (number3 % i == 0))
        {
            divider = i;
        }
    }

    printf("The least common divider is %d", divider);

    return 0;
}
