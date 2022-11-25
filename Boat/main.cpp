#include<GL/glut.h>
#include<GL/gl.h>

void display(void){
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);

      glBegin(GL_POLYGON);

      glColor3f(0.0,1.0,1.0);

      glVertex3f(0.3f,0.1f,0.0f);
      glVertex3f(0.7f,0.1f,0.0f);
      glVertex3f(1.0f,0.4f,0.0f);
      glVertex3f(0.0f,0.4f,0.0f);

      glEnd();

      glBegin(GL_QUADS);

      glColor3f(0.0,0.0,1.0);

      glVertex3f(0.3f,0.4f,0.0f);
      glVertex3f(0.4f,0.4f,0.0f);
      glVertex3f(0.4f,0.5f,0.0f);
      glVertex3f(0.3f,0.5f,0.0f);

      glVertex3f(0.6f,0.4f,0.0f);
      glVertex3f(0.7f,0.4f,0.0f);
      glVertex3f(0.7f,0.5f,0.0f);
      glVertex3f(0.6f,0.5f,0.0f);

      glEnd();

      glBegin(GL_TRIANGLES);

      glColor3f(1.0,0.0,0.0);

      glVertex3f(0.2f,0.5f,0.0f);
      glVertex3f(0.4f,0.5f,0.0f);
      glVertex3f(0.4f,0.8f,0.0f);

      glColor3f(1.0,0.0,0.0);
      glVertex3f(0.6f,0.5f,0.0f);
      glVertex3f(0.9f,0.5f,0.0f);
      glVertex3f(0.6f,1.0f,0.0f);

      glEnd();

      glBegin(GL_LINES);
      glVertex2f(0.1,0.3);
      glVertex2f(0.9,0.3);
      glEnd();




glFlush();

}

void init(void){
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0,1.0,0.0,1.0,-10.0,10.0);
}

int main (int argc, char** argv){
glutInit(&argc,argv);
glutInitWindowSize(1260,640);
glutInitWindowPosition(10,10);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow("Boat");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
