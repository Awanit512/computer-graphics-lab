#include <math.h>
#include "GL/freeglut.h"
#include "GL/gl.h"

#define PI 3.14

void drawCircle()
{
	float DEG2RAD=3.14/180;
    glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.68f, 0.47f, 0.28f); // Object colour

    int i;
	int triangleAmount = 11; //# of triangles used to draw circle
	
	GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	
	GLfloat x = 0, y = 0;

		

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) { 
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)), 
			    	y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glVertex2f( 0,0 );
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f); // Object colour
	radius = 0.8;
	for(int i = 0; i<360; i++){
		float cx = radius*sin((float)i * DEG2RAD );
		float cy = radius*cos((float)i * DEG2RAD );
		glVertex2f(cx,cy);
	}
	glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Line");
    glutDisplayFunc(drawCircle);
    glutMainLoop();
    return 0;
}