#include <findLCD.h>
int* enterNumbers()
{
    int number1;
    int number2;
    int number3;
    printf("Enter three number: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    int* M = new int[3];
    M[0] = number1;
    M[1] = number2;
    M[2] = number3;
    return M;
}

void findingLCD(int* threeNumbers)
{
    if (threeNumbers == nullptr) return;
    int numberMax = abs(threeNumbers[0]) > abs(threeNumbers[1]) ? (abs(threeNumbers[0]) > abs(threeNumbers[2]) ? abs(threeNumbers[0]) : abs(threeNumbers[2])) : (threeNumbers[1] > abs(threeNumbers[2]) ? abs(threeNumbers[1]) : abs(threeNumbers[2]));
    int divider = 1;
    for (int i = abs(numberMax); i > 1; --i)
    {
        if((threeNumbers[0] % i == 0) && (threeNumbers[1] % i == 0) && (threeNumbers[2] % i == 0))
        {
            divider = i;
        }
    }
    printf("The least common divider is %d", divider);
    delete[] threeNumbers;
}
