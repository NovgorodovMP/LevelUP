#include "objectDrawer.h"
#include "operationsWithMatrices.h"
#include "functionsForScene.h"

#include <stdio.h>

int main(int argc, char** argv)
{
    constexpr int windowHeight = 500;
    constexpr int windowWidth = 500;
    constexpr GLclampd redPart = 0.9;
    constexpr GLclampd greenPart = 0.9;
    constexpr GLclampd bluePart = 0.9;
    constexpr GLclampd alphaPart = 0.9;
    GLdouble externalDiameter = 100;
    GLdouble thickness = 10;
    printf("Initialize Radius and Thickness for external torus: ");
    scanf("%lf%lf", &externalDiameter, &thickness);
//    externalDiameter = externalDiameter > maximumDiameter ? maximumDiameter : externalDiameter;
    initExternalTorus(externalDiameter, thickness);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow(argv[0]);
    init();
    glutKeyboardFunc(processNormalKeys);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutTimerFunc(lengthOfFrame, spinTorus, 0);
    glClearColor(redPart, greenPart, bluePart, alphaPart);
    glutSpecialFunc(processSpecialKeys);
    glutMainLoop();
    return 0;
}
