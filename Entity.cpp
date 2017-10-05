#include "Entity.h"




Entity::Entity() : maxEnergy(100) , currentEnergy(100) , maxHP(100) , currentHP(100)
{
	inventory = new Inventory(DEFAULT_INVENTORY_SIZE);
	equippedItems = new EquipmentSlot*[11];
	for (short counter=0;counter<11;counter++) {
		equippedItems[counter] = new EquipmentSlot(counter);
		
	}
	
}


Entity::~Entity()
{
}
