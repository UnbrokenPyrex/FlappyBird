#include <GLFW/glfw3.h>
#include <math.h>
#include <vector>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\EasyVectors.h>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\EasyColors.h>

class Pipe {
public:
	Vector2 size;
	Vector2 pos;
	Vector2 velocity;

	Pipe(Vector2 sizes, Vector2 startPoss) {
		size = sizes;
		pos = startPoss;
	}


};