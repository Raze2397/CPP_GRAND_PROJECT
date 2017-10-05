#pragma once
#include "Console.h"
class Game
{
private:
	Console* console;
public:
	Game();
	~Game();
	void start();
	void showStartingScreen();
	bool createNewPlayer();
};

