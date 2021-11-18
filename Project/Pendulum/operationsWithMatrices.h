#ifndef OPERATIONSWITHMATRICES_H
#define OPERATIONSWITHMATRICES_H
#include <GL/gl.h>
#include <math.h>
struct vector
{
    GLdouble coorX;
    GLdouble coorY;
    GLdouble coorZ;
};

GLdouble* createRotationMatrix(GLdouble angle, vector* quat);
void rotateMatrix(GLdouble* rotationMatrix);
void shiftMatrix(GLdouble shiftX, GLdouble shiftY, GLdouble shiftZ);

#endif // OPERATIONSWITHMATRICES_H
