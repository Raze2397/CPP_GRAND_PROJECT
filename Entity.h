#pragma once
#include "Topic.h"
#include "Inventory.h"
#include "Ability.h"
#include "Spell.h"
#include "EquipmentSlot.h"
class Entity 
{
private:
	int maxEnergy, currentEnergy;

protected:
	const short DEFAULT_INVENTORY_SIZE=10;
	
	Inventory* inventory;
	EquipmentSlot** equippedItems;
	
	Ability* abilities;
	Spell* spells;
	char* name;
	int maxHP, currentHP;
	
	
	
public:
	Entity();
	~Entity();
};

