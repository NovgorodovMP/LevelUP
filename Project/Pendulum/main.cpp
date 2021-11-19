#include "objectDrawer.h"
#include "operationsWithMatrices.h"
#include "functionsForScene.h"

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
