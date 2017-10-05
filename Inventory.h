#pragma once
#include "Item.h"
class Inventory
{
private:
	const short DEFAULT_INVENTORY_SIZE=10;
	short expansionSlots;
	Item* items;
public:
	Inventory();
	~Inventory();
};

