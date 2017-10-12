//
//  Monster.cpp
//  TestCpp
//
//  Created by Elias Farhan on 29/11/16.
//
//  Corrected by Duncan Bourquard on 11.10.17
//

#include "Monster.h"
#include <iostream>

Monster::Monster()
{
	int monsterChoice;

	std::cout << "Choose your monster (1 = Orc, 2 = Troll, 3 = Goblin) : ";
	std::cin >> monsterChoice;

	race = (MonsterType)monsterChoice;

	std::cout << "Set your monster's stats (HP, AP, DP, S) : ";
	std::cin >> health;
	std::cin >> attackPower;
	std::cin >> defensivePower;
	std::cin >> speed;

	std::cout << "\n";

}

double Monster::getHealth()
{
	return health;
}

double Monster::getAttackPower()
{
	return attackPower;
}

double Monster::getDefensePower()
{
	return defensivePower;
}

double Monster::getSpeed()
{
	return speed;
}


MonsterType Monster::getRace()
{
	return race;
}

void Monster::attack(Monster *m)
{
	double damage = this->attackPower - m->defensivePower;

	if (damage < 0.0)
	{
		damage = 1.0;
	}

	m->health -= damage;
	if (m->health <= 0.0)
	{
		m->health = 0.0;
	}

}


Monster::~Monster()
{
}
