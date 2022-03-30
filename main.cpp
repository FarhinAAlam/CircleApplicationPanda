#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glOrtho(-30,30,-30,30,-30,10);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(0.95f, 0.70f, 0.0f);
    //circle(6,6,0,0);


  glColor3f(.0f, .0f, .0f);//black ear left
    circle(5,5,-11,15);
    glColor3f(.0f, .0f, .0f);//black ear right
    circle(5,5,7,15);
 glColor3f(.0f, .0f, .0f);//black body
    circle(13,15,-2,-2);
    glColor3f(1.0f, 1.0f, 1.0f);//white body
    circle(12.3,14.3,-2,-2);


    glColor3f(.0f, .0f, .0f);//black face
    circle(14,12,-3,3);
    glColor3f(1.0f, 1.0f, 1.0f);//white face
    circle(13.5,11.5,-3,3);
    glColor3f (1.0, 0.0, 0.0);

    glBegin(GL_QUADS);

    glVertex3f (5, 5, 0.0);

    glVertex3f (10, 5, 0.0);

    glVertex3f (10, 5, 0.0);
    glVertex3f (5, 5, 0.0);



    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);// eyes1 black
    circle(2,2,3,4);



    glColor3f(0.0f, 0.0f, 0.0f);// eyes2 black
    circle(2,2,-9,4);


    glColor3f(1.0f, 1.0f, 1.0f);// eyes1 black
    circle(1,1,2,5);
    glColor3f(1.0f, 1.0f, 1.0f);// eyes1 black
    circle(1,1,-10,5);

glColor3f(.0f, .0f, .0f);// nose
    circle(3,1,-3,-2);
    glColor3f(1.0f, 1.0f, 1.0f);// nose
    circle(1.5,0.2,-3,-2);

 glColor3f(.0f, .0f, .0f);//black legs left
    circle(4,4,-10,-16);
    glColor3f(.0f, .0f, .0f);//black legs right
    circle(4,4,7,-16);

    glColor3f(0.0f, 0.0f, 0.0f);// left hand
    circle(2,4,-13,-8);
    glColor3f(0.0f, 0.0f, 0.0f);// right hand
    circle(2,4,9,-7);


    glColor3f(1.0f, 1.0f, 1.0f);//white legs left
    circle(3,3,-9,-16.3);
    glColor3f(1.0f, 1.0f, 1.0f);//white legs right
    circle(3,3,8,-16.3);


    //glColor3f(0.16f, 0.18f, 0.22f);// eye brow
    //circle(1.5,1.5,1,1.2);

    //glColor3f(1.0f, 0.90f, 0.0f);//eye brow
    //circle(2.5,3,1,-0.80);

    //eye brow left

    //glColor3f(0.16f, 0.18f, 0.22f);// eye brow
    //circle(1.5,1.5,-3,1.2);

    //glColor3f(1.0f, 0.90f, 0.0f);//eye brow
    //circle(2.5,3,-3,-0.80);



    //glColor3f(0.16f, 0.18f, 0.22f);//mouth black circle
    //circle(3,3,-1,-2);

    //glColor3f(1.0f, 0.90f, 0.0f);//mouth 2nd circle holud
    //circle(4,2.5,-1,-1);

    //glColor3f(1.0f, 0.0f, 0.0f);//mouth red circle
    //circle(1.4,0.7,-1,-4.5);




    //glColor3f(0.16f, 0.18f, 0.22f);// eyes1 black
    //circle(1.3,1.3,1,0.7);



    //glColor3f(0.16f, 0.18f, 0.22f);// eyes2 black
    //circle(1.3,1.3,-3,0.7);

    //glColor3f(1.0f, 1.0f, 1.0f);// left2 white
    //circle(1.08,1.08,-3,0.7);

     //glColor3f(1.0f, 1.0f, 1.0f);// eyes2 white
    //circle(1.08,1.08,1,0.7);



    //glColor3f(0.0f, 0.0f, 0.0f);// left pupil
    //circle(0.5,0.5,-2.8,0.7);

    //glColor3f(0.0f, 0.0f, 0.0f);// right pupil
    //circle(0.5,0.5,1.2,0.7);



    //glColor3f(1.0f, 1.0f, 1.0f);// left pupil white
    //circle(0.1,0.1,-2.8,0.7);

    //glColor3f(1.0f, 1.0f, 1.0f);// right pupil white
    //circle(0.1,0.1,1.2,0.7);




    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Circle Application");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
