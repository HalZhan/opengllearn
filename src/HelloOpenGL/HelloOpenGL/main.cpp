#include <Windows.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);	// ����Ϊ��ɫ����
	glMatrixMode(GL_PROJECTION);		// ����Ͷ�����
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment() {
	glClear(GL_COLOR_BUFFER_BIT);		// �������
	glColor3f(1.0, 0.0, 0.0);			// ����������ɫΪ��ɫ
	glBegin(GL_LINES);
	glVertex2i(180, 15);
	glVertex2i(10, 145);
	glEnd();
	glFlush();							// ����ִ��OpenGL����
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);							// ��ʼ��GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// ������ʾģʽ
	glutInitWindowPosition(50, 100);				// �������Ͻ���Ļλ��
	glutInitWindowSize(400, 300);					// ������ʾ��Ⱥ͸߶�
	glutCreateWindow("Hello OpenGL");				// ������ʾ����
	init();
	glutDisplayFunc(lineSegment);					// ��ͼ���͵���ʾ����
	glutMainLoop();									// ��ʾ���У���������
	return 0;
}