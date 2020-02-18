#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

int a, b, c, d;

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1, 1, 1);
    glBegin(GL_POINTS);

    int aa[1000], bb[1000];

    int dx = c - a;
    int dy = d - b;

    double p = (2 * dy) - dx;

    int we = a, ew = b, k = 0;

    while(we < c && ew < d){
        dx = c - a;
        dy = d - b;

        if(p >= 0){
            we++;
            ew++;
            p += 2 * dy - 2 * dx;
        }
        else{
            we++;
            p += 2 * dy;
    }

        aa[k] = we;
        bb[k] = ew;
        k++;

    }
    for(int i = 0; i < k; i++){
        glVertex2d(aa[i], bb[i]);
    }
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
gluOrtho2D(0 , 640 , 0 , 600);
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
cin >> a >> b >> c >> d;

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
