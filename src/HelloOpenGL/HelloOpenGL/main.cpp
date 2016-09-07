#include <Windows.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);	// 设置为白色背景
	glMatrixMode(GL_PROJECTION);		// 设置投射参数
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment() {
	glClear(GL_COLOR_BUFFER_BIT);		// 清除屏显
	glColor3f(1.0, 0.0, 0.0);			// 设置线条颜色为红色
	glBegin(GL_LINES);
	glVertex2i(180, 15);
	glVertex2i(10, 145);
	glEnd();
	glFlush();							// 尽快执行OpenGL绘制
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);							// 初始化GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// 设置显示模式
	glutInitWindowPosition(50, 100);				// 设置左上角屏幕位置
	glutInitWindowSize(400, 300);					// 设置显示宽度和高度
	glutCreateWindow("Hello OpenGL");				// 创建显示窗口
	init();
	glutDisplayFunc(lineSegment);					// 将图像发送到显示窗口
	glutMainLoop();									// 显示所有，并且阻塞
	return 0;
}