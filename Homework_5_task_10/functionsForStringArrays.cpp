#include <functionsForStringArrays.h>


char* createStringArray()
{
    char* string = new char[255];
    return string;
}

void deleteStringArray(char* string)
{
    if (string == nullptr) return;
    delete[] string;
}

void fillStringArray(char* string)
{
    printf("Please enter string: ");
    gets(string);
}

