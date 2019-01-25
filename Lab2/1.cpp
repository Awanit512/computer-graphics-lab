#include "GL/freeglut.h"
#include "GL/gl.h"
#include <math.h>


#define PI 3.14

void draw()
{
    glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 0.0f); //Object colour
    // glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

        glBegin(GL_POLYGON);
                glVertex2f(0.0f, 0.0f);
                glVertex2f(0.5f, 0.0f);
                glVertex2f(0.5f, 0.5f);
                glVertex2f(0.0f, 0.5f);

        glEnd();

    glColor3f(0.68f, 0.47f, 0.28f); // Object colour

    int i;
    int triangleAmount = 40; //# of triangles used to draw circle
    
    GLfloat radius = 0.25f; //radius
    GLfloat twicePi = 2.0f * PI;
    
    GLfloat x = 0.25, y = 0.25;   

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
        glColor3f(0.68f, 0.47f, 0.28f); // Object colour
        glVertex2f(0.25,0.25);
        glVertex2f(0.5,0.25);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Square");
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}