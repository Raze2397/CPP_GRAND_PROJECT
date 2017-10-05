#include "Item.h"
#include <cstring>


Item::Item() : name("Unknown")
{
}

Item::Item(Item & item) : name(NULL)
{
	if (&item == NULL)return;
	setName(item.name);
}

Item & Item::operator=(Item & item)
{
	strcpy(name, item.name);
	return *this;
}


Item::~Item()
{
}

char * Item::getName() const
{
	return name;
}

void Item::setName(char * _name)
{
	delete[] name;
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}
