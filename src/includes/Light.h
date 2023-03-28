#pragma once

#include <glm/glm.hpp>
#include "includes/Shader.h"

const int noOfLight = 2;

class Light
{
private:
	glm::vec3 sunLightPos1;
	glm::vec3 sunLightPos2;
	glm::vec3 pointLightPositions[noOfLight];
public:
	Light();

	void setLights(Shader& lightingShader);
};

