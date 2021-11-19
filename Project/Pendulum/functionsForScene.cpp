#include "functionsForScene.h"
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
    (GLdouble)w/h, /* коэффициент сжатия окна */
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
    spin += 0.0015;
//    if(spin == 360) spin = 0;
    glutPostRedisplay();
}

void display (void)
{
    Torus torus_1
    {
        13.,
        200.,
        {0.0,0.0,255.0},
        {0.2,0.2,0.2},
        {0.6,0.6,0.6},
        0.5*128
    };
    Torus torus_2
    {
        13.,
        150.,
        {0.,255.,0.},
        {0.2,0.2,0.2},
        {0.6,0.6,0.6},
        0.5*128
    };
    Torus torus_3
    {
        13.,
        100.,
        {255.,0.,0.},
        {0.2,0.2,0.2},
        {0.6,0.6,0.6},
        0.5*128
    };
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glPushMatrix();
    glPushMatrix();
    GLdouble rotationMatrix[16];
    memset(rotationMatrix, 0.0, 16);
    rotateMatrix(spin, &AXIS_OX, rotationMatrix);
    drawTorus(&torus_1);
//    glPopMatrix();
//    rotateMatrix(spin, &AXIS_OX, rotationMatrix);
    rotateMatrix(spin*2, &AXIS_OY, rotationMatrix);
    drawTorus(&torus_2);
//    glPopMatrix();
//    rotateMatrix(spin, &AXIS_OY, rotationMatrix);
    rotateMatrix(spin*3, &AXIS_OX, rotationMatrix);

    drawTorus(&torus_3);
    glPopMatrix();
    glPushMatrix();
    glFlush ();
    glutSwapBuffers();
}
