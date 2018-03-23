#pragma once
#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include <iostream>

// OpenGL includes
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

#include "/Users/raula/source/repos/Breakout/BoilerPlate/stb_image.h"

namespace engine
{
	namespace texture
	{
		class texture
		{
		public:
			texture();
			texture(const char *pTexture);
			GLuint load_texture(const char *pTexturePath);
			GLuint get_texture();

		private:
			GLuint mTexture;
		};
	}
}

#endif