#include "Game.h"
#include <windows.h>




Game::Game()
{
	setToFullScreen();

}


Game::~Game()
{
}

void Game::setToFullScreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

void Game::setToWindowed()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}
