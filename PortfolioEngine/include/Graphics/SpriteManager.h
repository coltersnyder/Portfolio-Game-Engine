#pragma once

#include <string>
#include <map>

#include "../SDL/SDL.h"

namespace pge {
	class SpriteManager {
	private:
		std::map<std::string, SDL_Texture*> spriteList;
		std::map<std::string, SDL_Rect* []> animationList;

	public:
		void addSprite(std::string filename, SDL_Renderer* renderer, std::string spriteName);
		void addAnimation(SDL_Texture* texture, std::string animationName);
	};
}