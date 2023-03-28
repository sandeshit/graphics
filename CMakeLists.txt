cmake_minimum_required( VERSION 3.0 )
project(test)

set(OpenGL_GL_PREFERENCE GLVND)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(OpenGL REQUIRED)
# Compile external dependencies 
add_subdirectory (Libraries)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/Libraries/rpavlik-cmake-modules-fe2273")
include(CreateLaunchers)

include_directories(
    Libraries/glfw-3.1.2/include/
	Libraries/glm-0.9.7.1/
	Libraries/glew-1.13.0/include/
    Libraries/stb_image/src/
	Libraries/assimp-3.0.1270/include/
	.
)

set(ALL_LIBS
	${OPENGL_LIBRARY}
	glfw
	GLEW_1130
)

add_definitions(
	-DTW_STATIC
	-DTW_NO_LIB_PRAGMA
	-DTW_NO_DIRECT3D
	-DGLEW_STATIC
	-D_CRT_SECURE_NO_WARNINGS
)

add_executable(test src/main.cpp  "src/includes/Shader.h" "src/Shader.cpp"  "src/includes/Camera.h" "src/Camera.cpp" "src/includes/Light.h" "src/Light.cpp" "src/includes/Mesh.h" "src/Mesh.cpp" "src/includes/Model.h" "src/Model.cpp")

target_link_libraries(test 
    ${ALL_LIBS}
    assimp
    STB_IMAGE
)
