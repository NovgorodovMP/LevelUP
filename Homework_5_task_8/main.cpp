/* Домащняя работа 4
 * Задание 3
 * Дана матрица 7х7. Поменять местами k-ый столбец с k-ой строкой */



#include <functionsFor2DArrays.h>
#include <swapRowColumn.h>
int main()
{
    constexpr size_t size = 7;
    initialization();
    int** array2D = createArray(size);
    fillArray(array2D, size);
    printArray(array2D, size);
    int swapper = enterK();
    swapRowColumn(array2D, size, swapper);
    printArray(array2D, size);
    deleteArray(array2D);
    return 0;
}
