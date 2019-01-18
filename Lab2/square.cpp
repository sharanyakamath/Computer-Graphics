#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>

void disp(){
        glBegin(GL_POLYGON);
        	glColor3ub(100,100,0);
        	glVertex2f(0,0);
        	glVertex2f(0.4,0);
        	glVertex2f(0.4,0.4);
        	glVertex2f(0,0.4);
        	
	glEnd();
	
	const float DEG2RAD = 3.14159/180;
	glVertex2f( 0.2,0 );
	glBegin(GL_LINE_LOOP);
		glColor3f(100,0,0);
		float radius = 0.1;
		for(int i = 0; i<180; i++){
			float cx = radius*cosf(DEG2RAD*i)+0.2;
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
	glutCreateWindow("square");
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
