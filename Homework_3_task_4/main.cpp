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
    for (long long int i = 1; number > 0; i*=10)
    {
        binary = binary + number%2 * i;
        number /= 2;
    }

    printf("%.0f", binary);

    return 0;
}
