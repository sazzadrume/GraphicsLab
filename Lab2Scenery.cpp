#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(30,0);
glVertex2d(120,0);
glVertex2d(120,120);
glVertex2d(30, 120);
glEnd();

glColor3f (0, .5, 0);
glBegin(GL_POLYGON);

glVertex2d(60,0);
glVertex2d(90,0);
glVertex2d(90,90);
glVertex2d(60,90);
glEnd();


glColor3f (0, .45, 1);
glBegin(GL_POLYGON);

glVertex2d(30,120);
glVertex2d(120,120);
glVertex2d(75,160);
glEnd();

glColor3f (0, .45, 1);
glBegin(GL_POLYGON);

glVertex2d(35,50);
glVertex2d(55,50);
glVertex2d(55,70);
glVertex2d(35,70);
glEnd();

glColor3f (0, .45, 1);
glBegin(GL_POLYGON);

glVertex2d(95,50);
glVertex2d(115,50);
glVertex2d(115,70);
glVertex2d(95,70);
glEnd();

glColor3f (0, 1, 0);
glBegin(GL_POLYGON);

glVertex2d(250,60);
glVertex2d(400,60);
glVertex2d(320,250);
glEnd();

glColor3f (1, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(310,0);
glVertex2d(340,0);
glVertex2d(340,60);
glVertex2d(310,60);
glEnd();

glColor3f (1, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(360,390);
glVertex2d(480,390);
glVertex2d(480,510);
glVertex2d(360,510);
glEnd();

glColor3f (1, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(420,370);
glVertex2d(500,450);
glVertex2d(420,530);
glVertex2d(340,450);
glEnd();



glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(0,290);
glVertex2d(600,290);
glVertex2d(600,250);
glVertex2d(0,250);
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
