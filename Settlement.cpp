#include "Settlement.h"
#include <cstring>
#include "Game.h"
#include "Map.h"
Settlement::Settlement(char* _name)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	int* coordinates = Game::randomCoordinatesGenerator();
	xCoordinate = coordinates[0];
	yCoordinate = coordinates[1];
	map = new Map(*this);
}


Settlement::~Settlement()
{
	delete[] name;
}
