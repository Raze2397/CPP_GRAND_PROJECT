#pragma once
#include "Topic.h"
#include "Inventory.h"
#include "Ability.h"
#include "Spell.h"
class Entity 
{
private:
	int maxEnergy, currentEnergy;
protected:
	Inventory* inventory;
	Item* equippedItems;
	Ability* abilities;
	Spell* spells;
	char* name;
	int maxHP, currentHP;
	
	
	
public:
	Entity();
	~Entity();
};

