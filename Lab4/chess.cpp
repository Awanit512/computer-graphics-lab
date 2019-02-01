#include "GL/freeglut.h"
#include "GL/gl.h"

void drawChess(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
	//glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(0, 100, 0, 100);
	
	//glColor3ub(255, 255, 255); 
	//glRectf(10.0, 10.0, 20.0, 20.0);
	
	float x = 0.0, y = 0.0;
	int black = 1;
	for(int i = 0; i < 8; ++i) {
		if(i%2)
			black = 1;
		else
			black = 0;
		for(int j = 0; j < 8; ++j) {
			
			if(!black){
				glColor3ub(255, 255, 255); 
				glRectf(x, y, x+0.08, y+0.08);
				black = 1;
			}
			else {
				glColor3ub(0, 0, 0); 
				glRectf(x, y, x+0.08, y+0.08);
				black = 0;
			}
			x += 0.08;		
		}
		x = 0.0;
		y += 0.08;
	}
	
	glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Chess");
    glutDisplayFunc(drawChess);
    glutMainLoop();
    return 0;
}
