/* Домашняя работа 1
 * Задание 2
 * Программа вычисляет значения заданных выражений*/
#include <stdio.h>

int main()
{
    int a = 5;
    int c = 5;
    int b;
    int d;
    printf("Enter 'b': ");
    scanf("%d", &b);
    printf("Enter 'd': ");
    scanf("%d", &d);
    printf("a = %d,\t b = %d,\t c = %d,\t d = %d\n", a, b, c, d);
    printf("a = a + b - 2 = %d\n", a = a + b - 2);
    printf("c = c + 1 = %d\n", c = c + 1);
    printf("d = c - a + d = %d\n", d = c - a + d);
    printf("a = a * c = %d\n", a = a * c);
    printf("c = c - 1 = %d\n", c = c - 1);
    printf("a = a / 10 = %d\n", a = a / 10);
    printf("c = c / 2 = %d\n", c = c / 2);
    printf("b = b - 1 = %d\n", b = b - 1);
    printf("d = d * (c + b + a) = %d\n", d = d * (c + b + a));
    return 0;
}

