/* Домашняя работа 3
 * Задание 5
 * Вычислить сумму ряда с точностью 10e-5, где 0.05 < x < 1.
 * Ряд f(x) = x + x^3/(2*3) + (1*3*x^5)/(2*4*5) + ... + ((2*n-1)!!*x^(2*n+1))/((2*n)!!*(2*n + 1))*/
#include <math.h>
#include <stdio.h>

int main()
{
    double x = 0;
    const double precision = 10e-5;
    while(true)
    {
        printf("Enter number: ");
        scanf("%lf", &x);
        if (x > 0.05 && x < 1)
        {
            break;
        }
        else
        {
            printf("Wrong input. Try again\n");
        }
    }
    long int factorial1 = 1;
    long int factorial2 = 1;
    double answer = 0;
    double step;
    for(int i=0; ; ++i)
    {
        factorial1 *= 2*i - 1 > 0 ? 2*i - 1 : 1;
        factorial2 *= 2*i > 0 ? 2*i : 1;
//        printf("i = %d: fact1 = %d\t", i, factorial1);
//        printf("fact2 = %d\n", factorial2);
        step = (factorial1 * pow(x, 2*i+1)) / (factorial2 * (2*i + 1));

        if (step > precision)
        {
            answer += step;
        }
        else break;
    }




    printf("Answer is %.05f", answer);

    return 0;
}
