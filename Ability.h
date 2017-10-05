#pragma once
#include "Skill.h"
class Ability :
	public Skill
{
public:
	Ability(char* _name, int _baseDamage);
	Ability(Ability& ability);
	~Ability();
};

