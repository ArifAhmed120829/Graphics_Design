
#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include <dos.h>
int x,y,tx,ty;
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    /* clear all pixels */
    glColor3f (1.0, 0.25, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(x,y);
    glVertex2d (x+20,y);
    glVertex2d (x+20,y+20);
    glVertex2d (x,y+20);
    glEnd();

    if(x>400-20)x=0;
    x+=20;
    glFlush ();
    glutPostRedisplay();


}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,400,-100,100);


}
    int main(int argc, char** argv)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (500, 500);
        glutInitWindowPosition (100, 100);
        glutCreateWindow ("191-15-12301");
        init ();
        glutDisplayFunc(display);
        glutMainLoop();
        return 0; /* ISO C requires main to return int. */
    }
