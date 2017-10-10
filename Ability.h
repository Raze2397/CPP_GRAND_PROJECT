#pragma once
#include "Skill.h"
class Ability :
	public Skill
{
protected:
	bool castAt(Entity & target) override =0;
public:
	//Ability();
	//Ability(Ability& ability);
	~Ability();

};

