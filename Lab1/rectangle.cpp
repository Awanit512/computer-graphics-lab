#include "GL/freeglut.h"
#include "GL/gl.h"

void drawLine()
{
    glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0); // Line color
    // glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

        glBegin(GL_POLYGON);
                glVertex2f(0.0f, 0.0f);
                glVertex2f(0.5f, 0.0f);
                glVertex2f(0.5f, 0.2f);
                glVertex2f(0.0f, 0.2f);

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