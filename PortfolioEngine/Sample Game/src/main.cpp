#include "../../include/Core/engine.h"

using namespace pge;

int main(int* argc, char** argv)
{
	UINT32 flags = NULL;
	WinInfo winInfo;
	winInfo.title = "Sample Game";
	winInfo.height = 600;
	winInfo.width = 800;
	winInfo.posX = 0;
	winInfo.posY = 0;
	winInfo.winFlags = NULL;
	init(flags, argc, argv);
	createWindow(winInfo, true);
	return 0;
}