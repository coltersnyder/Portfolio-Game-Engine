#include "../../include/Graphics/SpriteManager.h"

SpriteManager::~SpriteManager()
{
	this.animationList.erase();
	this.spriteList.erase();
}

SpriteManager::void addSprite(std::string filename, SDL_Renderer* renderer) {
	SDL_Surface* surface = SDL_LoadBMP(filename.c_str());
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	this.spriteList.insert(std::pair<std::string, SDL_Texture*>(spriteName, texture));
}

SpriteManager::void addAnimation(SDL_Texture* texture, std::string animationName) {

}