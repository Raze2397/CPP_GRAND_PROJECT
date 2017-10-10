#pragma once
#include "Skill.h"
class Spell :
	public Skill
{
protected:
	bool castAt(Entity & target) override = 0;
public:
	//Spell(char* _name, int _baseDamage);
	//Spell(Spell& spell);
	~Spell();
};

