#include "GL/freeglut.h"
#include "GL/gl.h"
#define PI 3.14
#include <math.h>

void drawHouse()
{
    glClearColor(0.98,0.98,0.82,1); 
    glClear(GL_COLOR_BUFFER_BIT);


	//wall
        glBegin(GL_POLYGON);

                glColor3ub(210,180,140); 
                glVertex2f(-0.2f, -0.1f);
                glVertex2f(0.2f, -0.1f);
                glVertex2f(0.2f, 0.2f);
                glVertex2f(-0.2f, 0.2f);

        glEnd();

	//roof
        glBegin(GL_TRIANGLES);
                
                glColor3ub(139,69,19); 
                glVertex2f(-0.3f, 0.2f);
                glVertex2f(0.3f, 0.2f);
                glVertex2f(0.0f, 0.7f);

        glEnd();

	//door
        glBegin(GL_POLYGON);

                glColor3ub(0,0,0); 
                glVertex2f(-0.05f, -0.1f);
                glVertex2f(0.05f, -0.1f);
                glVertex2f(0.05f, 0.1f);
                glVertex2f(-0.05f, 0.1f);

        glEnd();

	//car
	glBegin(GL_POLYGON);

                glColor3ub(72,61,139); 
                glVertex2f(0.25, -0.05);
                glVertex2f(0.25, 0.1);
                glVertex2f(0.4, 0.1);
                glVertex2f(0.4, 0.15);
                glVertex2f(0.6, 0.15);
                glVertex2f(0.6, -0.05);
                glVertex2f(0.25, -0.05);

        glEnd();
	
	//wheel
	const float DEG2RAD = 3.14159/180;
	glBegin(GL_POLYGON);
		glColor3ub(105,105,105);
		float radius1 = 0.05;
		for(int i = 0; i<360; i++){
			float cx = radius1*cosf(DEG2RAD*i)+0.35;
			float cy = radius1*sinf(DEG2RAD*i)-0.05;
			glVertex2f(cx,cy);
		}
	glEnd();
	glBegin(GL_POLYGON);
		glColor3ub(105,105,105);
		radius1 = 0.05;
		for(int i = 0; i<360; i++){
			float cx = radius1*cosf(DEG2RAD*i)+0.5;
			float cy = radius1*sinf(DEG2RAD*i)-0.05;
			glVertex2f(cx,cy);
		}
	glEnd();
	
	//sun
        glColor3ub(255,140,0); 
        int i;
        int triangleAmount = 40; 
        GLfloat radius = 0.1f;
        GLfloat twicePi = 2.0f * PI;       
        GLfloat x = 0.4, y = 0.5;   
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); 
            for(i = 0; i <= triangleAmount;i++) { 
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)), 
                        y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

	//tree
	glBegin(GL_POLYGON);

                glColor3ub(139,69,19); 
                glVertex2f(-0.5, -0.1);
                glVertex2f(-0.46, -0.1);
                glVertex2f(-0.46, 0.2);
                glVertex2f(-0.5, 0.2);

        glEnd();
        glBegin(GL_TRIANGLES);
                
                glColor3ub(0,128,0); 
                glVertex2f(-0.55, 0.2);
                glVertex2f(-0.41, 0.2);
                glVertex2f(-0.49, 0.6);

        glEnd();
        
        //grass
        glBegin(GL_POLYGON);

                glColor3ub(0,128,0); 
                glVertex2f(-1, -0.1);
                glVertex2f(1, -0.1);
                glVertex2f(1, -1);
                glVertex2f(-1, -1);

        glEnd();
	
	
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Summer");
    glutDisplayFunc(drawHouse);
    glutMainLoop();
    return 0;
}
