/* Домащняя работа 4
 * Задание 6
 * Дана строка символов. Определить, является ли она правильным скобочным выражением */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    constexpr size_t size = 255;
    printf("Please enter string: ");
    char string[size] = {};
    gets(string);
    int counter = 0;
    for (size_t i = 0; i < strlen(string); ++i)
    {
        if (string[i] == '(')
        {
            counter++;
        }
        else if (string[i] == ')')
        {
            counter--;
        }
        if (counter < 0)
        {
            printf("It is incorrect bracket sequences");
            break;
        }
    }
    if (counter == 0)
    {
        printf("It is correct bracket sequences");
    }
    else
    {
        printf("It is incorrect bracket sequences");
    }
}
