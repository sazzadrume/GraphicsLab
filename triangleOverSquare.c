#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1, 1, 1);
glBegin(GL_POLYGON);
//glBegin(GL_POINT);
//glBegin(GL_LINES);
//glBegin(GL_TRIANGLES);

/*
glVertex3f (0.25, 0.25, 0.0);
glVertex3f (0.75, 0.25, 0.0);
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.25, 0.75, 0.0);

*/


glVertex2d(0, 400);
glVertex2d(400,400);
glVertex2d(400, 0);
glVertex2d(0, 0);
glEnd();
/*
glColor3f (1, 0, 0);

glBegin(GL_TRIANGLES);
glVertex2d(0,400);
glVertex2d(400,400);
glVertex2d(250,550);


*/
glColor3f (0, 1, 0);
glBegin(GL_POLYGON);
glVertex2d(0,400);
glVertex2d(400,400);
glVertex2d(210,550);
// 3f er bodole 3ub use korle (0-255) value colorcode hisebe use kora jabe
/*
glVertex3f(0.20, 0.20, 0.0);
glVertex3f(0.80, 0.20, 0.0);
glVertex3f(0.80, 0.80, 0.0);
glVertex3f(0.20, 0.20, 0.0);
*/
glEnd();

glColor3f (1, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(50,280);
glVertex2d(140,280);
glVertex2d(140,210);
glVertex2d(50,210);

glEnd();

glColor3f (1, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(270,280);
glVertex2d(360,280);
glVertex2d(360,210);
glVertex2d(270,210);

glEnd();

glColor3f (0, 0, .25);
glBegin(GL_POLYGON);

glVertex2d(160,320);
glVertex2d(250,320);
glVertex2d(250,0);
glVertex2d(160,0);

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
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(0, 600, 0, 600);
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
