#include <iostream>
#include "Game.h"
#include "Console.h"
#include "Player.h"
#include "World.h"
#include "Overworld.h"
#include "Underworld.h"
#include "Nightmare.h"
#include <ctime>

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

	//createNewPlayer();
	//while (true) {

	//}
	//Entity ent1;
	//Entity ent2("Vasko");
	//ent1.attemptSkillUsage(1, ent2);
	//std::cout << "";
	player = createNewPlayer();
	world = createNewWorld();
}

int * Game::randomCoordinatesGenerator()
{
	srand(time(NULL));
	int xCoordinate = rand() % 100;
	int yCoordinate = rand() % 100;
	int coordinates[2];
	coordinates[0] = xCoordinate;
	coordinates[1] = yCoordinate;
	return coordinates;
}

char * Game::randomVillageNameGenerator()
{
	//HERE
	return nullptr;
}

Player * Game::createNewPlayer()
{
	Player* createdPlayer = new Player(console->characterCreationName());
	return createdPlayer;
}

World * Game::createNewWorld(short type)
{
	switch (type) {
	case 1: {
		World* overworld = new Overworld();
		return overworld;
	}
	case 2: {
		World* underworld = new Underworld();
		return underworld;
	}
	case 3: {
		World* nightmare = new Nightmare();
		return nightmare;
	}
	}
	
}





