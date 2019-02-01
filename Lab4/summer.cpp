#include "GL/freeglut.h"
#include "GL/gl.h"
#define PI 3.14
#include <math.h>

void drawHouse()
{
    glClearColor(0.603, 0.874, 0.917, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    // glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

	//House
	glBegin(GL_POLYGON);

		glColor3f(1.0, 1.0, 1.0); // Object colour
		glVertex2f(-0.2f, -0.1f);
		glVertex2f(0.2f, -0.1f);
		glVertex2f(0.2f, 0.2f);
		glVertex2f(-0.2f, 0.2f);

	glEnd();

	glBegin(GL_TRIANGLES);
		
		glColor3f(0.68f, 0.47f, 0.28f); // Object colour
		glVertex2f(-0.3f, 0.2f);
		glVertex2f(0.3f, 0.2f);
		glVertex2f(0.0f, 0.5f);

	glEnd();

	glBegin(GL_POLYGON); //Door

		glColor3f(0.68f, 0.47f, 0.28f); // Object colour
		glVertex2f(-0.05f, -0.1f);//
		glVertex2f(0.05f, -0.1f);//
		glVertex2f(0.05f, 0.0f);
		glVertex2f(-0.05f, 0.0f);

	glEnd();
	
	//glColor3f(0.68f, 0.47f, 0.28f); 
    //glRectf(-0.05f, 0.0f, -0.4f, 0.4f);


	//Sun
	glColor3f(1.0f, 1.0f, 0.0f); // Sun colour

	int i;
	int triangleAmount = 40; //# of triangles used to draw circle

	GLfloat radius = 0.1f; //radius
	GLfloat twicePi = 2.0f * PI;

	GLfloat x = 0.4, y = 0.5;   

	glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(x, y); // center of circle
	    for(i = 0; i <= triangleAmount;i++) { 
		glVertex2f(
		        x + (radius * cos(i *  twicePi / triangleAmount)), 
		        y + (radius * sin(i * twicePi / triangleAmount))
		);
	    }
	glEnd();

	//Tree
	glColor3ub(119, 79, 23); 
    glRectf(-0.5f, -0.1f, -0.45f, 0.25f);
    
    glColor3ub(20, 137, 75);
    x = -0.475, y = 0.3;
    radius = 0.175f;    
    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(x, y); // center of circle
	    for(i = 0; i <= triangleAmount;i++) { 
		glVertex2f(
		        x + (radius * cos(i *  twicePi / triangleAmount)), 
		        y + (radius * sin(i * twicePi / triangleAmount))
		);
	    }
	glEnd();
	
	//Car
	glColor3ub(214, 78, 68); 
    glRectf(0.35f, -0.05f, 0.6f, 0.05f);
    
    glColor3ub(214, 78, 68); 
    glRectf(0.45f, 0.05f, 0.55f, 0.1f);
    
    float DEG2RAD=3.14/180;
    
    
	//Wheel1
	glColor3ub(0, 0, 0);
    x = 0.45, y = -0.05;
    radius = 0.04f;    
    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(x, y); // center of circle
	    for(i = 0; i <= triangleAmount;i++) { 
		glVertex2f(
		        x + (radius * cos(i *  twicePi / triangleAmount)), 
		        y + (radius * sin(i * twicePi / triangleAmount))
		);
	    }
	glEnd();
	glBegin(GL_LINES);
                glVertex2f(0.45f, -0.05f);
                glVertex2f(0.49f, -0.05f);
    glEnd();
	
	//Wheel2
	x = 0.55, y = -0.05;
    radius = 0.04f;    
    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(x, y); // center of circle
	    for(i = 0; i <= triangleAmount;i++) { 
		glVertex2f(
		        x + (radius * cos(i *  twicePi / triangleAmount)), 
		        y + (radius * sin(i * twicePi / triangleAmount))
		);
	    }
	glEnd();
    glBegin(GL_LINES);
                glVertex2f(0.55f, -0.05f);
                glVertex2f(0.59f, -0.05f);
    glEnd();
	

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Summer");
    glutDisplayFunc(drawHouse);
    glutMainLoop();
    return 0;
}
