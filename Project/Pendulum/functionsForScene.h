#ifndef FUNCTIONSFORSCENE_H
#define FUNCTIONSFORSCENE_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include "operationsWithMatrices.h"
#include "objectDrawer.h"
void init (void);
void reshape(int w, int h);
void spinTorus(void);
void display (void);
#endif // FUNCTIONSFORSCENE_H
