/*
PRAKTIKUM GKV 3
Deskripsi : merotasi objek menggunakan fungsi glRotated
*/

#include <gl/glut.h>

void Segitiga(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glTranslatef(0.25, -0.25, 0);
	glRotated(60.0, 0.0, 0.0, 1.0); //(rotasi, x, y, 1.0) 
	// sumbu z harus 1 supaya gk jdi fskala
	
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(-0.05, -0.05, 0.00);
	glColor3f(0.0f, 1.0f, 0.0f); glVertex3f( 0.15, -0.05, 0.00);
	glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(-0.05,  0.05, 0.00);
	glEnd();
	
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Segi Empat");
	glutDisplayFunc(Segitiga);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}

