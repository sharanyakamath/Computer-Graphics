#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>

void outer(){
        float DEG2RAD=3.14/180;
        glVertex2f( 0,0 );
	glBegin(GL_LINE_LOOP);
	float radius = 0.5;
	for(int i = 0; i<360; i++){
		float cx = radius*sin((float)i * DEG2RAD );
		float cy = radius*cos((float)i * DEG2RAD );
		glVertex2f(cx,cy);
	}
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	float radius1 = 0.55;
	for(int i = 0; i<360; i++){
		float cx = radius1*sin((float)i * DEG2RAD );
		float cy = radius1*cos((float)i * DEG2RAD );
		glVertex2f(cx,cy);
	}
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0,0);
		glVertex2f(0,0.4);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(0,0);
		glVertex2f(0.4,0);
	glEnd();
	
	
	/*glBegin(GL_POINTS);
		glVertex2f(0.49,0);
	glEnd;
	glPointSize(8.0);*/
	
	
	
	glFlush();
}



int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("clock");
	glutDisplayFunc(outer);
	glutMainLoop();
	return 0;
}
