#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include <time.h>
#include <stdio.h>
struct Torus
{
    float innerRadius;
    float outerRadius;
    float materialAmbient[3];
    float materialDiffuse[3];
    float materailSpecular[3];
    float materialShine;
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

  glViewport (0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(
    30.0, /* угол зрения в градусах */
    (GLfloat)w/h, /* коэффициент сжатия окна */
    1,20000.0);  /* расстояние до плоскостей отсечения */
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity ();
  gluLookAt(
   500.0f,0.0f,500.0f, /* положение камеры */
   0.0f,0.0f,0.0f, /* центр сцены */
   1.0f,1.0f,0.0f); /* положительное направление оси y */
}

static GLfloat spin = 1;
void spinTorus(void)
{
    Sleep(5);
    spin += 1;
    if(spin == 360) spin = 0;
    glutPostRedisplay();
}
void drawTorus (Torus* torus)
{
   glMaterialfv(GL_FRONT, GL_AMBIENT, torus->materialAmbient);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, torus->materialDiffuse);
   glMaterialfv(GL_FRONT, GL_SPECULAR, torus->materailSpecular);
   glMaterialf(GL_FRONT, GL_SHININESS, torus->materialShine);
   glTranslatef (0., 0., 0.0);
   glutSolidTorus(torus->innerRadius, torus->outerRadius, 100, 100);
}
void display (void)
{

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
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glPushMatrix();
    glRotatef(spin, 1, 1, 1);
    drawTorus(&torus_1);
    glPopMatrix();

    glPushMatrix();
    glRotatef(spin, 1, 1, 0);
    drawTorus(&torus_2);
    glPopMatrix();

    glPushMatrix();
    glRotatef(spin, 0, 1, 1);
    drawTorus(&torus_3);
    glPopMatrix();

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
