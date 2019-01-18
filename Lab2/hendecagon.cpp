#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>


void disp(){
	const float DEG2RAD = 3.14159/180;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(220,220,220);
	glBegin(GL_POLYGON);
	float radius = 0.8;
	for(int i = 0; i<360; i+=32){
		float cx = radius*cosf(DEG2RAD*i);
		float cy = radius*sinf(DEG2RAD*i);
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
	glutCreateWindow("test program");
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
