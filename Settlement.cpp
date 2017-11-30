#include "Settlement.h"
#include <cstring>


Settlement::Settlement(char* _name)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

}


Settlement::~Settlement()
{
	delete[] name;
}
