#include "Skill.h"
#include <cstring>




Skill::Skill(char * _name, int _baseDamage) :  baseDamage(_baseDamage)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

Skill::Skill(Skill & skill) 
{
	if (&skill != NULL) {
		baseDamage = skill.baseDamage;
		name = new char[strlen(skill.name) + 1];
		strcpy(name, skill.name);
		
	}
}

Skill::~Skill()
{
	delete[] name;
}


	

