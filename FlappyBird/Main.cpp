#include <GLFW/glfw3.h>
#include <math.h>
#include <vector>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\EasyVectors.h>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\EasyColors.h>
#include <C:\Users\ASUS\Documents\EzraStuff\VisualStudioProjects\FlappyBird\FlappyBird\Bird.h>


int main(void)
{
    GLFWwindow* window;
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000, 800, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    Bird bird(Vector2(0.1, 0.1), GLFW_KEY_SPACE, window);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        bird.HandleInput();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}