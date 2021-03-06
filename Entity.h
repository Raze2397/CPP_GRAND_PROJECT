#pragma once

//class Topic;
class Inventory;
class Skill;
class EquipmentSlot;
class Entity 
{
private:
	short maxEnergy, currentEnergy;

protected:
	
	short inventoryExpansionSlots;
	Inventory* inventory;
	EquipmentSlot** equippedItems;
	
	char* name;
	short maxHP, currentHP, attackPower, spellPower, armor;
	short* knownSkillsID;
	Skill* useSkill(short skillID);
	short xCoordinate, yCoordinate;
	
	
	
	
public:
	const short DEFAULT_SKILL_CAP = 20;
	const short DEFAULT_INVENTORY_SIZE = 10;
	const short DEFAULT_EQUIPMENT_SLOTS = 11;
	Entity(char* _name="Unknown");
	Entity(Entity& entity);
	Entity& operator=(Entity& entity);
	~Entity();
	void setName(char* _name);
	char* getName() const;
	void expandInventoryWith(short slots);
	short getInventoryExpansionSlots() const;
	Inventory* getInventoryAddress() const;
	EquipmentSlot** getEquippedItemsAddressArray() const;
	short getMaxHP() const;
	short getCurrentHP() const;
	short getAttackPower() const;
	short getSpellPower() const;
	short getArmor() const;
	void setMaxHP(short _maxHP);
	void setCurrentHP(short _currentHP);
	void setAttackPower(short _attackPower);
	void setSpellPower(short _spellPower);
	void setArmor(short _armor);
	bool attemptSkillUsage(short skillID, Entity& target);

};

