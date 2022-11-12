#include<cstdio>
#include <windows.h>
#include <cstdlib>
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>




GLfloat a=0,b=0,c=0,d=0,e=0,a1=0,a2=0,a3=0,a4=0;

void runway();
void update(int value)
{
	a+=15.0;	///Vertical Height of X axis (i)
	b-=10.0;	///Runway Movement
	c+=15;	   ///take off angle on y axis

	if(b<=-80.0)
		b=0.0;
	glutPostRedisplay();
	glutTimerFunc(200,update,0);//delay

}
void update1(int value)
{
	a1-=15.0;	///Vertical Height of X axis (i)

	glutPostRedisplay();
	glutTimerFunc(200,update1,0);//delay


}



void myDisplay(void)
{


	// Clear the screen buffer
	glClear(GL_COLOR_BUFFER_BIT);

	glPointSize(4.0);
    glPushMatrix();
	glTranslated(a1,0.0,0.0);
	glColor3f(0.5f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(40, 40);
	glVertex2i(320, 40);
	glVertex2i(40, 200);
	glVertex2i(320, 200);
	glVertex2i(40, 200);
	glVertex2i(40, 40);
	glVertex2i(320, 200);
	glVertex2i(320, 40);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(a1,0.0,0.0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(220, 60);
	glVertex2i(300, 60);
	glVertex2i(220, 150);
	glVertex2i(300, 150);
	glVertex2i(220, 60);
	glVertex2i(220, 150);
	glVertex2i(300, 150);
	glVertex2i(300, 60);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(a1,0.0,0.0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(220, 170);
	glVertex2i(300, 170);
	glVertex2i(220, 190);
	glVertex2i(300, 190);
	glVertex2i(220, 170);
	glVertex2i(220, 190);
	glVertex2i(300, 190);
	glVertex2i(300, 170);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(a1,0.0,0.0);
	glColor3f(0.0, 0.0f, 1.0f);

	// Begin the polygon
	glBegin(GL_POLYGON);
	glVertex2i(130, 40);
	glVertex2i(130, 160);

	glVertex2i(130, 160);
	glVertex2i(180, 160);

	glVertex2i(180, 100);
	glVertex2i(180, 40);

	glVertex2i(120, 40);
	glVertex2i(170, 40);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(a1,0.0,0.0);
	glColor3f(0.60f, 0.42f, 0.16f);
	glBegin(GL_POLYGON);
	glVertex2i(130, 170);
	glVertex2i(130, 180);

	glVertex2i(130, 180);
	glVertex2i(180, 180);

	glVertex2i(180, 170);
	glVertex2i(180, 180);

	glVertex2i(130, 170);
	glVertex2i(180, 170);

	glEnd();
	glPopMatrix();

    glPushMatrix();
	glTranslated(a1,0.0,0.0);
	glColor3f(1.0f, 0.91f, 0.80f);
	glBegin(GL_POLYGON);

	glVertex2i(10, 200);
	glVertex2i(340, 200);

	glVertex2i(200, 390);

	glVertex2i(10, 200);
	glVertex2i(200, 390);

	glEnd();
	glPopMatrix();

	// Sends all output to display

	glFlush();

	runway();
}

void Plane_Body(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    myDisplay();


    ///--------BODY OF THE PLANE----------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(0.0,30.0);
        glVertex2f(0.0,55.0);
        glVertex2f(135.0,55.0);
        glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();
    ///--------COCKPIT OF THE PLANE----------fkka l fw2ane
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
        glVertex2f(135.0,55.0);
        glVertex2f(150.0,50.0);
        glVertex2f(155.0,45.0);
        glVertex2f(160.0,40.0);
        glVertex2f(135.0,40.0);
    glEnd();
    glPopMatrix();
    ///--------COCKPIT OUTLINE DIVIDER----------syeg l fk l fw2ane
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(135.0,55.0);
        glVertex2f(150.0,50.0);
        glVertex2f(155.0,45.0);
        glVertex2f(160.0,40.0);
        glVertex2f(135.0,40.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();//d2na ll tyyara
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);//lower triangle
        glVertex2f(135.0,40.0);
        glVertex2f(160.0,40.0);
        glVertex2f(160.0,37.0);
        glVertex2f(145.0,30.0);
        glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();

    ///---------TAIL-------------l z7lyta l 3l tayara
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(.55,.66,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.0,55.0);
        glVertex2f(0.0,80.0);
        glVertex2f(10.0,80.0);
        glVertex2f(40.0,55.0);
    glEnd();
    glPopMatrix();

    ///---------LEFT WING-------------

    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(65.0,55.0);
        glVertex2f(50.0,70.0);
        glVertex2f(75.0,70.0);
        glVertex2f(90.0,55.0);
    glEnd();
    glPopMatrix();

    ///---------RIGHT WING-------------

    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(70.0,40.0);
        glVertex2f(100.0,40.0);
        glVertex2f(80.0,15.0);
        glVertex2f(50.0,15.0);
    glEnd();

    glPopMatrix();

    glFlush();

    glutSwapBuffers();


}


void runway()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//black roadshakl l road
        glVertex2f(0.0,0.0);
        glVertex2f(0.0,100.0);
        glVertex2f(500.0,100.0);
        glVertex2f(500.0,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(b,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0,40.0);
        glVertex2f(8.0,60.0);
        glVertex2f(58.0,60.0);
        glVertex2f(50.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//first white strips on road
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(100.0,40.0);
        glVertex2f(108.0,60.0);
        glVertex2f(158.0,60.0);
        glVertex2f(150.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//second white strips on road
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(200.0,40.0);
        glVertex2f(208.0,60.0);
        glVertex2f(258.0,60.0);
        glVertex2f(250.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//third white strips on road
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(300.0,40.0);
        glVertex2f(308.0,60.0);
        glVertex2f(358.0,60.0);
        glVertex2f(350.0,40.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//fourth white strips on road
    glTranslated(b,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(400.0,40.0);
        glVertex2f(408.0,60.0);
        glVertex2f(458.0,60.0);
        glVertex2f(450.0,40.0);
    glEnd();
    glPopMatrix();



}



void myinit()
{
    glClearColor(0.0f,1.0f,1.0f,0.0f);
    glColor3f(1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,500.0);

}



int main(int argc, char* argv[])
{
    glutInit(&argc, argv);//intialize glut functions
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);//2 buffers for red 2 for green and 2 for blue
    glutInitWindowSize(1400.0,680.0);//size of opened window
    glutInitWindowPosition(0,0);//display from corner
    glutCreateWindow("Ali Atwi");
    glutDisplayFunc(Plane_Body);


    myinit();
    glutTimerFunc(200,update,0);
    glutTimerFunc(100,update1,0);




    glutMainLoop();
    return 0;
}
