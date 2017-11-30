#pragma once
class Item;
class EquipmentSlot
{
private:
	short slotID; // 0-head , 1-chest , 2-legs , 3-boots , 4-hands , 5-ring1 , 6-ring2 , 7-earring1 , 8-earring2 , 9-weapon , 10-offhand/shield
	Item* equippedItemAtSlot;
public:
	bool checkItemValidForSlot(Item& item);
	EquipmentSlot(short _slotID);
	EquipmentSlot(EquipmentSlot& equipmentSlot);
	~EquipmentSlot();
};

