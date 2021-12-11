#include "functionsForScene.h"
static double torusThickness = 15.;
static double externalTorusDiameter = 500.;
static Torus torusExternal
                            {
                            torusThickness,
                            externalTorusDiameter,
                            {0.0, 0.0, 255.0},
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
  glLoadIdentity();
  gluPerspective(   30.0, /* угол зрения в градусах */
                    (GLdouble)w/h, /* коэффициент сжатия окна */
                    1,10000.0);  /* расстояние до плоскостей отсечения */
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(    0.0f,0.0f, 1000, /* положение камеры */
                0.0f,0.0f,0.0f, /* центр сцены */
                0.0f,1.0f,0.0f); /* положительное направление оси y */
}

void spinTorus(int value)
{
    spin += 0.05;
    glutPostRedisplay();
    glutTimerFunc(lengthOfFrame, spinTorus, 0);
}

void initExternalTorus(float diameter, double thickness)
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
    GLdouble rotationMatrix[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    rotateMatrix(spin, AXIS_OX, rotationMatrix);
    drawTorus(torusExternal);
    rotateMatrix(spin, AXIS_OY, rotationMatrix);
    drawTorus(torusMiddle);
    rotateMatrix(spin, AXIS_OX, rotationMatrix);
    drawTorus(torusInternal);
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
};

void processNormalKeys(unsigned char key, int x, int y) {

    if (key == 27)
        exit(0);
}

void processSpecialKeys(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_DOWN:
                glTranslated(0, 0, -shift);
                break;
        case GLUT_KEY_UP:
                glTranslated(0, 0, +shift);
                break;
    }

}
