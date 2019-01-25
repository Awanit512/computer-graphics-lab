#include "GL/freeglut.h"
#include "GL/gl.h"
#define PI 3.14
#include <math.h>

void drawHouse()
{
    glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    // glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

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

        glBegin(GL_POLYGON);

                glColor3f(0.68f, 0.47f, 0.28f); // Object colour
                glVertex2f(-0.05f, -0.1f);//
                glVertex2f(0.05f, -0.1f);//
                glVertex2f(0.05f, 0.0f);
                glVertex2f(-0.05f, 0.0f);

        glEnd();

        glColor3f(1.0f, 1.0f, 0.0f); // Object colour

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


    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - House");
    glutDisplayFunc(drawHouse);
    glutMainLoop();
    return 0;
}