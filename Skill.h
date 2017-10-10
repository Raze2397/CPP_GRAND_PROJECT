#pragma once
class Entity;
class Skill
{
protected:
	short baseDamage;
	short damageOutput;
	
public:
	//Skill(int _baseDamage);
	//Skill(Skill& skill);
	~Skill();
	virtual bool castAt(Entity & target)=0;
	
};

