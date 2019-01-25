#include "GL/freeglut.h"
#include "GL/gl.h"
#include <math.h>


void drawFlag()
{
    glColor3ub(0, 128, 0);
    glRectf(0.0f, 0.0f, 0.9f, 0.2f);
    
    glColor3ub(255, 255, 255); 
    glRectf(0.0f, 0.2f, 0.9f, 0.4f);
    
    glColor3ub(244, 146, 66);  
    glRectf(0.0f, 0.4f, 0.9f, 0.6f);
    
    glColor3ub(99, 72, 7);  
    glRectf(-0.02f, -0.6f, 0.0f, 0.6f);    
    
    float DEG2RAD=3.14/180;
	glBegin(GL_LINE_LOOP);
		glColor3ub(2, 13, 137);  
		float radius = 0.1;
		for(int i = 0; i<360; i++){
			float cx = radius*sin((float)i * DEG2RAD ) + 0.45;
			float cy = radius*cos((float)i * DEG2RAD ) + 0.3;
			glVertex2f(cx,cy);
		}
	glEnd();
	
	glBegin(GL_LINES);
		glColor3ub(2, 13, 137); 	
		for(int i = 0; i<360; i+=15){
			glVertex2f(0.45, 0.3);
			float cx = radius*sin((float)i * DEG2RAD ) + 0.45;
			float cy = radius*cos((float)i * DEG2RAD ) + 0.3;
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
    glutDisplayFunc(drawFlag);
    glutMainLoop();
    return 0;
}
