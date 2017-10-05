#include "Ability.h"



Ability::Ability(char* _name, int _baseDamage) : Skill(_name,_baseDamage)
{
}

Ability::Ability(Ability & ability) : Skill(ability)
{
}


Ability::~Ability()
{
}
