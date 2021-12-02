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
    spin += 0.003;
//    if(spin == 360) spin = 0;
    glutPostRedisplay();
}
void initExternalTorus(double diameter, double thickness)
{
    torusExternal.outerRadius = diameter;
    torusExternal.innerRadius = thickness;

    torusMiddle.outerRadius   = 0.75 * diameter;
    torusMiddle.innerRadius   = thickness;

    torusInternal.outerRadius = 0.5 * diameter;
    torusInternal.innerRadius = thickness;
};
void display (void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
//    glPushMatrix();
//    glPushMatrix();
    GLdouble rotationMatrix[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    rotateMatrix(spin, &AXIS_OX, rotationMatrix);
    drawTorus(&torusExternal);
//    glPopMatrix();
//    rotateMatrix(spin, &AXIS_OX, rotationMatrix);
    rotateMatrix(spin, &AXIS_OY, rotationMatrix);
    drawTorus(&torusMiddle);
//    glPopMatrix();
//    rotateMatrix(spin, &AXIS_OY, rotationMatrix);
    rotateMatrix(spin, &AXIS_OX, rotationMatrix);

    drawTorus(&torusInternal);
    glPopMatrix();
//    glPushMatrix();
    glFlush ();
    glutSwapBuffers();

}
