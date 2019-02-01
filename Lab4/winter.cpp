#include "GL/freeglut.h"
#include "GL/gl.h"
#define PI 3.14
#include <math.h>

void drawHouse()
{
    glClearColor(0.825, 0.866, 0.878, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3ub(255, 255, 255); 
    glRectf(-1.0f, -1.0f, 1.0f, -0.1f);
    
    int i;
	int triangleAmount = 40; //# of triangles used to draw circle

	GLfloat radius; //radius
	GLfloat twicePi = 2.0f * PI;

	GLfloat x, y;  

	//House
	glBegin(GL_POLYGON);

		glColor3ub(193, 176, 129); // Object colour
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
    
    //Snowman
    x = -0.8, y = 0.0;
    radius = 0.15f; 
    glColor3ub(255, 255, 255);   
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
    
    x = -0.8, y = 0.2f;
    radius = 0.1f; 
    glColor3ub(255, 255, 255);   
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
    
    //Eye
    glBegin(GL_LINES);
    			glColor3ub(0, 0, 0);
                glVertex2f(-0.81f, 0.2f);
                glVertex2f(-0.82f, 0.2f);
    glEnd();
    
    glBegin(GL_LINES);
    			glColor3ub(0, 0, 0);
                glVertex2f(-0.78f, 0.2f);
                glVertex2f(-0.79f, 0.2f);
    glEnd();
    
    for(float h=-1;h<2;h+=0.1){
		for(float k=0.0;k<2;k+=0.1){
			glBegin(GL_POLYGON);
				glColor3ub(255,250,250);
				float radius1 = 0.015;
				for(int i = 0; i<360; i++){
					float cx = radius1*cosf(DEG2RAD*i)-1+k+h;
					float cy = radius1*sinf(DEG2RAD*i)+1-k;
					glVertex2f(cx,cy);
				}
			glEnd();
		}
}
	

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
