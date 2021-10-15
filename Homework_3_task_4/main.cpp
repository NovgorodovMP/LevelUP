/* Домашняя работа 3
 * Задание 4
 * Перевести из десятичной системы счисления в двоичную*/

#include <math.h>
#include <stdio.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%d in binary is ", number);
    double binary = 0;
    for (int i = 0; number > 0; ++i)
    {
        binary = binary + number%2 * pow(10, i);
        number /= 2;
    }

    printf("%.0f", binary);

    return 0;
}
