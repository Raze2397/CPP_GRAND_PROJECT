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
	const short DEFAULT_ABILITY_COUNT = 20;
	const short DEFAULT_SPELL_COUNT = 20;
	const short DEFAULT_EQUIPMENT_SLOTS = 11;
	short inventoryExpansionSlots;
	Inventory* inventory;
	EquipmentSlot** equippedItems;
	Ability* abilities;
	Spell* spells;
	char* name;
	int maxHP, currentHP;
	void setName(char* _name);
	char* getName() const;
	
	
	
public:
	
	Entity(char* _name="Unknown");
	Entity(Entity& entity);
	~Entity();
};

