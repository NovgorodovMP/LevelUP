/* Домашняя работа 3
 * Задание 5
 * Вычислить сумму ряда с точностью 10e-5, где 0.05 < x < 1.
 * Ряд f(x) = x + x^3/(2*3) + (1*3*x^5)/(2*4*5) + ... + ((2*n-1)!!*x^(2*n+1))/((2*n)!!*(2*n + 1))*/
#include <countingLine.h>

int main()
{
    double x = enterNumber();
    countingLine(x);
    return 0;
}
