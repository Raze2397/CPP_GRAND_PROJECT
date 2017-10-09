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

void Entity::expandInventoryWith(short slots)
{
	Inventory* oldInventory;
	oldInventory = inventory;
	inventoryExpansionSlots += slots;
	inventory = new Inventory(DEFAULT_INVENTORY_SIZE + inventoryExpansionSlots);
	inventory = oldInventory;
	delete[] oldInventory;
}

short Entity::getInventoryExpansionSlots() const
{
	return inventoryExpansionSlots;
}

Inventory * Entity::getInventoryAddress() const
{
	return inventory;
}

EquipmentSlot ** Entity::getEquippedItemsAddressArray() const
{
	return equippedItems;
}

Ability ** Entity::getAbilitiesAddressesArray() const
{
	return abilities;
}

Entity::Entity(char* _name) : maxEnergy(100) , currentEnergy(100) , maxHP(100) , currentHP(100) , name(nullptr) , inventoryExpansionSlots(0), attackPower(10), spellPower(10), armor(10) //, abilityCount(1) , spellCount(0)
{
	inventory = new Inventory(DEFAULT_INVENTORY_SIZE);
	equippedItems = new EquipmentSlot*[DEFAULT_EQUIPMENT_SLOTS];
	for (short counter=0;counter<DEFAULT_EQUIPMENT_SLOTS;counter++) {
		equippedItems[counter] = new EquipmentSlot(counter);
		
	}
	abilities = new Ability*[DEFAULT_ABILITY_COUNT]();
	
	abilities[0] = new Ability("Basic Attack", 10);
	
	spells = new Spell*[DEFAULT_SPELL_COUNT]();
	setName(_name);
}

Entity::Entity(Entity & entity) : maxEnergy(entity.maxEnergy), currentEnergy(entity.currentEnergy), maxHP(entity.maxHP), currentHP(entity.currentHP), name(nullptr), inventoryExpansionSlots(entity.inventoryExpansionSlots), attackPower(entity.attackPower), spellPower(entity.spellPower), armor(entity.armor)
{
	setName(entity.name);
	inventory = new Inventory(*(entity.inventory));
	equippedItems = new EquipmentSlot*[entity.DEFAULT_EQUIPMENT_SLOTS];
	for (short counter = 0; counter<DEFAULT_EQUIPMENT_SLOTS; counter++) {
		equippedItems[counter] = new EquipmentSlot(*(entity.equippedItems[counter]));
	}
	abilities = new Ability*[DEFAULT_ABILITY_COUNT]();
	for (short counter = 0; counter < entity.DEFAULT_ABILITY_COUNT; counter++) {
		abilities[counter] = new Ability(*(entity.abilities[counter]));
	}
	spells = new Spell*[DEFAULT_SPELL_COUNT]();
	for (short counter = 0; counter < entity.DEFAULT_SPELL_COUNT; counter++) {
		spells[counter] = new Spell(*(entity.spells[counter]));
	}
}


Entity::~Entity()
{
}
