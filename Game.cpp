#include "Game.h"
#include "Console.h"
#include "Entity.h"
#include <iostream>
 

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
	//createNewPlayer();
	//while (true) {
		
	//}
	//Entity ent1;
	//Entity ent2(ent1);
	//std::cout << "";
}

void Game::showStartingScreen()
{
	console->print("Cabal", true);
	console->newLine();
	console->print("Press any key to start!", true);
	console->waitForKeystroke();

}

bool Game::createNewPlayer()
{
	return false;
}

