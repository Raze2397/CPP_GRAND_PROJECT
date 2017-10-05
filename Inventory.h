#pragma once
#include "Item.h"
class Inventory
{
private:
	short size;
	Item** items;
public:
	Inventory(short _size);
	Inventory(Inventory& inventory);
	~Inventory();
};

