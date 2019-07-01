#pragma once
#include "GL/freeglut.h"
#include "GL/glew.h"

namespace pge
{
	struct Window
	{
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
		void init(Window window, Context context, Framebuffer framebuffer);
	};
}
