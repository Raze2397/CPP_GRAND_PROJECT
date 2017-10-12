#include "BasicAttack.h"
#include <cstdlib>
#include <ctime>
#include "Entity.h"

const short BasicAttack::id = 1;

bool BasicAttack::castAt(Entity & target)
{
	target.setCurrentHP(target.getCurrentHP() - (damageOutput - target.getArmor()));
	return true;
}






BasicAttack::BasicAttack(Entity & caster)
{
	selfCastable = false;
	//implement cleave attack check
	multipleTarget = false;
	castableOnEnemy = true;
	castableOnFriendly = false;
	affectsAllTargets = false;
	srand(time(NULL));
	baseDamage = rand() % 3 + 1;
	damageOutput = baseDamage + caster.getAttackPower();
}

BasicAttack::~BasicAttack()
{
}
