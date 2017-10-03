// OOP ex 4.1 - Monsters
// Description : Battling program
// Author : Duncan Bourquard
// Date : 03.10.2017

#include <iostream>

#include "Monster.h"

void initMonster(Monster& monster)
{
	int race;
	std::cout << "Please enter the stats of the monster (HP - AP - DP - S - Race(1 = Orc, 2 = Troll, 3 = Goblin\n";
	std::cin >> monster.health;
	std::cin >> monster.attackPower;
	std::cin >> monster.defensivePower;
	std::cin >> monster.speed;
	std::cin >> race;
	monster.race = static_cast<Race>(race);
}

int main()
{
	Monster m1;
	Monster m2;

	initMonster(m1);
	initMonster(m2);

	if (m1.race == m2.race)
	{
		std::cout << "Same classes monsters can't battle against !\n";
	}
	else
	{
		int round = 0;
		bool ism1CurrentMonster;
		m1.speed > m2.speed ? ism1CurrentMonster = true : ism1CurrentMonster = false;
		do 
		{
			ism1CurrentMonster ? m1.attack(m2) : m2.attack(m1);
			ism1CurrentMonster = !ism1CurrentMonster;
		} while (m1.health > 0 && m2.health > 0);

		std::cout << "Monster ";
		m1.health == 0 ? std::cout << "1" : std::cout << "2";
		std::cout << " has won !\n";
	}

	std::cout << "HP: " << m1.health << " AP: " << m1.attackPower << " DP: " << m1.defensivePower << " S: " << m1.speed << " race: " << m1.race << ".\n";
	std::cout << "HP: " << m2.health << " AP: " << m2.attackPower << " DP: " << m2.defensivePower << " S: " << m2.speed << " race: " << m2.race << ".\n";


	system("pause");
	return EXIT_SUCCESS;
}
