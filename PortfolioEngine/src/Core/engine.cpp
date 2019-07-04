#include "../../include/engine.h"

using namespace pge;

SDL_Window* createWindow(char* title, int posX, int posY, int width, int height, UINT32 winFlags)
{
	SDL_Window* window = SDL_CreateWindow(title, posX, posY, width, height, winFlags);
	if(window == nullptr)
	{
		std::cout << "Error Creating Window: " << SDL_GetError() << std::endl;
		SDL_Quit();
	}
	return window;
}

SDL_Renderer* createRenderer(SDL_Window* window, UINT32 renFlags)
{
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, renFlags);
	if(renderer == nullptr)
	{
		SDL_DestroyWindow(window);
		std::cout << "Error Creating Renderer: " << SDL_GetError() << std::endl;
		SDL_Quit();
	}
	return renderer;
}

void end(SDL_Window* window, SDL_Renderer* renderer, std::list<SDL_Texture*, std::string> textureList)
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	for (SDL_Texture* texture : textureList)
	{
		SDL_DestroyTexture(texture);
	}
	SDL_Quit();
}