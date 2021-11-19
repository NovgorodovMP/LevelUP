#ifndef OBJECTDRAWER_H
#define OBJECTDRAWER_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <operationsWithMatrices.h>
static GLdouble spin = 0;
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
void drawPenechki();
//void spinTorus(void);
//void display (void);
#endif // OBJECTDRAWER_H
