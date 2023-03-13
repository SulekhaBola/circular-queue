#include<stdlib.h>
#include<stdio.h>
#include<glut.h>
#include<string.h>
void myDisplay(void);
void keyboard(unsigned char key, int a, int b);
int priority_queue();
void buttons1();
void buttons2();
void lines();
void delay();
void drawstring(GLfloat x, GLfloat y, const char* string);
void* currentfont;
float SCREEN_Y = 500, YD = SCREEN_Y / 12;



void lines(){
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2i(260,297);
	glVertex2i(260,203);
	glVertex2i(320,297);
	glVertex2i(320,203);
	glVertex2i(380,297);
	glVertex2i(380,203);
	glVertex2i(440,297);
	glVertex2i(440,203);
	glEnd();
}


void setFont(void* font)
{
	currentfont = font;
}
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glLineWidth(7);
	glColor3f(0.65, 0.65, 0.0);
	gluOrtho2D(0.1, 640.0, 0.0, 480.1);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
}
void delay()
{
	int i, j;
	for (i = 0; i < 32000; i++)
		for (j = 0; j < 15000; j++);
}
void drawstring(GLfloat x, GLfloat y, const char* string)
{
	const char* c;
	glRasterPos2f(x, y);
	for (c = string;
		*c != '\0';
		c++)
	{
		glutBitmapCharacter(currentfont, *c);
	}
}

	

void MOUSE(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		buttons2();
	}

}
void MOUSE2(int btn, int state, int x, int y)
{
	if (btn == GLUT_RIGHT_BUTTON) {
		buttons1();

}
}

void display()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	drawstring(246, 435, "SDM INSTITUTE OF TECHNOLOGY");
	glColor3f(1.0, 1.0, 1.0);
	drawstring(182, 403, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(1.0, 1.0, 1.0);
	drawstring(182, 373, "COMPUTER GRAPHICS LABORATORY WITH MINI PROJECT ");
	glColor3f(1.0, 0.0, 0.0);
	drawstring(275, 343, "A MINI PROJECT ON");
	glColor3f(1.0, 0.0, 0.0);
	drawstring(265, 313, "**PRIORITY QUEUE**");

	glColor3f(1.0, 0.0, 0.0);
	drawstring(45, 210, "SUBMITTED BY:");
	glColor3f(1.0, 0.0, 0.0);
	drawstring(45, 170, "SHARAL CORNELIO(4SU19CS090)");
	drawstring(45, 130, "SOWMYA PG(4SU19CS098)");
	drawstring(45, 150, "SNEHA SJ(4SU19CS097)");
	drawstring(45, 110, "SULEKHA PB(4SU19CS103)");
	glColor3f(1.0, 0.0, 0.0);
	drawstring(513, 195, "GUIDED BY:");
	glColor3f(1.0, 0.0, 0.0);
	drawstring(513, 170, "MR.ARJUN K");
	glColor3f(1.0, 1.0, 1.0);
	drawstring(270, 90, "PRESS s TO START");
	glFlush();
}
//glutSwapBuffers();


void buttons2()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	drawstring(220.0, 430.0, "*PRIORITY QUEUE*");
	glColor3f(1.0, 0.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	drawstring(10.0, 50.0, "*MAX CAPACITY OF QUEUE=5");
	glColor3f(1.0, 1.0, 1.0);
	glutKeyboardFunc(keyboard);
	glFlush();
	glutSwapBuffers();
	

}



void square(int x1, int y1, int x2, int y2)
{
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
}
void drawoutline(int x1, int y1, int x2, int y2)
{
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(10);
	glBegin(GL_LINE_LOOP);
	glLineWidth(3.5f);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
}
void buttons1()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	drawstring(270.0, 430.0, "MINI PROJECT");
	drawstring(270.0, 390.0, "*PRIORITY QUEUE*");
		glColor3f(0.0,0.9,0.0);
	square(350, (SCREEN_Y / 2) + 33, 270, SCREEN_Y / 2 + 30 + YD - 3);//box2
	glColor3f(0.0, 0.0, 0.0);
	drawstring(290.0, SCREEN_Y / 2 + 47, "NEW(n)");//label
	drawoutline(350, (SCREEN_Y / 2) + 34, 270, SCREEN_Y / 2 + 30 + YD - 3);
	glColor3f(0.0, 0.0, 0.0);
		glColor3f(0.0,0.8,1.0);
	square(350, (SCREEN_Y / 2) - 47, 270, SCREEN_Y / 2 - 50 + YD - 3);//box2
	glColor3f(0.0, 0.0, 0.0);
	drawstring(290, (SCREEN_Y / 2) - 34, "ABOUT(a)");//label
	drawoutline(350, (SCREEN_Y / 2) - 47, 270, SCREEN_Y / 2 - 50 + YD - 3);
	glColor3f(0.0, 0.0, 0.0);
		glColor3f(0.0,0.9,0.0);
	square(350, SCREEN_Y / 2 - 128, 270, SCREEN_Y / 2 - 131 + YD - 3);//box2
	glColor3f(0.0, 0.0, 0.0);
	drawstring(290, (SCREEN_Y / 2) - 114, "QUIT(q)");//label
	drawoutline(350, (SCREEN_Y / 2) - 128, 270, SCREEN_Y / 2 - 131 + YD - 3);
	/*glColor3f(0.0, 0.0, 0.0);
		glColor3f(0.0,0.8,1.0);
	square(350, SCREEN_Y / 2 - 195, 270, SCREEN_Y / 2 - 200 + YD - 3);//box2
	    glColor3f(0.0, 0.0, 0.0);
	drawstring(290, (SCREEN_Y / 2) - 185, "QUIT(q)");//label
	drawoutline(350, (SCREEN_Y / 2) - 195, 270, SCREEN_Y / 2 - 200 + YD - 3);*/
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(1.0, 0.5, 0.5);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(MOUSE2);
	
	glColor3f(1.0, 0.0, 0.0);
	drawstring(10, 375, "INSTRUCTIONS:");
	drawstring(10, 370, "__");
	
	//drawstring(10, 348, "KEYBOARD FUNCTIONS");
	glColor3f(1, 1.0, 0.0);
	drawstring(10, 342, " KEYBOARD FUNCTIONS ");
	
	drawstring(10, 325, " ---------------------");
	glColor3f( 1.0,1.0,1.0);
	drawstring(10, 307, "*PRESS 's' TO START");
	drawstring(10, 289, "*PRESS 'n' TO ENTER THE VALUES");
	drawstring(10, 271, "*PRESS 'q' FOR QUIT");
	drawstring(10, 253, "*PRESS 'm' FOR MAIN MENU");
	glColor3f(1.0, 1.0,0.0);
	drawstring(10, 166, "MOUSE FUNCTION:");
	drawstring(10, 150, "----------------- ");
	glColor3f( 1,1,1);
	drawstring(10, 135, "*RIGHT CLICK ON MOUSE-");
	drawstring(10, 115, " TO GO TO THE PREVIOUS WINDOW");
	glutKeyboardFunc(keyboard);
	glFlush();
	glutSwapBuffers();

}

void node1()
{
	int x1=200,y1=200,x2=250,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(0.0, 0.0, 0.0);
	drawstring(225.0,SCREEN_Y/2, "N1");
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void node2()
{
	int x1=260,y1=200,x2=310,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(0.0, 0.0, 0.0);
	drawstring(285.0,SCREEN_Y/2, "N2");
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void node3()
{
	int x1=320,y1=200,x2=370,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(0.0, 0.0, 0.0);
	drawstring(345.0,SCREEN_Y/2, "N3");
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void node4()
{
	int x1=380,y1=200,x2=430,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(0.0, 0.0, 0.0);
	drawstring(405.0,SCREEN_Y/2, "N4");
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void node5()
{
	int x1=440,y1=200,x2=490,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(0.0, 0.0, 0.0);
	drawstring(465.0,SCREEN_Y/2, "N5");
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void del1()
{
	int x1=200,y1=200,x2=250,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(1.0, 1.0, 1.0);
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void del2()
{
	int x1=260,y1=200,x2=310,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(1.0, 1.0, 1.0);
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void del3()
{
	int x1=320,y1=200,x2=370,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(1.0, 1.0, 1.0);
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void del4()
{
	int x1=380,y1=200,x2=430,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(1.0, 1.0, 1.0);
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}

void del5()
{
	int x1=440,y1=200,x2=490,y2=300;
	square(x1,y1,x2,y2);
	glColor3f(1.0, 1.0, 1.0);
	drawoutline(x1,y1,x2,y2);
	glutKeyboardFunc(keyboard);
	glFlush();
}



void about() {
	glColor3f(1.0, 0.0, 0.0);
	drawstring(263, 415, "PRIORITY QUEUE");
	glColor3f(0.0, 1.0, 0.0);
	drawstring(50, 375, "INTRODUCTION:");
	drawstring(50, 370, "__");
	glColor3f(1.0, 1.0, 1.0);
	drawstring(50, 348, "Priority queue is a special type of queue in which each element is associated with a priority value");
	drawstring(50, 330, "Here the elements are served based on their priority. ");
	glColor3f( 1.0,1.0,1.0);
	drawstring(60, 300, "The alogorithm of priority queue is given in the following steps:");
	glColor3f( 1.0,1.0,1.0);
	drawstring(60, 275, "Step1-Let us consider an empty queue.");
	drawstring(60, 250, "Step2-Insert numbers to the queue from one end.");
	drawstring(60, 225, "Step3-To DeQueue elements in priority queue values with the highest priority are to be deleted first.Initially set highest value as the priority.");
	drawstring(60, 200, "The element with the highest value can be considered as highest priority element.");
	
	drawstring(60, 175, "Then the DeQueue process is initiated and the element with highest value is deleted first");
	drawstring(60, 150, "Step4-In the same way according to the priority all elements get deleted in the queue.");

	glutKeyboardFunc(keyboard);
	glFlush();

}


	


void keyboard(unsigned char key, int a, int b) {
	if (key == 's') {

		glClearColor(0.0, 0.0, 0.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT);
		buttons1();

	}
	if(key=='n')
	{
		glClear(GL_COLOR_BUFFER_BIT);
		buttons2();
	}
	if (key == 'a') {
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT);
		about();
	}
	
	if (key == 'q')
	{
		exit(0);
	}
	if (key == 'm') {
		buttons1();

	}
	if (key == 'n') {
		
		buttons2();

	}
	if(key=='1')
	{
	node1();
	}
	if(key=='2')
	{
	node2();
	}
	if(key=='3')
	{
	node3();
	}
	if(key=='4')
	{
	node4();
	}
	if(key=='5')
	{
	node5();
	}
	if(key=='!')
	{
	del1();
	}
	if(key=='@')
	{
	del2();
	}
	if(key=='#')
	{
	del3();
	}
	if(key=='$')
	{
	del4();
	}
	if(key=='%')
	{
	del5();
	}

	
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1800, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("priority queue");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}
