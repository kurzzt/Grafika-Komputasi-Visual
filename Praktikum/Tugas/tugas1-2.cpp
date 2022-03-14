/*  Nama         : Dian Pagita
    Nama File    : tugas1-2.cpp
    Deskripsi    : Membuat tampilan 2d kubus bertingkat warna-warni kreatif
*/

#include <gl/glut.h>

void Pyramid(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3ub(215, 166, 183); //warna pink
	glRectf(-0.1, 0.1, 0.1, -0.1);
	
	glColor3ub(189, 154, 207); //warna ungu
	glRectf(-0.35, 0.1, -0.15, -0.1);
	glRectf(0.15, 0.1, 0.35, -0.1);
	
	glColor3ub(236, 200, 155); //warna salmon
	glRectf(-0.225, 0.35, -0.025, 0.15);
	glRectf(0.025, 0.35, 0.225,0.15);
	
	glColor3ub(203, 112, 87); //warna bata
	glRectf(-0.1, 0.6, 0.1, 0.4);

	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Bertingkat");
    glutDisplayFunc(Pyramid);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
