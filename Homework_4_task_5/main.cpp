/* Домащняя работа 4
 * Задание 5
 * Дана строка символов. Удалить из нее все слова нечетной длины. Слова отделяются друг от друга одним пробелом. */


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
        if (string[i] == ' ')
        {
            if(counter % 2 == 0)
            {
                for (size_t j = i - counter; j < i; ++j)
                {
                    printf("%c", string[j]);
                }
                printf(" ");
            }
            else
            {
                for (size_t j = i - counter; j < i; ++j)
                {
                    string[j] = ' ';
                }
            }
            counter = 0;

        }
        else if (i == strlen(string) - 1)
        {
            if(counter % 2 == 1)
            {
                for (size_t j = i - counter; j <= i; ++j)
                {
                    printf("%c", string[j]);
                }
                printf(" ");
            }
            else
            {
                for (size_t j = i - counter; j <= i; ++j)
                {
                    string[j] = ' ';
                }
            }
            counter = 0;
        }
        else
        {
            counter++;
        }
    }
}
