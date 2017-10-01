// Cours200917.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> // stdlib.h
#include <ctime> // time.h
//On utilisera le .h pour ses propres fichiers et non les librairies

#define RANDOM_THROW 10
#define MONSTER_NB 10

//Utilisation des enums et structures
struct Monster
{
	int initiative = 0;
	int attack = 0;
	int defense = 0;
};

void init_stat(Monster* m)
{
	m->initiative = rand() % 10;
	m->attack = rand() % 10;
	m->defense = rand() % 10;
}

int main()
{
	/*
	// Utilisation des tableaux et des chaines de charactères

	auto prout = "Salut"; // Formera un type char*, et non un string
	char* prout2 = "Salut"; // Comme ceci, c'est equivalent
	char character = 'a';
	char prout3[] = "Salut\n";

	std::cout << prout3;
	*/

	/*
	//Utilisation du random
	srand(time(NULL));
	for(int i = 0; i < RANDOM_THROW; i++)
		std::cout << "Random : " << rand() % 100 << "\n";
	*/

	/*
	//Utilisation des enums et des structures
	Monster m{ 1,2,3 };

	std::cout << m.initiative << "\n";
	*/

	//Utilisation des pointers
	/*
	int a = 3;
	int* b = &a;

	std::cout << a << "\n";
	std::cout << b << "\n";
	std::cout << &a << "\n";
	std::cout << *b << "\n";


	int* c = new int;
	std::cout << *c << "\n";

	*c = 0;
	std::cout << *c << "\n";

	delete c;
	*/

	//Melons tout cela !
	srand(time(NULL));
	
	Monster* m1 = new Monster;
	Monster* m2 = new Monster;

	Monster* monsters = new Monster[MONSTER_NB];

	monsters[1].initiative = 3; // C'est possible
	for (int i = 0; i < MONSTER_NB; i++)
	{
		init_stat(monsters + i);
	}
	
	init_stat(m1);
	init_stat(m2);

	std::cout << m1->attack << "\n";

	delete m1;
	delete m2;
	delete monsters;

	system("pause");
    return 0;
}

