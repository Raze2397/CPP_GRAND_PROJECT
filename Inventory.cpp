#include "Inventory.h"






Inventory::Inventory(short size)
{
	items = new Item*[size];

}

Inventory::~Inventory()
{
}
