#pragma once
#include <cstring>
class Console;
class Entity;
class World;


class Game
{
private:
	Console* console;
	Entity* player;
	World* world;
public:
	Game();
	~Game();
	void start();
	
	Entity* createNewPlayer();
	World* createNewWorld(short type=1);
};

