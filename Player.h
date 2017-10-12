#pragma once
#include "Entity.h"
class World;
class Player :
	public Entity
{
public:
	Player(char* _name);
	~Player();
	void teleportToWorld(World & world);
};

