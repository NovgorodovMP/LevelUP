/* Домашняя работа 3
 * Задание 2
 * Найти наименьший общий делитель трех натуральных чисел (1 будет считаться наименьшим общим делителем только если других общих делителей у чисел нет)*/

#include <findLCD.h>

int main()
{
    int* threeNumbers = enterNumbers();
    findingLCD(threeNumbers);
    return 0;
}
