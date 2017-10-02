#include "Game.h"
#include "Console.h"




Game::Game()
{
	
	Console::setToFullScreen();
	
}


Game::~Game()
{
}

void Game::start()
{
	Console::showStartingScreen();
	while (true) {
		
	}
}

