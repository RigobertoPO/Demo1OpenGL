#include <GL/glut.h>
#include <iostream>
void myinit(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
}
void pintarPixel(GLint x, GLint y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}
void desplegar() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3i(0, 1, 1);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glVertex2i(400, 300);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(8.0);
	pintarPixel(200, 100);
	glColor3f(2.0f, 0.5f, 1.0f);
	glPointSize(12.0);
	pintarPixel(200, 300);
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv); //Inicializamos las libreria de Open GL
	glutInitWindowSize(640, 480); //resolución
	glutInitWindowPosition(50, 50); //Posición
	glutCreateWindow("Unach Demo1");  //Titulo de la ventana
	myinit();
	glutDisplayFunc(desplegar);
	glutMainLoop(); //Limpiar el buffer
	return 0;
	
}
