#pragma once

#include "../SDL/SDL.h"

namespace pge {
	class SDL_Animation
	{
	public:
		SDL_Animation;
		void animate();
		void SetFrameRate(int Rate);
		void SetCurrentFrame(int Frame);
		int GetCurrentFrame();
		
		int MaxFrames;
		bool Oscillate;
	
	private:
		int CurrentFrame;
		int FrameInc;
		int FrameRate;
		long OldTime;
};
}


