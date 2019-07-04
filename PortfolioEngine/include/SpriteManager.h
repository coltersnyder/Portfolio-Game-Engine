#pragma once

#include <string>
#include <list>

#include "SDL.h"

namespace pge {
	class SpriteManager {
	private:
		std::list<SDL_Texture*, std::string> spriteList;

	public:
		void addSprite(std::string filename, SDL_Renderer* renderer, std::string spriteName);
	};
}