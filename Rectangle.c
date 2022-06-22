#include <GL/gl.h>

#include <GL/glut.h>

void display(void)

{

/* clear all pixels */

glClear (GL_COLOR_BUFFER_BIT);

/* draw white polygon (rectangle) with corners at

*	(0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) */
/* First Triangle
*/
/*
glColor3f (0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
  glVertex2i(0,0);
  glVertex2i(400,0);

  glVertex2i(0,0);
  glVertex2i(200,200);

  glVertex2i(200,200);
  glVertex2i(400,0);
glEnd();
/* Second Triangle
*/
/*
glColor3f (1.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
  glVertex2i(0,400);
  glVertex2i(400,400);

  glVertex2i(400,400);
  glVertex2i(200,200);

  glVertex2i(0,400);
  glVertex2i(200,200);
glEnd();
*/
glColor3f (1.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
  glVertex2i(100,100);
  glVertex2i(100,200);

  glVertex2i(100,200);
  glVertex2i(250,200);

  glVertex2i(250,200);
  glVertex2i(250,100);

  glVertex2i(100,100);
  glVertex2i(250,100);
glEnd();

glColor3f (0.0, 1.0, 0.0);
 glBegin(GL_POLYGON);
  glVertex2i(150,100);
  glVertex2i(200,100);

  glVertex2i(150,100);
  glVertex2i(150,150);

  glVertex2i(150,150);
  glVertex2i(200,150);

  glVertex2i(200,150);
  glVertex2i(200,100);
glEnd();
/*
Window section
*/
glColor3f (0.0, 1.0, 0.0);
 glBegin(GL_POLYGON);
  glVertex2i(110,130);
  glVertex2i(125,130);

  glVertex2i(110,155);
  glVertex2i(110,125);

  glVertex2i(110,155);
  glVertex2i(125,155);

  glVertex2i(125,130);
  glVertex2i(125,155);
  /*
  */

glEnd();
glColor3f (0.0, 1.0, 0.0);
 glBegin(GL_POLYGON);
    glVertex2i(225,130);
  glVertex2i(240,130);

  glVertex2i(240,155);
  glVertex2i(225,155);

  glVertex2i(240,130);
  glVertex2i(240,155);

  glVertex2i(225,130);
  glVertex2i(225,155);
  glEnd();

glColor3f (0.0, 0.0, 1.0);
 glBegin(GL_TRIANGLES);
  glVertex2i(175,250);
  glVertex2i(100,200);
  glVertex2i(250,200);
  glEnd();


/* don't wait!

*	start processing buffered OpenGL routines */
glutSwapBuffers ();

}

void init (void)

{

/* select clearing (background) color */ glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */ glMatrixMode(GL_PROJECTION); glLoadIdentity();

gluOrtho2D(0,400,0,400);

}

/*

*	Declare initial window size, position, and display mode

*	(single buffer & RGBA). Open window with "hello"

*	In its title bar. Call initialization routines.

*	Register callback function to display graphics.

*	Enter main loop and process events.


*/

int main(int argc, char** argv)

{

glutInit(&argc, argv);

glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);

glutInitWindowSize (500, 500);







glutInitWindowPosition (100, 100);

glutCreateWindow ("hello");

init ();

glutDisplayFunc(display);

glutMainLoop();

return 0; /* ISO C requires main to return int. */

}

