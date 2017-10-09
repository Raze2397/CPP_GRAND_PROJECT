#pragma once
class Skill
{
protected:
	char* name;
	int baseDamage;
public:
	Skill(char* _name, int _baseDamage);
	Skill(Skill& skill);
	~Skill();
	
};

