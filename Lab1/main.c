#include <GL/freeglut.h>
#include <GL/gl.h>
 
void renderFunction()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);

    //glColor3f(0.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

	glBegin(GL_LINES);
		glVertex2f(0, 0.5);
		glVertex2f(-0.5, 0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0, 0.5);
		glVertex2f(0.5, 0.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.5, 0.5);
		glVertex2f(0.9, 0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.9, 0);
		glVertex2f(0.5, 0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.9, 0);
		glVertex2f(0.9, -0.7);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0, 0.5);
		glVertex2f(0.5, 0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.9, -0.7);
		glVertex2f(-0.5, -0.7);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-0.5, 0);
		glVertex2f(0.5, 0);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-0.5, 0);
		glVertex2f(-0.5, -0.7);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.5, 0);
		glVertex2f(0.5, -0.7);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.5, -0.7);
		glVertex2f(-0.5, -0.7);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.1, -0.7);
		glVertex2f(0.1, -0.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-0.1, -0.7);
		glVertex2f(-0.1, -0.5);
	glEnd();
  
	glBegin(GL_LINES);
		glVertex2f(-0.1, -0.5);
		glVertex2f(0.1, -0.5);
	glEnd();

	glDrawArrays(GL_TRIANGLES, 0, 3);


    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("My House");
    glutDisplayFunc(renderFunction);
    glutMainLoop();    
    return 0;
}
