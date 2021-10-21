#include <functionsFor2DArrays.h>

void initialization()
{
    srand(time(nullptr));
}
int** createArray(size_t size)
{
    int** array = new int*[size];
    for(size_t i = 0; i < size; ++i)
    {
        array[i] = new int[size];
    }
    return array;
}

void deleteArray(int** array)
{
    if (array == nullptr) return;
    delete[] array;
}

void fillArray(int** array, size_t size)
{
    if (array == nullptr) return;
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size; ++j)
        {
            array[i][j] = rand() % 100;
        }
    }
}

void printArray(int** array, size_t size)
{
    if (array == nullptr) return;
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size; ++j)
        {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}
