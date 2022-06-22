#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f(1.0,0.25,1.0);
glBegin(GL_POLYGON);
glVertex2d(200,200);
glVertex2d (200,500);
glVertex2d (500,500);
glVertex2d (500,200);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2d(200,500);
glVertex2d(500,500);
glVertex2d(350,600);
glEnd();
glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2d(300,200);
glVertex2d (400,200);
glVertex2d (400,350);
glVertex2d (300,350);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2d(200,300);
glVertex2d (250,300);
glVertex2d (250,350);
glVertex2d (200,350);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2d(450,300);
glVertex2d(450,350);
glVertex2d(500,350);
glVertex2d(500,300);
glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
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

