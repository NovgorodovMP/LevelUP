
#include "removeOddWords.h"
void removeOddWords(char* string, char* resultString)
{

    char delimeter = ' ';
    char word[255];
    char* ptr = string;

    do
    {
        if(sscanf(ptr, "%s", word) == EOF)
        {
            break;
        }
        if (strlen(word) % 2 == 0)
        {
            fprintf(stdout, "%s\n", word);
            strcat(resultString, word);
            resultString[strlen(word)] = delimeter;
        }
        ptr += strlen(word);
        while (*ptr && *ptr == delimeter) ++ptr;
    }
    while(true);

}
