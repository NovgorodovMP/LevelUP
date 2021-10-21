#include <swapRowColumn.h>
int enterK()
{
    int k = 1;
    printf("Enter k: ");
    scanf("%d", &k);
    k = k > 7 ? 6 : k - 1;
    k = k > 0 ? k : 1;
    return k;
}
void swapRowColumn(int** array, size_t size)
{
    int k = enterK();
    int temporary = 0;
    for (size_t i = 0; i < size; ++i)
    {
        temporary = array[k][i];
        array[k][i] = array[i][k];
        array[i][k] = temporary;
    }
}
