#pragma once

#include <iostream>
#include <string>
#include <map>

#include "GL/glew.h"
#include "GL/freeglut.h"
#include "SDL/SDL.h"



namespace pge
{
	struct WinInfo
	{
		char* title;
		int posX;
		int posY;
		int width;
		int height;
		UINT32 winFlags;
	};

	struct RenderInfo
	{
		SDL_Window* window;
		UINT32 renFlags;
	};

	SDL_Window* createWindow(WinInfo winInfo);
	SDL_Renderer* createRenderer(RenderInfo renInfo);
	void init();
	void end(SDL_Window* window, SDL_Renderer* renderer, std::map<std::string, SDL_Texture*> textureList);
}
