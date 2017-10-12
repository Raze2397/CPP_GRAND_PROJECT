#pragma once
#include <cstring>
class Console;
class Player;
class World;


class Game
{
private:
	Console* console;
	Player* player;
	World* world;
public:
	Game();
	~Game();
	void start();
	
	Player* createNewPlayer();
	World* createNewWorld(short type=1);
	
};

