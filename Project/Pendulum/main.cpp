#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

#include "objectDrawer.h"
#include "operationsWithMatrices.h"

void init (void)
{
   GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
   GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
   /* устанавливаем параметры источника света */
   glLightfv(GL_LIGHT1  , GL_AMBIENT, light_ambient);
   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
   glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);
   /* включаем освещение и источник света */
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   /* включаем z-буфер */
   glEnable(GL_DEPTH_TEST);
}

void reshape(int w, int h)
{

  glViewport (1, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(
    30.0, /* угол зрения в градусах */
    (GLfloat)w/h, /* коэффициент сжатия окна */
    1,20000.0);  /* расстояние до плоскостей отсечения */
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity ();
  gluLookAt(
   0.,0.0f,1000.0f, /* положение камеры */
   0.0f,0.0f,0.0f, /* центр сцены */
   0.0f,1.0f,0.0f); /* положительное направление оси y */
}


void spinTorus(void)
{
    spin += 0.002;
//    if(spin == 360) spin = 0;
    glutPostRedisplay();
}

void display (void)
{

//    glRotated(45, 0, 1, 0);
    Torus torus_1
    {
        5.,
        100.,
        {0.0f,0.0f,255.0f},
        {0.2f,0.2f,0.2f},
        {0.6f,0.6f,0.6f},
        0.5*128
    };
    Torus torus_2
    {
        5.,
        80.,
        {0.f,255.f,0.f},
        {0.2f,0.2f,0.2f},
        {0.6f,0.6f,0.6f},
        0.5*128
    };
    Torus torus_3
    {
        5.,
        60.,
        {255.f,0.f,0.f},
        {0.2f,0.2f,0.2f},
        {0.6f,0.6f,0.6f},
        0.5*128
    };
//    GLdouble rotateMatrix[16] =   {1,          0,               0,               0,
//                                   0,          cos(spin),       -sin(spin),      0,
//                                   0,          sin(spin),       cos(spin),       0,
//                                   0,          0,               0,               1};
//    GLdouble rotateMatrix[16] =   {spin,  0,               0,               -1,
//                                   0,          spin,       -1,              0,
//                                   0,          0,               spin,       0,
//                                   1,          1,               0,               spin};
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glPushMatrix();
    glPushMatrix();
//    glMultMatrixd(rotateMatrix);
    vector* check = new vector;
    check->coorX = 1/sqrt(3);
    check->coorY = 1/sqrt(3);
    check->coorZ = 1/sqrt(3);;
    // = {1.0, 0.0, 0.0};
    GLdouble rotationMatrix[16];
    memset(rotationMatrix, 0.0, 16);//] = new GLdouble[16]
    rotateMatrix(spin, &AXIS_OX, rotationMatrix);
//    glRotatef(spin, 1, 0, 0);
    drawTorus(&torus_1);
    glPopMatrix();
    memset(rotationMatrix, 0.0, 16);
    rotateMatrix(spin, &AXIS_OY, rotationMatrix);
//    glRotatef(spin, 1, 0, 0);
//    glPushMatrix();
//    glRotatef(spin, 0, 1, 0);
    drawTorus(&torus_2);
    glPopMatrix();
    memset(rotationMatrix, 0.0, 16);
    rotateMatrix(spin, &AXIS_OZ, rotationMatrix);
//    rotateMatrix(spin, &AXIS_OY, rotationMatrix);
//    glRotatef(spin, 0, 1, 0);
//    glPushMatrix();
//    glRotatef(spin, 1, 0, 0);
    drawTorus(&torus_3);
    glPopMatrix();
glPushMatrix();
    glFlush ();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize (500, 500);
   glutCreateWindow (argv[0]);
   init ();

   glutReshapeFunc (reshape);
   glutDisplayFunc (display);
   glutIdleFunc(spinTorus);
   glClearColor(0.9, 0.9, 0.9, 0.9);
   glutMainLoop();
   return 0;
}
