
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (0, 1, 0);
glBegin(GL_POLYGON);

glVertex2d (325, 350);
glVertex2d (375, 375);
glVertex2d (325, 400);
glVertex2d (300, 450);
glVertex2d (275, 400);
glVertex2d (225, 375);
glVertex2d (275, 350);
glVertex2d (300, 300);
glEnd();


glColor3f (1, 0, 0);
glBegin(GL_POLYGON);

glVertex2d (325, 250);
glVertex2d (375, 225);
glVertex2d (325, 200);
glVertex2d (300, 150);
glVertex2d (275, 200);
glVertex2d (225, 225);
glVertex2d (275, 250);
glVertex2d (300, 300);
glEnd();


glColor3f (0, 0, 1);
glBegin(GL_POLYGON);


glVertex2d (400, 275);
glVertex2d (450, 300);
glVertex2d (400, 325);
glVertex2d (375, 375);
glVertex2d (350, 325);
glVertex2d (300, 300);
glVertex2d (350, 275);
glVertex2d (375, 225);
glEnd();



glColor3f (1, 0.75, 0);
glBegin(GL_POLYGON);



glVertex2d (200, 275);
glVertex2d (150, 300);
glVertex2d (200, 325);
glVertex2d (225, 375);
glVertex2d (250, 325);
glVertex2d (300, 300);
glVertex2d (250, 275);
glVertex2d (225, 225);
glEnd();

glColor3f (0.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (450, 300);
glVertex2d (600, 300);
glEnd();
glColor3f (0.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (300, 450);
glVertex2d (300, 600);
glEnd();
glColor3f (0.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (150, 300);
glVertex2d (0, 300);
glEnd();
glColor3f (0.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (300, 150);
glVertex2d (300, 0);
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
