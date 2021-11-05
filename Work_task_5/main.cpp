/*Задача 5.
Алгоритм A*.
Дана матрица bool. Матрица представляет собой лабиринт.
True — можно пройти.
False — нельзя пройти.

Дана начальная точка и точка выхода из лабиринта.
Найти минимальное число шагов до выхода из лабиринта.*/
#include <stdio.h>
#include <limits.h>
struct Pair
{
    int first;
    int second;
};

int find( bool** mass, int x, int y, Pair start, Pair exit )
{
//    constexpr int x = 5;
//    constexpr int y = 10;
//    bool lab[x][y] = {{true,   true,     true,     true,      false,     true,   true,     true,     true,     true},
//                      {true,   false,    false,    true,      false,     true,   true,     true,     true,     true},
//                      {true,   true,     true,     true,      false,     true,   true,     true,     true,     true},
//                      {true,   true,     true,     true,      true,      false,   false,   true,     true,     true},
//                      {true,   true,     true,     true,      true,      true,    true,    true,     true,     true}};
    int steps[255][255];
    for (size_t i = 0; i < 255; ++i)
    {
        for (size_t j = 0; j < 255; ++j)
        {
            steps[i][j] = 0;
        }
    }
    int currX = start.first;
    int currY = start.second;
    steps[currX][currY] = 1;
    int currValue = 1;
    while(true)
    {
        for (int i = 0; i < x; ++i)
        {
            for (int j = 0; j < y; ++j)
            {
                if(steps[i][j] == currValue && mass[i][j])
                {
                    mass[i][j] = false;
                    if ((i + 1) < x && steps[i + 1][j] != currValue && mass[i + 1][j])
                    {
                        steps[i + 1][j] = currValue + 1;
                    }

                    if ((j + 1) < y && steps[i][j + 1] != currValue && mass[i][j + 1])
                    {
                        steps[i][j + 1] = currValue + 1;
                    }

                    if ((i - 1) >= 0 && steps[i - 1][j] != currValue && mass[i - 1][j])
                    {
                        steps[i - 1][j] = currValue + 1;
                    }

                    if ((j - 1) >= 0 && steps[i][j - 1] != currValue && mass[i][j - 1])
                    {
                        steps[i][j - 1] = currValue + 1;
                    }

                }

            }

        }

        if (steps[exit.first][exit.second] != 0) return currValue;
        currValue++;
//        for (int i = 0; i < x; ++i)
//        {
//            for (int j = 0; j < y; ++j)
//            {
//                printf("%3d ", steps[i][j]);
//            }
//            printf("\n");
//        }
//        printf("------------\n");
//        std::cin >> currX;
    }



}

int main()
{
    constexpr int x = 5;
    constexpr int y = 10;
    bool** lab = new bool*[x]{new bool[y] {true,   true,     true,     true,      false,     true,   true,     true,     true,     true},
                              new bool[y] {true,   false,    false,    true,      false,     true,   true,     true,     true,     true},
                              new bool[y] {true,   true,     true,     true,      false,     true,   true,     true,     true,     true},
                              new bool[y] {true,   true,     true,     true,      true,      false,   false,   true,     true,     true},
                              new bool[y] {true,   true,     true,     true,      true,      true,    true,    true,     true,     true}};
    printf("%d\n", find(lab, x, y, {0, 0}, {2, 5}));

    for (int i = 0; i < x; ++i)
    {
        delete[] lab[i];
    }
}
