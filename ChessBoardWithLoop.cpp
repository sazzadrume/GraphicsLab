
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
int a[4] = {0, 100, 100, 0};
int b[4] = {0, 0, 100, 100};
int x = 0;
int c = 8;

while(c--){
        a[0] = 0;
        a[1] = 100;
        a[2] = 100;
        a[3] = 0;

    for(int i = 0; i < 8; i++){
        if(c % 2 == 0){
            if(i % 2 == 0){
            x = 1;
        }
        else{
            x = 0;
        }
        }
        else{
            if(i % 2 == 0){
                    x = 0;
            }
            else{
                x = 1;
            }
    }
        glColor3f (x, x, x);
        glBegin(GL_POLYGON);

        glVertex2d(a[0], b[0]);
        glVertex2d(a[1], b[1]);
        glVertex2d(a[2], b[2]);
        glVertex2d(a[3], b[3]);
        for(int i = 0; i < 4; i++){
            a[i] += 100;
    }

    glEnd();
}
    for(int i = 0; i < 4; i++){
        b[i] += 100;
    }
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
