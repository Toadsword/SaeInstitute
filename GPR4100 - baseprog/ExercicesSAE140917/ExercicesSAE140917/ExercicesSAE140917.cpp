// ExercicesSAE140917.cpp : Définit le point d'entrée pour l'application console.
// Tout le code réalisé en cours : programming basics du 14.09.17
// Exercice 2.0 : Perimeter of a rectangle
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>

enum Animationstate 
{
	IDLE,
	WALK,
	JUMP
};

int main()
{
	Animationstate animState = JUMP;

	switch(animState)
	{
	case IDLE :
		{
			std::cout << "IDLE\n";
			break;	
		}
	case WALK :
		{
			std::cout << "WALK\n";
			break;
		}
	case JUMP :
		{
			std::cout << "JUMP\n";
			break;
		}
	}

	// Explication d'une boucle
	int a = 5;
	for (int i = 1; i <= a; i++)
	{
		std::cout << i << "\n";
	}

	// Exercice 2.0
	int height = 0;
	int width = 0;

	std::cout << "Please enter the height of your rectangle : ";
	std::cin >> height;

	std::cout << "And now the width : ";
	std::cin >> width;

	std::cout << "The perimeter of your rectangle is : " << (height * 2 + width * 2) << ".\n";

	system("pause");
    return 0;
}

