
#include <removeOddWords.h>
void removeOddWords(char* string)
{
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
            counter = 0;
        }
        else
        {
            counter++;
        }
    }
}
