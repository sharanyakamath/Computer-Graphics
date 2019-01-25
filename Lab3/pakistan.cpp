#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>
void moon(float step, float radius, float cut);
void star(double d,double rx,double ry);
void disp(){
        glBegin(GL_POLYGON);
        	glColor3ub(0,102,0);
        	glVertex2f(-0.4,0.3);
        	glVertex2f(0.4,0.3);
        	glVertex2f(0.4,-0.3);
        	glVertex2f(-0.4,-0.3);
        	
	glEnd();
	glBegin(GL_POLYGON);
        	glColor3ub(139,69,19);
        	glVertex2f(-0.4,0.3);
        	glVertex2f(-0.4,-0.6);
        	glVertex2f(-0.38,-0.6);
        	glVertex2f(-0.38,0.3);
        	
	glEnd();
	
	glBegin(GL_TRIANGLES);
        	glColor3ub(255,255,255);
        	glVertex2f(0.1,0.2);
        	glVertex2f(0.15,0.2);
        	glVertex2f(0.125,0.15);	
	glEnd();
	
	glBegin(GL_TRIANGLES);
        	glColor3ub(255,255,255);
        	glVertex2f(0.1,0.152);
        	glVertex2f(0.15,0.152);
        	glVertex2f(0.125,0.22);	
	glEnd();
	
	glBegin(GL_TRIANGLES);
        	glColor3ub(139,69,19);
        	glVertex2f(0.125,0.152);
        	glVertex2f(0.15,0.15);
        	glVertex2f(0.1,0.15);	
	glEnd();
	
	const float DEG2RAD = 3.14159/180;
	glBegin(GL_POLYGON);
		glColor3ub(255,255,255);
		float radius = 0.1;
		for(int i = 0; i<360; i++){
			float cx = radius*cosf(DEG2RAD*i)-0.1;
			float cy = radius*sinf(DEG2RAD*i)+0;
			glVertex2f(cx,cy);
		}
	glEnd();	
	glBegin(GL_POLYGON);
		float radius1 = 0.12;
		glColor3ub(0,102,10);
		for(int i = 0; i<360; i++){
			float cx = radius1*cosf(DEG2RAD*i)-0.03;
			float cy = radius1*sinf(DEG2RAD*i)+0.03;
			glVertex2f(cx,cy);
		}
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Pakistan Flag");
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
