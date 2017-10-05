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
	showStartingScreen();
	createNewPlayer();
	//while (true) {
		
	//}
	
	
}

void Game::showStartingScreen()
{
	console->print("Cabal", true);
	console->newLine();
	console->print("Press any key to start!", true);
	console->waitForKeystroke();

}

