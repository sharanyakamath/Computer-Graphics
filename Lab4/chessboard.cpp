#include "GL/freeglut.h"
#include "GL/gl.h"
#include <math.h>

void drawBoard(){

	glClearColor(0.2, 0.4, 0.4, 0.4); // Window color
    	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);

                glColor3ub(255,255,255); 
                glVertex2f(-0.4, 0.4);
                glVertex2f(0.4, 0.4);
                glVertex2f(0.4, -0.4);
                glVertex2f(-0.4, -0.4);

        glEnd();

        for(float j=0.0;j<0.8;j+=0.1){
		for(float i=0.0;i<0.8;i+=0.1){
			if(((int)(j*10)%2==1 && (int)(i*10)%2==1) || ((int)(j*10)%2==0 && (int)(i*10)%2==0)){
				glBegin(GL_POLYGON);

					glColor3ub(0,0,0); 
					glVertex2f(-0.4+i, 0.4-j);
					glVertex2f(-0.4+i+0.1, 0.4-j);
					glVertex2f(-0.4+i+0.1, 0.4-j-0.1);
					glVertex2f(-0.4+i, 0.4-j-0.1);

				glEnd();
			}
		}
	}
        glFlush();
}

int main(int argc, char **argv)
{
    	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
    	glutCreateWindow("Chessboard");
    	glutDisplayFunc(drawBoard);
    	glutMainLoop();
    	return 0;
}
