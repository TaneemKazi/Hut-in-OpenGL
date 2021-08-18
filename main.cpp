#include <windows.h>
#include <GL\glut.h>

void myInit (void)

{

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluOrtho2D(0.0, 500.0, 0.0, 400.0);

}


void myDisplay(void)

{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.f, 1.f, 1.f);

    glPointSize(4.0);

    glBegin(GL_POLYGON);

    glVertex2i (20, 20);
    glVertex2i (320, 20);

    glVertex2i (20, 200);
    glVertex2i (320, 200);

    glVertex2i (20, 200);
    glVertex2i (20, 20);

    glVertex2i (320, 200);
    glVertex2i (320, 20);

    glEnd();



    glColor3f(1.0f,0.0f,0.0f);
    glPointSize(4.0);//4.0
    glRectf(30, 30, 100, 120);//30 30 100 100 (x1, y1; x2, y2)


    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);

    //top
    glVertex2i (235, 30);
    glVertex2i (235, 120);

    //left
    glVertex2i (310, 120);
    glVertex2i (310, 30);

    //glVertex2i (10, -50);

    glEnd();



    glColor3f(0.0f,0.0f,1.0f) ;
    glBegin(GL_POLYGON);
    //left

    glVertex2i (120, 20);
    glVertex2i (120, 100);

    //top
    glVertex2i (120, 130);
    glVertex2i (220, 130);

    //right
    glVertex2i (220, 20);
    glVertex2i (170, 30);

    //bottom
    glVertex2i (120, 30);
    glVertex2i (170, 30);


//door ends

    glEnd();


//Triangle

    glColor3f(0.0f,1.0f,0.0f) ;
    glBegin(GL_POLYGON);
    //bottom

    glVertex2i (20, 200);
    glVertex2i (320, 200);

    //top
    glVertex2i (180, 310);
    glVertex2i (320, 200);

    //left
    glVertex2i (20, 200);
    glVertex2i (200, 310);

    glEnd();

    glFlush();

}
int main (int argc, char **argv)
{

    glutInit (&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (640, 480);

    glutInitWindowPosition (500, 200);

    glutCreateWindow ("Hut");

    glutDisplayFunc (myDisplay);
    myInit();
    glutMainLoop();
    return 0;
}
