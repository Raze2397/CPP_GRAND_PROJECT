#include "BasicAttack.h"
#include <cstdlib>
#include <ctime>
#include "Entity.h"

bool BasicAttack::castAt(Entity & target)
{
	target.setCurrentHP(target.getCurrentHP() - (damageOutput - target.getArmor()));
	return true;
}






BasicAttack::BasicAttack(Entity & caster)
{
	srand(time(NULL));
	baseDamage = rand() % 3 + 1;
	damageOutput = baseDamage + caster.getAttackPower();
}

BasicAttack::~BasicAttack()
{
}
