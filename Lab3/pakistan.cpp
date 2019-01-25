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
	star(0.05,0.2,0.1);
	//moon(0.1,-0.1,0.5);
	glBegin(GL_POLYGON);
        	glColor3ub(139,69,19);
        	glVertex2f(-0.4,0.3);
        	glVertex2f(-0.4,-0.6);
        	glVertex2f(-0.38,-0.6);
        	glVertex2f(-0.38,0.3);
        	
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
void star(double d,double rx,double ry)
{
    const double t=0.38196;
    const double transform=3.1415926/180;
    //get the star vertex position compared with center
    GLdouble draw_star[10][2]={
                                0,1,//A 1
                                cos( 54*transform )*t,t*sin( 54*transform ),//dd 2
                                cos( 18*transform  ),sin( 18*transform  ),//b 3
                                cos( 18*transform  )*t,-t*sin( 18*transform  ),//ee 4
                                cos( 54*transform ),-sin( 54*transform ),//c 5
                                0,-t,//aa 6
                                -cos( 54*transform ),-sin( 54*transform ),//d 7
                                -t*cos( 18*transform  ),-t*sin( 18*transform  ),//bb 8
                                -cos( 18*transform  ),sin( 18*transform  ),//E 9
                                -t*cos( 54*transform ),t*sin( 54*transform ),//cc 10

    };
    //get the size of star
    const GLdouble size=d;
    //draw first triangle
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);//the star
    glVertex2d(draw_star[0][0]*size+rx,draw_star[0][1]*size+ry);
    glVertex2d(draw_star[4][0]*size+rx,draw_star[4][1]*size+ry);
    glVertex2d(draw_star[7][0]*size+rx,draw_star[7][1]*size+ry);
    glEnd();
    //draw second triangle
    glBegin(GL_POLYGON);//the star
    glVertex2d(draw_star[2][0]*size+rx,draw_star[2][1]*size+ry);
    glVertex2d(draw_star[5][0]*size+rx,draw_star[5][1]*size+ry);
    glVertex2d(draw_star[8][0]*size+rx,draw_star[8][1]*size+ry);
    glEnd();
    //draw third small triangle
    glBegin(GL_POLYGON);//the star
    glVertex2d(draw_star[5][0]*size+rx,draw_star[5][1]*size+ry);
    glVertex2d(draw_star[6][0]*size+rx,draw_star[6][1]*size+ry);
    glVertex2d(draw_star[7][0]*size+rx,draw_star[7][1]*size+ry);
    glEnd();
    glFlush();

}

void moon(float step, float radius, float cut) {
	float angle=0.0f;
	float PI=3.14;
	glBegin(GL_POLYGON);
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glVertex2f(cut*radius*sinf(-1.5f*PI),0);
	while (angle<=PI) {
		glVertex2f(radius*sinf(angle),radius*cosf(angle));
		angle+=step;
	}
	while (angle<(2.0f*PI)) {
		angle+=step;
	}
	glEnd();
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
