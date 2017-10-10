#include "Entity.h"
#include <cstring>
#include "BasicAttack.h"


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

short Entity::getMaxHP() const
{
	return maxHP;
}

short Entity::getCurrentHP() const
{
	return currentHP;
}

short Entity::getAttackPower() const
{
	return attackPower;
}

short Entity::getSpellPower() const
{
	return spellPower;
}

short Entity::getArmor() const
{
	return armor;
}

void Entity::setMaxHP(short _maxHP)
{
	maxHP = _maxHP;
}

void Entity::setCurrentHP(short _currentHP)
{
	currentHP = _currentHP;
}

void Entity::setAttackPower(short _attackPower)
{
	attackPower = _attackPower;
}

void Entity::setSpellPower(short _spellPower)
{
	spellPower = _spellPower;
}

void Entity::setArmor(short _armor)
{
	armor = _armor;
}





Skill* Entity::useSkill(short skillID)
{
	switch (skillID) {
	case 1: {
		BasicAttack* attack = new BasicAttack(*this);
		return attack;
		break;
	}
	}
	
	
}

Entity::Entity(char* _name) : maxEnergy(100) , currentEnergy(100) , maxHP(100) , currentHP(100) , inventoryExpansionSlots(0), attackPower(0), spellPower(0), armor(0)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	inventory = new Inventory(DEFAULT_INVENTORY_SIZE);
	equippedItems = new EquipmentSlot*[DEFAULT_EQUIPMENT_SLOTS];
	for (short counter=0;counter<DEFAULT_EQUIPMENT_SLOTS;counter++) {
		equippedItems[counter] = new EquipmentSlot(counter);
		
	}
	knownSkillsID = new short[DEFAULT_SKILL_CAP]();


	
}

Entity::Entity(Entity & entity) : maxEnergy(entity.maxEnergy), currentEnergy(entity.currentEnergy), maxHP(entity.maxHP), currentHP(entity.currentHP), inventoryExpansionSlots(entity.inventoryExpansionSlots), attackPower(entity.attackPower), spellPower(entity.spellPower), armor(entity.armor)
{
	name = new char[strlen(entity.name) + 1];
	strcpy(name, entity.name);
	inventory = new Inventory(*(entity.inventory));
	equippedItems = new EquipmentSlot*[entity.DEFAULT_EQUIPMENT_SLOTS];
	for (short counter = 0; counter<DEFAULT_EQUIPMENT_SLOTS; counter++) {
		equippedItems[counter] = new EquipmentSlot(*(entity.equippedItems[counter]));
	}
	knownSkillsID = new short[DEFAULT_SKILL_CAP]();
	for (short counter = 0; counter<DEFAULT_SKILL_CAP; counter++) {
		knownSkillsID[counter] = entity.knownSkillsID[counter];
	}
	
}

Entity & Entity::operator=(Entity & entity)
{
	this->~Entity();
	name = new char[strlen(entity.name) + 1];
	strcpy(name, entity.name);
	inventory = new Inventory(*(entity.inventory));
	
	equippedItems = new EquipmentSlot*[entity.DEFAULT_EQUIPMENT_SLOTS];
	for (short counter = 0; counter<DEFAULT_EQUIPMENT_SLOTS; counter++) {
		equippedItems[counter] = new EquipmentSlot(*(entity.equippedItems[counter]));
	}
	knownSkillsID = new short[DEFAULT_SKILL_CAP]();
	for (short counter = 0; counter<DEFAULT_SKILL_CAP; counter++) {
		knownSkillsID[counter] = entity.knownSkillsID[counter];
	}
	
	
	return *this;
}


Entity::~Entity()
{
	delete[] name;
	inventory->~Inventory();
	for (short counter = 0; counter<DEFAULT_EQUIPMENT_SLOTS; counter++) {
		equippedItems[counter]->~EquipmentSlot();
	}
	delete[] equippedItems;
	delete[] knownSkillsID;
	
}
