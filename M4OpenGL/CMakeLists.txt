# CMakeList.txt: M4OpenGL 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

include_directories(../tdpkg/glad/include)

find_package(glfw3 CONFIG REQUIRED)
# 将源代码添加到此项目的可执行文件。
add_executable (M4OpenGL "M4OpenGL.cpp" "M4OpenGL.h" 

"../tdpkg/glad/src/glad.c")

# TODO: 如有需要，请添加测试并安装目标。
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)