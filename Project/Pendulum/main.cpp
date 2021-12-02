#include <stdio.h>
#include "objectDrawer.h"
#include "operationsWithMatrices.h"
#include "functionsForScene.h"

int main(int argc, char** argv)
{
    float externalDiameter;
    float thickness;
    printf("Initialize toruses: ");
    scanf("%f%f", &externalDiameter, &thickness);
    initExternalTorus(externalDiameter, thickness);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    int windowHeight = 500;
    int windowWidth = 500;
    glutInitWindowSize (windowWidth, windowHeight);
    glutCreateWindow (argv[0]);
    init ();
    glutReshapeFunc (reshape);
    glutDisplayFunc (display);
    glutIdleFunc(spinTorus);
    GLclampd redPart = 0.9;
    GLclampd greenPart = 0.9;
    GLclampd bluePart = 0.9;
    GLclampd alphaPart = 0.9;
    glClearColor(redPart, greenPart, bluePart, alphaPart);
    glutMainLoop();
    return 0;
}
