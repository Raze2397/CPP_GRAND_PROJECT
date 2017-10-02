#include "Game.h"
#include "Console.h"




Game::Game()
{
	
	console = new Console();
	
}


Game::~Game()
{
	delete[] console;
}

void Game::start()
{
	console->setToFullScreen();
	console->showStartingScreen();
	//while (true) {
		
	//}
	
	
}

