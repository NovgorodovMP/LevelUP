/* Домашняя работа 3
 * Задание 4
 * Перевести из десятичной системы счисления в двоичную*/

#include <dec2bin.h>

int main()
{

    int number = enterNumber();
    int* binary = dec2bin(number);
    delete[] binary;
    return 0;
}
