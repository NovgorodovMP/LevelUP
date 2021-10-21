#include <dec2bin.h>
int enterNumber()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    return number;
}

void dec2bin(int number)
{
    printf("%d in binary is ", number);
    for (int i = sizeof(number) * CHAR_BIT/2; i >= 0; --i )
    {
        printf("%d", (number & (1 << i)) ? 1 : 0);
    }
    printf("\n");
}
