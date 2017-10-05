#pragma once
#include "Topic.h"
#include "Inventory.h"
#include "Ability.h"
#include "Spell.h"
#include "EquipmentSlot.h"
class Entity 
{
private:
	short maxEnergy, currentEnergy;

protected:
	
	short inventoryExpansionSlots;
	//short abilityCount;
	//short spellCount;
	Inventory* inventory;
	EquipmentSlot** equippedItems;
	Ability** abilities;
	Spell** spells;
	char* name;
	short maxHP, currentHP, attackPower, spellPower, armor;
	
	
	
	
	
public:
	const short DEFAULT_INVENTORY_SIZE = 10;
	const short DEFAULT_ABILITY_COUNT = 20;
	const short DEFAULT_SPELL_COUNT = 20;
	const short DEFAULT_EQUIPMENT_SLOTS = 11;
	Entity(char* _name="Unknown");
	Entity(Entity& entity);
	~Entity();
	void setName(char* _name);
	char* getName() const;
	void expandInventoryWith(short slots);
	short getInventoryExpansionSlots() const;
	Inventory* getInventoryAddress() const;
	EquipmentSlot** getEquippedItemsAddressArray() const;
	Ability** getAbilitiesAddressesArray() const;
};

