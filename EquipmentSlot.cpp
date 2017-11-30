#include "EquipmentSlot.h"
#include "Item.h"


bool EquipmentSlot::checkItemValidForSlot(Item & item)
{
	return false;
}

EquipmentSlot::EquipmentSlot(short _slotID) : slotID(_slotID) , equippedItemAtSlot(nullptr)
{
	
}

EquipmentSlot::EquipmentSlot(EquipmentSlot & equipmentSlot) : slotID(equipmentSlot.slotID)
{
	equippedItemAtSlot = new Item(*(equipmentSlot.equippedItemAtSlot));
}




EquipmentSlot::~EquipmentSlot()
{
}
