#include <math.h>
#include "GL/freeglut.h"
#include "GL/gl.h"

#define PI 3.14

void drawHollowCircle(){//GLfloat x, GLfloat y){

	glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.68f, 0.47f, 0.28f); // Object colour
	
	int lineAmount = 100; //# of triangles used to draw circle
	
	GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	GLfloat x = 0.0; GLfloat y = 0.0;

	glBegin(GL_LINE_LOOP);
		for(int i = 0; i <= lineAmount;i++) { 
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)), 
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Line");
    glutDisplayFunc(drawHollowCircle);
    glutMainLoop();
    return 0;
}