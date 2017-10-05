#include "Entity.h"
#include <cstring>



void Entity::setName(char * _name)
{
	delete[] name;
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

char * Entity::getName() const
{
	return name;
}

Entity::Entity(char* _name) : maxEnergy(100) , currentEnergy(100) , maxHP(100) , currentHP(100) , name(nullptr) , inventoryExpansionSlots(0)
{
	inventory = new Inventory(DEFAULT_INVENTORY_SIZE);
	equippedItems = new EquipmentSlot*[DEFAULT_EQUIPMENT_SLOTS];
	for (short counter=0;counter<DEFAULT_EQUIPMENT_SLOTS;counter++) {
		equippedItems[counter] = new EquipmentSlot(counter);
		
	}
	abilities = nullptr;//new Ability[DEFAULT_ABILITY_COUNT];
	spells = nullptr;//new Spell[DEFAULT_SPELL_COUNT];
	setName(_name);
}

Entity::Entity(Entity & entity)
{
	inventory = new Inventory(*(entity.inventory));
	equippedItems = new EquipmentSlot*[entity.DEFAULT_EQUIPMENT_SLOTS];
	for (short counter = 0; counter<DEFAULT_EQUIPMENT_SLOTS; counter++) {
		equippedItems[counter] = new EquipmentSlot(*(entity.equippedItems[counter]));
	}
}


Entity::~Entity()
{
}
