#pragma once
#include "World.h"
class Nightmare :
	public World
{
protected:
	void initializeSettlements() override;
public:
	Nightmare();
	~Nightmare();
};

