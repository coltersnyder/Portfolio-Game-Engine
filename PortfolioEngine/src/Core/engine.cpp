#include "../../include/Core/engine.h"

using namespace pge;

SDL_Window* createWindow(WinInfo winInfo)
{
	SDL_Window* window = SDL_CreateWindow(winInfo.title, winInfo.posX, winInfo.posY, winInfo.width, winInfo.height, winInfo.winFlags);
	if(window == nullptr)
	{
		std::cout << "Error Creating Window: " << SDL_GetError() << std::endl;
		SDL_Quit();
	}
	return window;
}

SDL_Renderer* createRenderer(RenderInfo renInfo)
{
	SDL_Renderer* renderer = SDL_CreateRenderer(renInfo.window, -1, renInfo.renFlags);
	if(renderer == nullptr)
	{
		SDL_DestroyWindow(renInfo.window);
		std::cout << "Error Creating Renderer: " << SDL_GetError() << std::endl;
		SDL_Quit();
	}
	return renderer;
}

void init()
{
	
}

void end(SDL_Window* window, SDL_Renderer* renderer, std::map<std::string, SDL_Texture*> textureList)
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	for (std::map<std::string, SDL_Texture*>::iterator it = textureList.begin; it != textureList.end(); ++it)
	{
		SDL_DestroyTexture(it->second);
	}
	SDL_Quit();
}