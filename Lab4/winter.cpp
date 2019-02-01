#include "GL/freeglut.h"
#include "GL/gl.h"
#define PI 3.14
#include <math.h>

void drawHouse()
{
    glClearColor(0.86,0.86,0.86,1); 
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
	

	//tree
	glBegin(GL_POLYGON);
                glColor3ub(139,69,19); 
                glVertex2f(-0.5, -0.1);
                glVertex2f(-0.46, -0.1);
                glVertex2f(-0.46, 0.2);
                glVertex2f(-0.5, 0.2);

        glEnd();
        glBegin(GL_TRIANGLES);               
                glColor3ub(85,107,47);
                glVertex2f(-0.55, 0.2);
                glVertex2f(-0.41, 0.2);
                glVertex2f(-0.49, 0.6);

        glEnd();
        glBegin(GL_TRIANGLES);
                glColor3ub(85,107,47);
                glVertex2f(-0.55, 0.1);
                glVertex2f(-0.41, 0.1);
                glVertex2f(-0.49, 0.3);

        glEnd();
        glBegin(GL_TRIANGLES);
                glColor3ub(85,107,47);
                glVertex2f(-0.55, 0);
                glVertex2f(-0.41, 0);
                glVertex2f(-0.49, 0.2);

        glEnd();
        
        //snow
        glBegin(GL_POLYGON);

                glColor3ub(255,250,250); 
                glVertex2f(-1, -0.1);
                glVertex2f(1, -0.1);
                glVertex2f(1, -1);
                glVertex2f(-1, -1);

        glEnd();
	
	//snowfall
	for(float h=-1;h<2;h+=0.1){
		for(float k=0.0;k<2;k+=0.1){
			glBegin(GL_POLYGON);
				glColor3ub(255,250,250);
				float radius1 = 0.02;
				for(int i = 0; i<360; i++){
					float cx = radius1*cosf(DEG2RAD*i)-1+k+h;
					float cy = radius1*sinf(DEG2RAD*i)+1-k;
					glVertex2f(cx,cy);
				}
			glEnd();
		}
	}
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
