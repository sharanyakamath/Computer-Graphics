#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>

void disp(){
        glBegin(GL_POLYGON);
        	glColor3ub(255,153,51);
        	glVertex2f(-0.4,0.3);
        	glVertex2f(0.4,0.3);
        	glVertex2f(0.4,0.2);
        	glVertex2f(-0.4,0.2);
        	
	glEnd();
	
	glBegin(GL_POLYGON);
        	glColor3ub(255,255,255);
        	glVertex2f(-0.4,0.2);
        	glVertex2f(0.4,0.2);
        	glVertex2f(0.4,0.1);
        	glVertex2f(-0.4,0.1);
        	
	glEnd();
	
	glBegin(GL_POLYGON);
        	glColor3ub(0,128,0);
        	glVertex2f(-0.4,0.1);
        	glVertex2f(0.4,0.1);
        	glVertex2f(0.4,0);
        	glVertex2f(-0.4,0);
        	
	glEnd();
	
	glBegin(GL_POLYGON);
        	glColor3ub(139,69,19);
        	glVertex2f(-0.4,0.3);
        	glVertex2f(-0.4,-0.3);
        	glVertex2f(-0.38,-0.3);
        	glVertex2f(-0.38,0.3);
        	
	glEnd();
	
	const float DEG2RAD = 3.14159/180;
	glBegin(GL_LINE_LOOP);
		glColor3f(0,0,128);
		float radius = 0.05;
		for(int i = 0; i<360; i++){
			float cx = radius*cosf(DEG2RAD*i)+0;
			float cy = radius*sinf(DEG2RAD*i)+0.15;
			glVertex2f(cx,cy);
		}
		
	glBegin(GL_LINES);
		glColor3f(0,0,128);
		for(int i = 0; i<360; i+=15){
			float cx = radius*cosf(DEG2RAD*i)+0;
			float cy = radius*sinf(DEG2RAD*i)+0.15;
			glVertex2f( 0,0.15 );
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
	glutCreateWindow("Indian Flag");
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
