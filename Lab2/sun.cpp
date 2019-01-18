#include <math.h>
#include "GL/freeglut.h"
#include "GL/gl.h"

#define PI 3.14

void drawCircle()
{
    glClearColor(0.4, 0.4, 0.4, 0.4); // Window color
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 1.0f, 0.0f); // Object colour

    int i;
	int triangleAmount = 1000; //# of triangles used to draw circle
	
	GLfloat radius = 0.3f; //radius
	GLfloat twicePi = 2.0f * PI;
	
	GLfloat x = 0, y = 0;	

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) { 
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)), 
			    	y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_LINES); //positive y axis
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, 0.5f);
    glEnd();

    glBegin(GL_LINES); //Quadrant I
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.36f, 0.36f);
    glEnd();

    glBegin(GL_LINES); //positive x axis 
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
    glEnd();

    glBegin(GL_LINES); //Quadrant IV
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.36f, -0.36f);
    glEnd();

    glBegin(GL_LINES); //negative y axis 
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, -0.5f);
    glEnd();

    glBegin(GL_LINES); //Quadrant III
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.36f, -0.36f);
    glEnd();

    glBegin(GL_LINES); //negative x axis 
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
    glEnd();

    glBegin(GL_LINES); //Quadrant II
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.36f, 0.36f);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Line");
    glutDisplayFunc(drawCircle);
    glutMainLoop();
    return 0;
}