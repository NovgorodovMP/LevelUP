/* Домащняя работа 4
 * Задание 1
 * Поменять местами максимальный и последний отрицательный элементы массива М(40) */

#include <functionsForArrays.h>
#include <swapElements.h>


int main()
{
    initialization();
    constexpr size_t size = 10;
    int* array = createArray(size);
    fillArray(array, size);
    printArray(array, size);
    swapElements(array, size);
    printArray(array, size);
    deleteArray(array);
    return 0;
}
