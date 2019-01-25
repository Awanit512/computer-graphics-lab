#include "GL/freeglut.h"
#include "GL/gl.h"

void drawLine()
{
    glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.68f, 0.47f, 0.28f); //Object colour
    // glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

        glBegin(GL_POLYGON);
                glVertex2f(0.3f, 0.0f); //+x axis

                glVertex2f(0.2f, 0.1f); //q1
                glVertex2f(0.1f, 0.2f); //q1

                glVertex2f(0.0f, 0.3f); //+y axis
                glVertex2f(-0.2f, 0.2f); //q2
                glVertex2f(-0.3f, 0.0f); //-x axis
                glVertex2f(-0.2f, -0.2f); //q3
                glVertex2f(0.0f, -0.3f); //-y axis
                glVertex2f(0.2f, -0.2f); //q4
                
                

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
    glutDisplayFunc(drawLine);
    glutMainLoop();
    return 0;
}