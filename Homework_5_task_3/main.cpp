/* Домашняя работа 3
 * Задание 3
 * Поменять местами цифры старшего и младшего разрядов данного натурального числа (например, 3879 -> 9873)*/

#include <switchDigits.h>

int main()
{
    int number = enterNumber();
    switchDigits(number);
    return 0;
}
