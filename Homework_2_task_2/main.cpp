/* Домашняя работа 2
 * Задание 2
 * Программа определяет, площадь какой фигуры больше: круга с радиусом R, равностороннего треугольника со стороной a, квадрата со стороной d*/
#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    double sideOfTriangle;
    double sideOfSquare;

    printf("Please, enter R for circle: " );
    scanf("%lf", &radius);

    printf("Please, enter A for triangle: " );
    scanf("%lf", &sideOfTriangle);

    printf("Please, enter D for square: " );
    scanf("%lf", &sideOfSquare);

    double areaOfCircle     = M_PI * pow(radius, 2);
    double areaOfTriangle   = (pow(sideOfTriangle, 2) * sqrt(3)) / 4;
    double areaOfSquare     = pow(sideOfSquare, 2);

    printf("Area of circle is %.2f\n",   areaOfCircle);
    printf("Area of triangle is %.2f\n", areaOfTriangle);
    printf("Area of square is %.2f\n",   areaOfSquare);

    printf(areaOfCircle >= areaOfTriangle ?
               (areaOfCircle >= areaOfSquare ? "Circle has the largest area" : "Square has the largest area")
             : (areaOfTriangle >= areaOfSquare ? "Triangle has the largest area" : "Square has the largest area"));
    return 0;
}
