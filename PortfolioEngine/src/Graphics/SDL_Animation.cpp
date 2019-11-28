#include "../../include/Graphics/SDL_Animation.h"

SDL_Animation::SDL_Animation() {
	CurrentFrame = 0;
	MaxFrame = 0;
	FrameInc = 1;
	FrameRate = 100;
	OldTime = 0;
	Oscillate = false;
}

void SDL_Animation::animate() {
	if (OldTime + FrameRate > SDL_GetTicks()) {
		return;
	}

	OldTime = SDL_GetTicks();
	CurrentFrame += FrameInc;
	if (Oscillate) {
		if (FrameInc > 0) {
			if (CurrentFrame >= MaxFrames) {
				FrameInc = -FrameInc;
			}
		}
		else {
			if (CurrentFrame <= 0) {
				FrameInc = -FrameInc;
			}
		}
	}
	else {
		if (CurrentFrame >= MaxFrames) {
			CurrentFrame = 0;
		}
	}
}

void SDL_Animation::SetFrameRate(int rate) {
	FrameRate = rate;
}

void SDL_Animation::SetCurrentFrame(int frame) {
	if (Frame < 0 || Frame >= MaxFrames) return;
	CurrentFrame = frame;
}

int SDL_Animation::GetCurrentFrame() {
	return CurrentFrame;
}