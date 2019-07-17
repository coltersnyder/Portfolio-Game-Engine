#pragma once

#include <iostream>
#include <string>
#include <map>

#include "GL/glew.h"
#include "GL/freeglut.h"
#include "SDL/SDL.h"

#ifdef _WIN32
#include "WinUser.h"
#endif

#ifdef __linux__
#include <X11/Xlib.h>
#endif

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

	SDL_Window* createWindow(WinInfo winInfo, bool isFullScreen);
	SDL_Renderer* createRenderer(RenderInfo renInfo);
	void init();
	void end(SDL_Window* window, SDL_Renderer* renderer, std::map<std::string, SDL_Texture*> textureList);
}
