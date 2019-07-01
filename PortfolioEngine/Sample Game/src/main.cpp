#include "../../include/engine.h"

using namespace pge;

int main(int argc, char** argv)
{
	Window window;

	window.title = "Sample Game";
	window.width = 800;
	window.height = 600;
	window.posX = 200;
	window.posY = 200;
	window.resizable = true;

	Context context;

	context.majVersion = 4;
	context.minVersion = 5;
	context.core = true;

	Framebuffer framebuffer;

	Engine engine;

	engine.init(window, context, framebuffer, &argc, argv);

	return 0;
}