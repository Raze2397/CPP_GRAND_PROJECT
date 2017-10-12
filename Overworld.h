#pragma once
#include "World.h"
class Overworld :
	public World
{
protected:
	void initializeSettlements() override;
public:
	Overworld();
	~Overworld();
	
};

