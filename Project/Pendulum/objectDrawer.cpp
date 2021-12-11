#include "objectDrawer.h"

void drawTorus (Torus torus)
{
   glMaterialfv(GL_FRONT, GL_AMBIENT, torus.materialAmbient);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, torus.materialDiffuse);
   glMaterialfv(GL_FRONT, GL_SPECULAR, torus.materailSpecular);
   glMaterialf(GL_FRONT, GL_SHININESS, torus.materialShine);
   glutSolidTorus(torus.innerRadius, torus.outerRadius, 100, 100);
}


