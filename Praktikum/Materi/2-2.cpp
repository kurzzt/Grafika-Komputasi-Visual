/*
PRAKTIKUM GKV 2
Deskripsi : membuat titik menggunakan fungsi GL_POINTS
*/

#include <gl/glut.h>

void point(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPointSize(5.0f); // mengatur besat titik yang akan digambar
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f); // warna dari titik yang akan digambar
	//posisi titik 10 satuan ke kiri, 5 satuan ke atas, 20 satuan menjauh dr layar
	glVertex3f(0.25, 0.25, 0.0);
	glEnd();
	
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Titik");
	glutDisplayFunc(point);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
	
}
