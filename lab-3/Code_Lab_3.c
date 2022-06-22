#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
int x1,x2,y1,y2,dx,dy,i,p,x,y;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
x = x1;
y = y1;

glColor3f (0.0, 1.0, 1.0);
glBegin(GL_POINTS);
glVertex2d(x,y);
glEnd();
dx = x2-x1;
dy = y2-y1;
p = 2*dy-dx;
for(i = 0; i<dx; i++){
    if(p<0){
        x = x+1;
        p = p+2*dy;
    }
    else{
        x = x+1;
        y = y+1;
        p = p+2*dy-2*dx;
    }
    glBegin(GL_POINTS);
glVertex2d(x,y);

}
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
gluOrtho2D(0, 500, 0, 500);
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
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
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
