#include <checkCorrectBracketSequences.h>
void checkCorrectBracketSequences(char* string)
{
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
            break;
        }
    }
    if (counter == 0)
    {
        printf("It is correct bracket sequences\n");
    }
    else
    {
        printf("It is incorrect bracket sequences\n");
    }
}
