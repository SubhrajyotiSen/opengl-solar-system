#include "gl_compat.h"

//Represents an image
class Image {

private:
	// holds the id of the image texture
	GLuint textureId;

public:
	//constructor
	Image(const char* path);

	// returns the id of the generated texture
	GLuint getTextureID();

};
