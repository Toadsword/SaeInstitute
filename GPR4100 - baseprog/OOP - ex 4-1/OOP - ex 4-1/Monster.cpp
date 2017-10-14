#include "Monster.h"
#include <iostream>

Monster::Monster()
{
	int race;
	std::cout << "Please enter the stats of the monster (HP - AP - DP - S - Race(1 = Orc, 2 = Troll, 3 = Goblin)\n";
	std::cin >> this->health;
	std::cin >> this->attackPower;
	std::cin >> this->defensivePower;
	std::cin >> this->speed;
	std::cin >> race;
	this->race = static_cast<Race>(race);
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