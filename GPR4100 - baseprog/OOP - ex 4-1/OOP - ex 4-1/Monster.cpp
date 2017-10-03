#include "Monster.h"


Monster::Monster()
{
}


Monster::~Monster()
{
}

void Monster::attack(Monster& enemy)
{
	double damage = this->attackPower - enemy.defensivePower;
	if (damage < 1)
		damage = 1;

	enemy.health = enemy.health - damage;
}
