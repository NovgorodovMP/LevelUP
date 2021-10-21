#include <functionsForArrays.h>

void initialization()
{
    srand(time(nullptr));
}
int* createArray(size_t size)
{
    int* array = new int[size];
    return array;
}

void deleteArray(int* array)
{
    if (array == nullptr) return;
    delete[] array;
}

void fillArray(int* array, size_t size)
{
    if (array == nullptr) return;
    for (size_t i = 0; i < size; ++i)
    {
        array[i] = rand() % 100;
    }
}

void printArray(int* array, size_t size)
{
    if (array == nullptr) return;
    for (size_t i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
