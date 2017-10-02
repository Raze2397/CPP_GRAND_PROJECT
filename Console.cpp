#include "Console.h"
#include <Windows.h>




Console::Console()
{
}


Console::~Console()
{
}

void Console::setToFullScreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

void Console::setToWindowed()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}

void Console::showStartingScreen()
{
}
