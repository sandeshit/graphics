#include "includes/Light.h"


Light::Light()
{
    sunLightPos1 = glm::vec3(3.9f, 30.0f, 4.5f);
    sunLightPos2 = glm::vec3(3.9f, 30.0f, 4.5f);
    pointLightPositions[0] = glm::vec3(-5.0f, 1.0f, 32.0f);
    pointLightPositions[1] = glm::vec3(-10.0f, 1.0f, 31.0f);
}

void Light::setLights(Shader& lightingShader)
{
    // sun light-1
    lightingShader.setVec3("sunLight1.position", sunLightPos1);
    lightingShader.setVec3("sunLight1.ambient", 0.5f, 0.5f, 0.5f);
    lightingShader.setVec3("sunLight1.diffuse", 0.8f, 0.8f, 0.8f);
    lightingShader.setVec3("sunLight1.specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("sunLight1.constant", 1.0f);
    lightingShader.setFloat("sunLight1.linear", 0.002);
    lightingShader.setFloat("sunLight1.quadratic", 0.0013);

    // sun light-2
    lightingShader.setVec3("sunLight2.position", sunLightPos2);
    lightingShader.setVec3("sunLight2.ambient", 0.5f, 0.5f, 0.5f);
    lightingShader.setVec3("sunLight2.diffuse", 0.8f, 0.8f, 0.8f);
    lightingShader.setVec3("sunLight2.specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("sunLight2.constant", 1.0f);
    lightingShader.setFloat("sunLight2.linear", 0.0002);
    lightingShader.setFloat("sunLight2.quadratic", 0.0013);

    // point light 0
    lightingShader.setVec3("pointLights[0].position", pointLightPositions[0]);
    lightingShader.setVec3("pointLights[0].ambient", 0.3f, 0.3f, 0.3f);
    lightingShader.setVec3("pointLights[0].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[0].specular", 0.01f, 0.01f, 0.01f);
    lightingShader.setFloat("pointLights[0].constant", 1.0f);
    lightingShader.setFloat("pointLights[0].linear", 0.35);
    lightingShader.setFloat("pointLights[0].quadratic", 0.044);

    // point light 1
    lightingShader.setVec3("pointLights[1].position", pointLightPositions[1]);
    lightingShader.setVec3("pointLights[1].ambient", 0.3f, 0.3f, 0.3f);
    lightingShader.setVec3("pointLights[1].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[1].specular", 0.01f, 0.01f, 0.01f);
    lightingShader.setFloat("pointLights[1].constant", 1.0f);
    lightingShader.setFloat("pointLights[1].linear", 0.35);
    lightingShader.setFloat("pointLights[1].quadratic", 0.44);

}