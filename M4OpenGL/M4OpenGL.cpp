// M4OpenGL.cpp: 定义应用程序的入口点。
//
#include "glad/glad.h"
#include <GLFW/glfw3.h>

#include "M4OpenGL.h"

using namespace std;

int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	const int windowHeight = 720;
	const int windowWidth = 1280;
	auto window = glfwCreateWindow(windowWidth, windowHeight, "M4OpenGL", nullptr, nullptr);

	glfwMakeContextCurrent(window);

	gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress));

	while (!glfwWindowShouldClose(window))
	{
          glfwSwapBuffers(window);
          glfwPollEvents();
	}
        glfwTerminate();
	return 0;
}
