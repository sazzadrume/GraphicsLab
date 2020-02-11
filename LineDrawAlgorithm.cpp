#include <GL/gl.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

double a, b, c, d;

float round_value(float v)
{
  return floor(v + 0.5);
}

void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glBegin(GL_POINTS);
glColor3f (1, .25, 1);


double x1 = a, y1 = b, x2 = c, y2 = d;

if(x1 != y1 || x2 != y2){
    printf("Not Possible\n");
    return;
}
double dx = y2 - y1;
double dy = x2 - x1;
glVertex2d(x1, y1);

double m = dy/dx;


cout <<setprecision(10) << fixed << m << "\n";

double steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

double increment_x = dx / (float) steps;
double increment_y = dy / (float) steps;




for(int i = 0; i < steps; i++){
    x1 += increment_x;
    y1 += increment_y;
    cout << x1 << " "  << y1 << "\n";
    glVertex2d(x1 + .5, y1 + .5);
}


glEnd();
glFlush();

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
