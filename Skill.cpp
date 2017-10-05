#include "Skill.h"
#include <cstring>




Skill::Skill(char * _name, int _baseDamage) : name(_name) , baseDamage(_baseDamage)
{
}

Skill::Skill(Skill & skill) : baseDamage(skill.baseDamage)
{
	strcpy(name, skill.name);
}

Skill::~Skill()
{
}
