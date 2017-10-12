#include "Player.h"
#include "World.h"





Player::Player(char * _name) : Entity(_name)
{
}

Player::~Player()
{
}

void Player::teleportToWorld(World& world) {
	world.setPlayerAddress(this);
}