#include "dec2bin.h"
int enterNumber()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    return number;
}

int* dec2bin(int number)
{
    printf("%d in binary is ", number);
    int* binary = new int[sizeof(number) * CHAR_BIT/2];
    for (int i = sizeof(number) * CHAR_BIT/2; i >= 0; --i )
    {
        if ((number & (1 << i)))
        {
            printf("%d", 1);
            binary[i];
        }
        else
        {
            printf("%d", 0);
            binary[i];
        }
        //printf("%d", (number & (1 << i)) ? 1 : 0);
    }
    printf("\n");
    return binary;
}
