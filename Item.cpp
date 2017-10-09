#include "Item.h"
#include <cstring>


Item::Item(char* _name) 
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

Item::Item(Item & item)
{
	if (&item != NULL) {
		name = new char[strlen(item.name) + 1];
		strcpy(name, item.name);
	}
}

Item & Item::operator=(Item & item)
{
	if (&item != NULL) {
		name = new char[strlen(item.name) + 1];
		strcpy(name, item.name);
	}
	return *this;
}


Item::~Item()
{
	delete[] name;
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
