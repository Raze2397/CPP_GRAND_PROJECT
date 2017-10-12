#pragma once
class Entity;
class Skill
{
protected:
	short baseDamage;
	short damageOutput;
	const static short id;
	bool selfCastable;
	bool multipleTarget;
	bool castableOnEnemy;
	bool castableOnFriendly;
	bool affectsAllTargets;
	

public:
	//Skill(int _baseDamage);
	//Skill(Skill& skill);
	~Skill();
	virtual bool castAt(Entity & target)=0;
	
};

