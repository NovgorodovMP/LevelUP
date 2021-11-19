#include "operationsWithMatrices.h"

#include <stdio.h>
//AXIS_OX = {1, 0, 0};
//AXIS_OY = {0, 1, 0};
//AXIS_OZ = {0, 0, 1};


void createRotationMatrix(GLdouble angle, vector* quat, GLdouble* rotationMatrix)
{
//    GLdouble rotationMatrix[16];//] = new GLdouble[16];
    GLdouble localAngle = angle / 2;
    GLdouble scalar = cos(localAngle);
    GLdouble localX = sin(localAngle) * quat->coorX;
    GLdouble localY = sin(localAngle) * quat->coorY;
    GLdouble localZ = sin(localAngle) * quat->coorZ;
//    memset(rotationMatrix, 0.0, 16);
    rotationMatrix[0]   = 1 - 2 * (pow(sin(localAngle)*localY, 2) + pow(sin(localAngle)*localZ, 2));
    rotationMatrix[1]   = 2 * (localX * localY - scalar * localZ);
    rotationMatrix[2]   = 2 * (localX * localZ + scalar * localY);
    rotationMatrix[3]   = 0;

    rotationMatrix[4]   = 2 * (localX * localY + scalar * localZ);
    rotationMatrix[5]   = 1 - 2 * (pow(sin(localAngle)*localX, 2) + pow(sin(localAngle)*localZ, 2));
    rotationMatrix[6]   = 2 * (localY * localZ - scalar * localX);
    rotationMatrix[7]   = 0;

    rotationMatrix[8]   = 2 * (localX * localZ - scalar * localY);
    rotationMatrix[9]   = 2 * (localY * localZ + scalar * localX);
    rotationMatrix[10]  = 1 - 2 * (pow(sin(localAngle)*localX, 2) + pow(sin(localAngle)*localY, 2));
    rotationMatrix[11]  = 0;

    rotationMatrix[12]  = 0;
    rotationMatrix[13]  = 0;
    rotationMatrix[14]  = 0;
    rotationMatrix[15]  = 1;
//    return rotationMatrix;

}
void rotateMatrix(GLdouble angle, vector* quat, GLdouble* rotationMatrix)
{
//    printf("we are here");
    createRotationMatrix(angle, quat, rotationMatrix);
    glMultMatrixd(rotationMatrix);
}
