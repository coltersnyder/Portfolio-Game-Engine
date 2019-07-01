#include "../../include/engine.h"
#include <iostream>

using namespace pge;

void Engine::init(Window window, Context context, Framebuffer framebuffer, int* argc, char** argv)
{
	glutInit(argc, argv);
	
	glutCreateWindow(window.title);
	glutReshapeWindow(window.width, window.height);
	glutPositionWindow(window.posX, window.posY);

	glutInitContextVersion(context.majVersion, context.minVersion);

	std::cout << "Setup Complete.\n";
}