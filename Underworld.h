#pragma once
#include "World.h"
class Underworld :
	public World
{
protected:
	void initializeSettlements() override;
public:
	Underworld();
	~Underworld();
};

