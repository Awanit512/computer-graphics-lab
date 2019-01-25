#include "GL/freeglut.h"
#include "GL/gl.h"
#include <math.h>


void drawFlag()
{
    glColor3ub(0, 128, 0);
    glRectf(0.0f, 0.0f, 0.6f, 0.4f);
    
    glColor3ub(99, 72, 7);  
    glRectf(-0.02f, -0.6f, 0.0f, 0.4f);   
    
    float DEG2RAD=3.14/180;
	glBegin(GL_POLYGON);
		glColor3ub(255, 255, 255);  
		float radius = 0.1;
		for(int i = 0; i<360; i++){
			float cx = radius*sin((float)i * DEG2RAD ) + 0.3;
			float cy = radius*cos((float)i * DEG2RAD ) + 0.2;
			glVertex2f(cx,cy);
		}
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3ub(0, 128, 0); 
		for(int i = 0; i<360; i++){
			float cx = radius*sin((float)i * DEG2RAD ) + 0.35;
			float cy = radius*cos((float)i * DEG2RAD ) + 0.25;
			glVertex2f(cx,cy);
		}
	glEnd();
	
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLES);
                glVertex2f(0.4, 0.3);
                glVertex2f(0.45, 0.3);
                glVertex2f(0.425, 0.35);
        glEnd();
        
        glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLES);
                glVertex2f(0.4, 0.3375);
                glVertex2f(0.45, 0.3375);
                glVertex2f(0.425, 0.2875);
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
    glutDisplayFunc(drawFlag);
    glutMainLoop();
    return 0;
}
