/* Домащняя работа 4
 * Задание 6
 * Дана строка символов. Определить, является ли она правильным скобочным выражением */
#include <functionsForStringArrays.h>
#include <checkCorrectBracketSequences.h>

int main()
{
    char* string = createStringArray();
    fillStringArray(string);
    checkCorrectBracketSequences(string);
    deleteStringArray(string);
}
