
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(0,0);
glVertex2d(100,0);
glVertex2d(100,100);
glVertex2d(0,100);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(100,0);
glVertex2d(200,0);
glVertex2d(200,100);
glVertex2d(100,100);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(200,0);
glVertex2d(300,0);
glVertex2d(300,100);
glVertex2d(200,100);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(300,0);
glVertex2d(400,0);
glVertex2d(400,100);
glVertex2d(300,100);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(400,0);
glVertex2d(500,0);
glVertex2d(500,100);
glVertex2d(400,100);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(500,0);
glVertex2d(600,0);
glVertex2d(600,100);
glVertex2d(500,100);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(600,0);
glVertex2d(700,0);
glVertex2d(700,100);
glVertex2d(600,100);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(700,0);
glVertex2d(800,0);
glVertex2d(800,100);
glVertex2d(700,100);
glEnd();

// 2nd row------------------

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(0,100);
glVertex2d(100,100);
glVertex2d(100,200);
glVertex2d(0,200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(100,100);
glVertex2d(200,100);
glVertex2d(200,200);
glVertex2d(100,200);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(200,100);
glVertex2d(300,100);
glVertex2d(300,200);
glVertex2d(200,200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(300,100);
glVertex2d(400,100);
glVertex2d(400,200);
glVertex2d(300,200);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(400,100);
glVertex2d(500,100);
glVertex2d(500,200);
glVertex2d(400,200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(500,100);
glVertex2d(600,100);
glVertex2d(600,200);
glVertex2d(500,200);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(600,100);
glVertex2d(700,100);
glVertex2d(700,200);
glVertex2d(600,200);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(700,100);
glVertex2d(800,100);
glVertex2d(800,200);
glVertex2d(700,200);
glEnd();


//3rd and 4th ----------------------


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(0,200);
glVertex2d(100,200);
glVertex2d(100,300);
glVertex2d(0,300);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(100,200);
glVertex2d(200,200);
glVertex2d(200,300);
glVertex2d(100,300);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(200,200);
glVertex2d(300,200);
glVertex2d(300,300);
glVertex2d(200,300);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(300,200);
glVertex2d(400,200);
glVertex2d(400,300);
glVertex2d(300,300);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(400,200);
glVertex2d(500,200);
glVertex2d(500,300);
glVertex2d(400,300);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(500,200);
glVertex2d(600,200);
glVertex2d(600,300);
glVertex2d(500,300);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(600,200);
glVertex2d(700,200);
glVertex2d(700,300);
glVertex2d(600,300);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(700,200);
glVertex2d(800,200);
glVertex2d(800,300);
glVertex2d(700,300);
glEnd();




// 2nd row------------------

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(0,300);
glVertex2d(100,300);
glVertex2d(100,400);
glVertex2d(0,400);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(100,300);
glVertex2d(200,300);
glVertex2d(200,400);
glVertex2d(100,400);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(200,300);
glVertex2d(300,300);
glVertex2d(300,400);
glVertex2d(200,400);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(300,300);
glVertex2d(400,300);
glVertex2d(400,400);
glVertex2d(300,400);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(400,300);
glVertex2d(500,300);
glVertex2d(500,400);
glVertex2d(400,400);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(500,300);
glVertex2d(600,300);
glVertex2d(600,400);
glVertex2d(500,400);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(600,300);
glVertex2d(700,300);
glVertex2d(700,400);
glVertex2d(600,400);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(700,300);
glVertex2d(800,300);
glVertex2d(800,400);
glVertex2d(700,400);
glEnd();

//4,5,6,7--------------------

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(0,400);
glVertex2d(100,400);
glVertex2d(100,500);
glVertex2d(0,500);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(100,400);
glVertex2d(200,400);
glVertex2d(200,500);
glVertex2d(100,500);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(200,400);
glVertex2d(300,400);
glVertex2d(300,500);
glVertex2d(200,500);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(300,400);
glVertex2d(400,400);
glVertex2d(400,500);
glVertex2d(300,500);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(400,400);
glVertex2d(500,400);
glVertex2d(500,500);
glVertex2d(400,500);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(500,400);
glVertex2d(600,400);
glVertex2d(600,500);
glVertex2d(500,500);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(600,400);
glVertex2d(700,400);
glVertex2d(700,500);
glVertex2d(600,500);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(700,400);
glVertex2d(800,400);
glVertex2d(800,500);
glVertex2d(700,500);
glEnd();

// 2nd row------------------

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(0,500);
glVertex2d(100,500);
glVertex2d(100,600);
glVertex2d(0,600);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(100,500);
glVertex2d(200,500);
glVertex2d(200,600);
glVertex2d(100,600);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(200,500);
glVertex2d(300,500);
glVertex2d(300,600);
glVertex2d(200,600);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(300,500);
glVertex2d(400,500);
glVertex2d(400,600);
glVertex2d(300,600);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(400,500);
glVertex2d(500,500);
glVertex2d(500,600);
glVertex2d(400,600);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(500,500);
glVertex2d(600,500);
glVertex2d(600,600);
glVertex2d(500,600);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(600,500);
glVertex2d(700,500);
glVertex2d(700,600);
glVertex2d(600,600);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(700,500);
glVertex2d(800,500);
glVertex2d(800,600);
glVertex2d(700,600);
glEnd();


//3rd and 4th ----------------------


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(0,600);
glVertex2d(100,600);
glVertex2d(100,700);
glVertex2d(0,700);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(100,600);
glVertex2d(200,600);
glVertex2d(200,700);
glVertex2d(100,700);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(200,600);
glVertex2d(300,600);
glVertex2d(300,700);
glVertex2d(200,700);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(300,600);
glVertex2d(400,600);
glVertex2d(400,700);
glVertex2d(300,700);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(400,600);
glVertex2d(500,600);
glVertex2d(500,700);
glVertex2d(400,700);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(500,600);
glVertex2d(600,600);
glVertex2d(600,700);
glVertex2d(500,700);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(600,600);
glVertex2d(700,600);
glVertex2d(700,700);
glVertex2d(600,700);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(700,600);
glVertex2d(800,600);
glVertex2d(800,700);
glVertex2d(700,700);
glEnd();



// 2nd row-----------------------------------------------------------

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(0,700);
glVertex2d(100,700);
glVertex2d(100,800);
glVertex2d(0,800);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(100,700);
glVertex2d(200,700);
glVertex2d(200,800);
glVertex2d(100,800);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(200,700);
glVertex2d(300,700);
glVertex2d(300,800);
glVertex2d(200,800);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(300,700);
glVertex2d(400,700);
glVertex2d(400,800);
glVertex2d(300,800);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(400,700);
glVertex2d(500,700);
glVertex2d(500,800);
glVertex2d(400,800);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(500,700);
glVertex2d(600,700);
glVertex2d(600,800);
glVertex2d(500,800);
glEnd();


glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(600,700);
glVertex2d(700,700);
glVertex2d(700,800);
glVertex2d(600,800);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(700,700);
glVertex2d(800,700);
glVertex2d(800,800);
glVertex2d(700,800);
glEnd();



glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(0,700);
glVertex2d(100,700);
glVertex2d(100,800);
glVertex2d(0,800);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(100,700);
glVertex2d(200,700);
glVertex2d(200,800);
glVertex2d(100,800);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(200,700);
glVertex2d(300,700);
glVertex2d(300,800);
glVertex2d(200,800);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(300,700);
glVertex2d(400,700);
glVertex2d(400,800);
glVertex2d(300,800);
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(400,700);
glVertex2d(500,700);
glVertex2d(500,800);
glVertex2d(400,800);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(500,700);
glVertex2d(600,700);
glVertex2d(600,800);
glVertex2d(500,800);
glEnd();


glColor3f (1, 1, 1);
glBegin(GL_POLYGON);

glVertex2d(600,700);
glVertex2d(700,700);
glVertex2d(700,800);
glVertex2d(600,800);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);

glVertex2d(700,700);
glVertex2d(800,700);
glVertex2d(800,800);
glVertex2d(700,800);
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
gluOrtho2D(0, 800, 0, 800);
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
