#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//1st

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (10 , 40);
glVertex2d ( 50, 50 );
glVertex2d ( 10, 60 );
glVertex2d ( 0, 100 );
glVertex2d (-10, 60);
glVertex2d ( -50, 50 );
glVertex2d ( -10, 40 );
glVertex2d ( 0, 0 );
glEnd();

//2nd
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (-10 , -40);
glVertex2d ( -50, -50 );
glVertex2d ( -10, -60 );
glVertex2d ( 0, -100 );
glVertex2d (10, -60);
glVertex2d ( 50, -50 );
glVertex2d ( 10, -40 );
glVertex2d ( 0, 0 );
glEnd();

//3rd
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d (40 , 10);
glVertex2d ( 50, 50 );
glVertex2d ( 60, 10 );
glVertex2d ( 100, 0 );
glVertex2d (60, -10);
glVertex2d ( 50, -50 );
glVertex2d ( 40, -10 );
glVertex2d ( 0, 0 );
glEnd();
//4th
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d (-40 , -10);
glVertex2d ( -50, -50 );
glVertex2d ( -60, -10 );
glVertex2d ( -100, 0 );
glVertex2d (-60, 10);
glVertex2d ( -50, 50 );
glVertex2d ( -40, 10 );
glVertex2d ( 0, 0 );
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
gluOrtho2D(-500, 500, -500, 500);
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
