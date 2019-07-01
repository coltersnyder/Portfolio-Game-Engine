#pragma once

#include "GL/glew.h"
#include "GL/freeglut.h"

namespace pge
{
	struct Window
	{
		const char* title;
		int width;
		int height;
		int posX;
		int posY;
		bool resizable;
	};

	struct Context
	{
		int majVersion;
		int minVersion;
		bool core;
	};

	struct Framebuffer
	{
		
	};
	
	class Engine
	{
	private:
		

	public:
		void init(Window window, Context context, Framebuffer framebuffer, int* argc, char** argv);
	};
}
