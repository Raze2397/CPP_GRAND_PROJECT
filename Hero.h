#pragma once
#include "Player.h"
class NPC;
class Topic;
class Hero :
	public Player
{
private:
protected:
	
	int reputation[4];
	virtual bool initiateConversation(NPC& NPC);
	virtual void askAbout(Topic& topic);
	
public:
	Hero(char * _name);
	~Hero();
};
