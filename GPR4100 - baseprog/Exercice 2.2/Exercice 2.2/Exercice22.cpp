////////////////////////////////////////////////////////////////
// Title : Exercice2.2.cpp - Even number
// Definition: Asks for a number and tells if it's even or not
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>
#include <cmath>

// Forces the user to enter a number and returns an error if he doens't
int askNumber() 
{
	int userInput = 0;
	std::cin >> userInput;

	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "PLEASE ENTER A NUMBER: ";
		std::cin >> userInput;
	}
	return userInput;
}

int main()
{
	int userInputNumber = 0;

	std::cout << "Enter a number : ";
	userInputNumber = askNumber();

	if(userInputNumber%2 == 1)
		std::cout << "Your number is uneven\n";
	else
		std::cout << "Your number is even\n";
	
	system("pause");
    return 0;
}

