#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
/*
first pic
*/
glColor3f (1.0, 0.0,1.0);
glBegin(GL_LINES);
glVertex2i(25,175);
glVertex2i(50,150);
glVertex2i(25,175);
glVertex2i(50,215);
glVertex2i(50,150);
glVertex2i(50,165);
glVertex2i(50,200);
glVertex2i(50,215);
glVertex2i(100,165);
glVertex2i(50,165);
glVertex2i(100,200);
glVertex2i(50,200);
glVertex2i(100,165);
glVertex2i(100,150);
glVertex2i(100,200);
glVertex2i(100,215);
glVertex2i(125,175);
glVertex2i(100,215);
glVertex2i(125,175);
glVertex2i(100,150);

glEnd();

/*
second pic
*/
glColor3f (0.0, 0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2i(125,175);
glVertex2i(150,200);
glVertex2i(175,175);

glEnd();
glColor3f (0.0, 0.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2i(125,175);
glVertex2i(150,150);
glVertex2i(175,175);


glEnd();
/*
third pic
*/
glColor3f (1.0, 0.0,1.0);
glBegin(GL_LINES);
glVertex2i(190,150);
glVertex2i(210,150);
glVertex2i(190,150);
glVertex2i(165,195);
glVertex2i(165,195);
glVertex2i(240,195);
glVertex2i(240,195);
glVertex2i(210,150);



glEnd();

glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,400,0,400);
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
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

