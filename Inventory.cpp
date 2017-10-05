#include "Inventory.h"



Inventory::Inventory()
{
	expansionSlots = 0;
	items = new Item[DEFAULT_INVENTORY_SIZE + expansionSlots];
}


Inventory::~Inventory()
{
}
