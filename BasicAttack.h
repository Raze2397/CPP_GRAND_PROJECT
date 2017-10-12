#pragma once
#include "Ability.h"
class Entity;
class BasicAttack :
	public Ability
{
private:
	bool castAt(Entity & target) override;
	
public:
	
	BasicAttack(Entity& caster);
	~BasicAttack();
};

