#include <counting.h>
int enterNumber()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    return number;
}

void countingNumbers(int number)
{
    int counter = 0;
    do
    {
        number /= 10;
        ++counter;
    }while (number != 0);
    printf("There are %d digits", counter);
}
