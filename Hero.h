#pragma once
#include "InteractableNPC.h"
#include "Entity.h"
class Hero :
	public Entity
{
private:
protected:
	
	int reputation[4];
	virtual bool initiateConversation(NPC& NPC);
	virtual void askAbout(Topic& topic);
public:
	Hero();
	~Hero();
};
