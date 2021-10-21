/* Домащняя работа 4
 * Задание 4
 * Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали */

#include <functionsFor2DArrays.h>
#include <calculateSum.h>
int main()
{
    constexpr size_t size = 7;
    initialization();
    int** array2D = createArray(size);
    fillArray(array2D, size);
    printArray(array2D, size);
    calculateSum(array2D, size);
    deleteArray(array2D);
    return 0;
}
