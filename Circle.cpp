#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

double r;
double a, b;

double xc = 320, yc = 320;

void plot_point(int x, int y)
{
  glBegin(GL_POINTS);
  glVertex2i(xc+x, yc+y);
  glVertex2i(xc+x, yc-y);
  glVertex2i(xc+y, yc+x);
  glVertex2i(xc+y, yc-x);
  glVertex2i(xc-x, yc-y);
  glVertex2i(xc-y, yc-x);
  glVertex2i(xc-x, yc+y);
  glVertex2i(xc-y, yc+x);
  glEnd();
}

void bresenham_circle(int r)
{
  int x=0,y=r;
  float pk= 1-r;

  /* Plot the points */
  /* Plot the first point */
  plot_point(x,y);
  int k;
  /* Find all vertices till x=y */
  while(x < y)
  {
    x = x + 1;
    if(pk < 0)
      pk += 2*x+1;
    else
    {
      y = y - 1;
      pk += 2*(x - y) + 1;
    }
    plot_point(x,y);
  }
  glFlush();
}

void concentric_circles(void)
{
  /* Clears buffers to preset values */
  glClear(GL_COLOR_BUFFER_BIT);

  int radius1 = 100;//, radius2 = 200;
  bresenham_circle(radius1);
  //bresenham_circle(radius2);
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(2.0);

    glColor3f (1, 1, 1);
    glBegin(GL_POINTS);

    double x = 0, y = r;


    double p = 1-r;

    while(x != y){
            x++;
        if(p < 0){
            x++;
            p += 2 * (x + 1) + 1;
        }
        else{
            y--;
            p += 2 * (x + 1) + 1 - 2 * (y - 1);
        }
      glVertex2i(x, y);
      glVertex2i(-x, y);
      glVertex2i(x, -y);
      glVertex2i(-x, -y);

      glVertex2i(y, x);
      glVertex2i(-y, x);
      glVertex2i(y, -x);
      glVertex2i(-y, -x);
    /*
        cout << a + x << " " << b + y << "\n";
        cout << a - x << " " << b + y << "\n";
        cout << a + x << " " << b - y << "\n";
        cout << a - x << " " << b - y << "\n";
        cout << a + x << " " << b + y << "\n";
        cout << a + x << " " << b - y << "\n";
        cout << a - x << " " << b - y << "\n";
        cout << a - x << " " << b + y << "\n";

*/




    }

//cout << x << " " << y << "\n";
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
 gluOrtho2D(0 , 640 , 0 , 640);
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
//cin >> a >> b;
cin >> r;

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(concentric_circles);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
