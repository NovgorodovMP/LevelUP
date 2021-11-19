#ifndef OBJECTDRAWER_H
#define OBJECTDRAWER_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
static GLdouble spin = 1;
struct Torus
{
    float innerRadius;
    float outerRadius;
    float materialAmbient[3];
    float materialDiffuse[3];
    float materailSpecular[3];
    float materialShine;
};
void drawTorus(Torus* torus);
#endif // OBJECTDRAWER_H
