#include <stdlib.h>
#include <GL/glut.h>

void mydisplay() {

    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);

    //glutWireTeapot(5.0);	 
    glPointSize(10.0);

    /*glBegin(GL_POINTS);
       glVertex3f(0.0, 0.0, 0.0);
    glEnd();*/

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3d(0.0, 0.0, 0.0);
    glVertex3d(10.0, 10.0, 0.0);
    glEnd();

    glFlush();
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20.0, 20.0, -20.0, 20.0, -20.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
}


void main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("simple");
    glutDisplayFunc(mydisplay);

    init();

    glutMainLoop();
}