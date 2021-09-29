/* Домашняя работа 2
 * Задание 1
 * Программа вычисляет значение выражения*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0.0;
    printf("Please, enter X: ");
    scanf("%lf", &x);
    double up = 2 * cos(x - M_PI/6) + sqrt(2);
    double down = 1 / (2 * log(x)) + pow(sin(pow(x, 2)), 2);
    double result = (up / down) * exp(3 * x);
    printf("The result is: %.3lf", result);
    return 0;

}
