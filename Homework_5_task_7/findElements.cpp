#include <findElements.h>
void findElements(int* arrayIn, size_t sizeIn, int* arrayFrom, size_t sizeFrom)
{
    printf("\nArray A elements with indices ");
    bool flag = true;
    for (size_t i = 0; i < sizeFrom; ++i)
    {
        flag = true;
        for (size_t j = 0; j < sizeIn && flag; ++j)
        {
            if (arrayFrom[i] == arrayIn[j])
            {
                flag = false;
            }
        }
        if (flag)
        {
            printf("%d, ", i);
        }

    }

    printf("do not appear in the array B");
}
