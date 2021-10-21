#include <countingLine.h>
double enterNumber()
{
    double x = 0;
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
    return x;
}
void countingLine(double x)
{
    long int factorial1 = 1;
    long int factorial2 = 1;
    double answer = 0;
    double step;
    for(int i=0; ; ++i)
    {
        factorial1 *= 2*i - 1 > 0 ? 2*i - 1 : 1;
        factorial2 *= 2*i > 0 ? 2*i : 1;
        step = (factorial1 * pow(x, 2*i+1)) / (factorial2 * (2*i + 1));

        if (step > PRECISION)
        {
            answer += step;
        }
        else break;
    }
    printf("Answer is %.05f", answer);
}
