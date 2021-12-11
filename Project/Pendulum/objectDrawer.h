#ifndef OBJECTDRAWER_H
#define OBJECTDRAWER_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <operationsWithMatrices.h>
static GLdouble spin = 0;


const GLfloat greenColor[3] = {0.0f, 0.0f, 255.0f};
const GLfloat blueColor[3] = {0.,255.,0.};
const GLfloat redColor[3] = {255.,0.,0.};

const GLfloat diffuse[3] =    {0.2,0.2,0.2};
const GLfloat specular[3] =   {0.6,0.6,0.6};
const GLfloat shine = 0.5*128;
struct Torus
{
    GLdouble innerRadius;
    GLdouble outerRadius;
    const GLfloat materialAmbient[3];
    const GLfloat materialDiffuse[3];
    const GLfloat materailSpecular[3];
    const GLfloat materialShine;
};


void drawTorus(Torus torus);
void drawPenechki();
#endif // OBJECTDRAWER_H
