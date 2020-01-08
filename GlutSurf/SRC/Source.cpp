#include "Classes.h"
#include "Funcs.h"

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1024, 1024);
	glutCreateWindow("MihasGay");
	gluLookAt(-5, 1, 22, 1, 0, 0, 0, 1, 0);
	glLoadIdentity();

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);

	glutMainLoop();
	return 0;
}