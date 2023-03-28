#version 330 core
out vec4 FragColor;
uniform bool isDark;

void main()
{
    if(isDark)
    FragColor = vec4(1.0);   //white light
}