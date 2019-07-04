#include "../../include/spriteManager.h"

SpriteManager::void addSprite(std::string filename, SDL_Renderer* renderer) {
	SDL_Surface* surface = SDL_LoadBMP(filename.c_str());
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	this.spriteList.insert(spriteName, texture);
}