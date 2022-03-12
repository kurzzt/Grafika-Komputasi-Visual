/*
PRAKTIKUM GKV 2
Deskripsi : membuat segiempat penuh menggunakan fungsi GL_Rect
*/

#include <gl/glut.h>

void Segiempat(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(-0.18, 0.18, 0.18, -0.18); //(x1, y1, x2, y2)
	
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Segiempat");
	glutDisplayFunc(Segiempat);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}

