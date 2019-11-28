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

#ifdef __APPLE__ 
	#ifdef __MACH__ // Apple OSX and iOS (Darwin)
		#include <TargetConditionals.h>
		#if TARGET_IPHONE_SIMULATOR == 1
			 // Apple iOS
		#elif TARGET_OS_IPHONE == 1
			// Apple iOS
		#elif TARGET_OS_MAC == 1
			// Apple OSX
		#endif
	#endif
#endif

namespace pge
{
	struct WinInfo
	{
		const char* title;
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
	void init(UINT32 flags, int* argc, char* argv[]);
	void end(SDL_Window* window, SDL_Renderer* renderer, std::map<std::string, SDL_Texture*> textureList);
}
