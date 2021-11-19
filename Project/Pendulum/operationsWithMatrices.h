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

static vector AXIS_OX= {1, 0, 0};
static vector AXIS_OY= {0, 1, 0};
static vector AXIS_OZ= {0, 0, 1};



void createRotationMatrix(GLdouble angle, vector* quat, GLdouble* rotationMatrix);
void rotateMatrix(GLdouble angle, vector* quat, GLdouble *rotationMatrix);
void shiftMatrix(GLdouble shiftX, GLdouble shiftY, GLdouble shiftZ);

#endif // OPERATIONSWITHMATRICES_H
