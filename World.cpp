#include "World.h"
#include "Player.h"
#include "Map.h"
#include "Settlement.h"
#include "City.h"
#include "Town.h"
#include "Village.h"
void World::initializeSettlements()
{
	settlements = new Settlement*[DEFAULT_SETTLEMENT_COUNT];
	for (short counter = 0; counter < DEFAULT_SETTLEMENT_COUNT; counter++) {
		switch (counter) {
		case 1: {
			settlements[counter] = new City();
			break;
		}
		case 2: {
			settlements[counter] = new Town();
			break;
		}
		default: {
			settlements[counter] = new Village();
			break;
		}

		}
	}
}
World::World()
{
	map = nullptr;
	player = nullptr;
	initializeSettlements();
}


World::~World()
{
}

Player * World::getPlayerAddress() const
{
	return player;
}

void World::setPlayerAddress(Player * _player)
{
	player = _player;
}

