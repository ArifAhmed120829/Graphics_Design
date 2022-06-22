#include <GL/gl.h>
#include<stdio.h>
#include <GL/glut.h>

int r=16, x, y, p, cx=85, cy=50;

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
//leftside
glColor3ub(225,225,225);
glBegin(GL_POLYGON);
glVertex2d (20,0);
glVertex2d (50,0);
glVertex2d (50,70);
glVertex2d (20,70);
glEnd();

//insidebox
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d (30,0);
glVertex2d (40,0);
glVertex2d (40,60);
glVertex2d (30,60);
glEnd();


//middleside
glColor3ub(255,255,255);
glBegin(GL_POLYGON);
glVertex2d (60,0);
glVertex2d (110,0);
glVertex2d (110,100);
glVertex2d (60,100);
glEnd();

//middleinside
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d (70,0);
glVertex2d (100,0);
glVertex2d (100,80);
glVertex2d (70,80);
glEnd();

//middleabove
glColor3ub(225,225,225);
glBegin(GL_POLYGON);
glVertex2d (60,100);
glVertex2d (110,100);
glVertex2d (120,120);
glVertex2d (70,120);
glEnd();



//rightside
glColor3ub(225,225,225);
glBegin(GL_POLYGON);
glVertex2d (120,0);
glVertex2d (150,0);
glVertex2d (150,70);
glVertex2d (120,70);
glEnd();

//rightinside
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d (130,0);
glVertex2d (140,0);
glVertex2d (140,60);
glVertex2d (130,60);
glEnd();


x = 0;
y = r;
p = 1-r;

glColor3ub(255,0,0);
glBegin(GL_POINTS);
glVertex2d(x+cx,y+cy);
glVertex2d(x+cx,-y+cy);
glVertex2d(-x+cx,y+cy);
glVertex2d(-x+cx,-y+cy);
glVertex2d(y+cx,x+cy);
glVertex2d(y+cx,-x+cy);
glVertex2d(-y+cx,x+cy);
glVertex2d(-y+cx,-x+cy);
glEnd();

while(x<y){
    if(p<0){
        x = x+1;
        y=y;
        p = p+(2*x)+1;
    }
    else{
        x = x+1;
        y = y-1;
        p = p+(2*x)+1-(2*y);
    }

glColor3ub(255,0,0);
glBegin(GL_POLYGON);

glVertex2d(x+cx,-y+cy);
glVertex2d(-x+cx,y+cy);
glVertex2d(-x+cx,-y+cy);
glVertex2d(y+cx,x+cy);
glVertex2d(y+cx,-x+cy);
glVertex2d(-y+cx,x+cy);
glVertex2d(-y+cx,-x+cy);
glVertex2d(x+cx,y+cy);
glEnd();
}














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
//gluOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(0,300,0,150);

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

//printf("Enter the Radius: ");
//scanf("%d", &r);
//printf("Enter the Center: ");
//scanf("%d %d",&cx,&cy);

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("191-15-12301");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

