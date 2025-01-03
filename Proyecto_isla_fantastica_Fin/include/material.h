#ifndef MATERIAL_H
#define MATERIAL_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <vector>

class Material 
{
public:
	// Material Attributes
	glm::vec4 ambient;
	glm::vec4 diffuse;
	glm::vec4 specular;
	float     transparency;
	//float	  shininess;

	Material() {
		ambient = glm::vec4(0.2f, 0.2f, 0.2f, 1.0f); 
		diffuse = glm::vec4(0.5f, 0.5f, 0.5f, 1.0f);
		specular = glm::vec4(0.5f, 0.5f, 0.5f, 1.0f); 
		transparency = 1.0f;
		//shininess = 0.1;
	}
	~Material() {}

private:

};

#endif
