#include "EquipmentSlot.h"



bool EquipmentSlot::checkItemValidForSlot(Item & item)
{
	return false;
}

EquipmentSlot::EquipmentSlot(short _slotID) : slotID(_slotID) , equippedItemAtSlot(nullptr)
{
	
}




EquipmentSlot::~EquipmentSlot()
{
}
