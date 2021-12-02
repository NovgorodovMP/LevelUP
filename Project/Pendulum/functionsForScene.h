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
void initExternalTorus(double diameter, double thickness);
static double torusThickness = 15.;
static double externalTorusDiameter = 200.;
static Torus torusExternal
                            {
                            torusThickness,
                            externalTorusDiameter,
                            {0.0,0.0,255.0},
                            {0.2,0.2,0.2},
                            {0.6,0.6,0.6},
                            0.5*128
                            };
static Torus torusMiddle
                            {
                            torusThickness,
                            0.75 * externalTorusDiameter,
                            {0.,255.,0.},
                            {0.2,0.2,0.2},
                            {0.6,0.6,0.6},
                            0.5*128
                            };

static Torus torusInternal
                            {
                            torusThickness,
                            0.5 * externalTorusDiameter,
                            {255.,0.,0.},
                            {0.2,0.2,0.2},
                            {0.6,0.6,0.6},
                            0.5*128
                            };
#endif // FUNCTIONSFORSCENE_H
