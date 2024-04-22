#include <GLFW/glfw3.h>
#include <math.h>
#include <vector>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\EasyVectors.h>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\EasyColors.h>

class Bird {
	int flapKey;
	GLFWwindow* window;
public:
	Vector2 size;
	Vector2 pos;
	Vector2 center;
	Vector2 velocity;
	Bird(Vector2 _size, int flap, GLFWwindow* win) {
		size = _size;
		flapKey = flap;
		window = win;
	}

	void CalculateCenter() {
		center = Vector2((pos.x + size.x) / 2, (pos.y + size.y) / 2);
	}

	void DrawBird() {
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 0);
		glVertex2f(pos.x, pos.y); //ORIGIN BOTTOM LEFT CORNER 
		glVertex2f(pos.x, pos.y + size.y); //ORIGIN BOTTOM LEFT CORNER 
		glVertex2f(pos.x + size.x, pos.y + size.y); //ORIGIN BOTTOM LEFT CORNER 
		glVertex2f(pos.x + size.x, pos.y); //ORIGIN BOTTOM LEFT CORNER 
		glEnd();
	}

	void Fall() {
		if (pos.y > 1.5 || pos.y < -1.5) {
			pos.y = 0.5;
		}
		if(velocity.y < 0.0005){
			velocity.y -= 0.0000001;

		}
		pos.y += velocity.y;

		
	}

	void HandleInput() {
		int state = glfwGetKey(window, flapKey);
		glfwSetInputMode(window, GLFW_STICKY_KEYS, GLFW_TRUE);
		if (state == GLFW_PRESS) {
			Flap();
		}
		else {
			Fall();
		}
		DrawBird();
	}

	void Flap() {
		velocity.y = 0.0002;
		pos.y += velocity.y;
	}


	

};
