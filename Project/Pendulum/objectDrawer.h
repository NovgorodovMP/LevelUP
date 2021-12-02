#ifndef OBJECTDRAWER_H
#define OBJECTDRAWER_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <operationsWithMatrices.h>
static GLdouble spin = 0;
struct Torus
{
    double innerRadius;
    double outerRadius;
    float materialAmbient[3];
    float materialDiffuse[3];
    float materailSpecular[3];
    float materialShine;
};


void drawTorus(Torus* torus);
void drawPenechki();
#endif // OBJECTDRAWER_H
