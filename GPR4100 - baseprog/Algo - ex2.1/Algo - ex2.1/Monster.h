//
//  Monster.h
//  TestCpp
//
//  Created by Elias Farhan on 29/11/16.
//
//  Corrected by Duncan Bourquard on 11.10.17
//

#ifndef MONSTER_H
#define MONSTER_H


enum class MonsterType
{
	ORC = 1,
	TROLL = 2,
	GOBLIN = 3
};

class Monster
{
private:
	double health;
	double attackPower;
	double defensivePower;
	double speed;
	MonsterType race;
public:
	Monster();

	double getHealth();
	double getAttackPower();
	double getDefensePower();
	double getSpeed();
	MonsterType getRace();

	void attack(Monster *m);
	
	~Monster();
};

#endif /* Monster_h */

