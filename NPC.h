#pragma once
#include "Entity.h"
class NPC :
	public Entity
{
private:
protected:
	bool conversable;
public:
	NPC();
	~NPC();
};
