#include "Classes.h"
#include "Funcs.h"

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1024, 1024);
	glutCreateWindow("MihasGay");
	glEnable(GL_DEPTH_TEST);
	glLoadIdentity();
	//glFrustum(-1, 1, -1, 1, 0.1, 100);
	// Enable perspective projection with fovy, aspect, zNear and zFar
	gluPerspective(45.0f, 1, 0.1f, 100.0f);
	

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);

	glutMainLoop();
	return 0;
}