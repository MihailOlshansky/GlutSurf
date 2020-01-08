#include "Classes.h"
#include "Funcs.h"

void DrawAsix()
{
	glPushMatrix();
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex3d(0, 0, 0);

	//x
	glColor3d(1, 0, 0);
	glVertex3d(250, 0, 0);
	glVertex3d(0, 0, 0);

	//y
	glColor3d(0, 1, 0);
	glVertex3d(0, 250, 0);
	glVertex3d(0, 0, 0);

	//z
	glColor3d(0, 0, 1);
	glVertex3d(0, 0, 250);
	glVertex3d(0, 0, 0);

	glEnd();
	glPopMatrix();
}

void MyDisplay(void)
{
	double t = 1.0 * clock() / CLOCKS_PER_SEC;
	glClearColor(0.3, 0.5, 0.7, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	DrawAsix();
	glPushMatrix();
		glPushMatrix();
			glRotated(10 * t, 1, 1, 0);
			glColor3d(0.2, 0.2, 0.6);
			glutWireCube(0.2);
		glPopMatrix();
		
		glPushMatrix();
			glColor3d(0.7, 0.1, 0.5);
			glTranslated(0.5, 0, 0.2);
			glutWireSphere(0.2, 100, 10);
		glPopMatrix();
	glPopMatrix();

	glFinish();
	glutSwapBuffers();
	glutPostRedisplay();
}

void MyKeyboard(unsigned char Key, int x, int y)
{
	switch (Key)
	{
	case 27:
		exit(1);
		break;
	case 'w'://up
		glRotated(-5, 1, 0, 0);
		break;
	case 's'://down
		glRotated(5, 1, 0, 0);
		break;
	case 'a'://left
		glRotated(-5, 0, 1, 0);
		break;
	case 'd'://right
		glRotated(5, 0, 1, 0);
		break;
	case 'e'://around left
		glRotated(-5, 0, 0, 1);
		break;
	case 'q'://around right
		glRotated(5, 0, 0, 1);
		break;
	default:
		break;
	}
}
