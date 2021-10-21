/* Домащняя работа 4
 * Задание 2
 * Определить положение элементов массива А(30), не встречающихся в массиве В(15) */


#include <functionsForArrays.h>
#include <findElements.h>
int main()
{
    constexpr size_t sizeA = 30;
    constexpr size_t sizeB = 15;
    initialization();
    int* arrayA = createArray(sizeA);
    int* arrayB = createArray(sizeB);
    fillArray(arrayA, sizeA);
    printArray(arrayA, sizeA);

    fillArray(arrayB, sizeB);
    printArray(arrayB, sizeB);

    findElements(arrayB, sizeB, arrayA, sizeA);
    deleteArray(arrayA);
    deleteArray(arrayB);
    return 0;

}
