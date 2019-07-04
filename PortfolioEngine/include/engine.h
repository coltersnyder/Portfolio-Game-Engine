#pragma once

#include <iostream>
#include <string>
#include <list>

#include "GL/glew.h"
#include "GL/freeglut.h"
#include "SDL.h"

namespace pge
{
	SDL_Window* createWindow(char* title, int posX, int posY, int width, int height, UINT32 winFlags);
	SDL_Renderer* createRenderer(SDL_Window* window, UINT32 renFlags);
	void end(SDL_Window* window, SDL_Renderer* renderer, std::list<SDL_Texture*, std::string> textureList);
}
