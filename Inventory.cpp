#include "Inventory.h"






Inventory::Inventory(short _size) : size(_size)
{
	items = new Item*[_size]();
	
}

Inventory::Inventory(Inventory & inventory) : size(inventory.size)
{
	items = new Item*[inventory.size];
	for (short counter=0;counter<inventory.size;counter++) {
		//items[counter]->setName(inventory.items[counter]->getName());
		items[counter] = new Item(*(inventory.items[counter]));
	}

}

Inventory & Inventory::operator=(Inventory & inventory)
{
	
	for (short counter=0;counter<inventory.size;counter++) {
		*items[counter] = *inventory.items[counter];
	}
	return *this;
}

Inventory::~Inventory()
{
}
