#ifndef FUNCTIONSFORSCENE_H
#define FUNCTIONSFORSCENE_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include "operationsWithMatrices.h"
#include "objectDrawer.h"
constexpr int lengthOfFrame = 20;
constexpr GLdouble shift = 10;
void init (void);
void reshape(int w, int h);
void spinTorus(int);
void display (void);
void initExternalTorus(float diameter, double thickness);
void processSpecialKeys(int key, int x, int y);
void processNormalKeys(unsigned char key, int x, int y);
#endif // FUNCTIONSFORSCENE_H
