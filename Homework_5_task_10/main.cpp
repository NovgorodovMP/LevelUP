/* Домащняя работа 4
 * Задание 5
 * Дана строка символов. Удалить из нее все слова нечетной длины. Слова отделяются друг от друга одним пробелом. */



#include <functionsForStringArrays.h>
#include <removeOddWords.h>

int main()
{
    char* string = createStringArray();
    fillStringArray(string);
    removeOddWords(string);
    deleteStringArray(string);
}
