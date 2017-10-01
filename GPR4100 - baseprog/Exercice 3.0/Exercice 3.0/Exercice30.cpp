////////////////////////////////////////////////////////////////
// Title : Exercice3.0.cpp - I can count
// Definition: Asks for a number and then count until the program reaches this number
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>

// Forces the user to enter a number and returns an error if he doens't
int askNumber()
{
	int userInput = 0;
	std::cin >> userInput;

	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "I said a number. Try again : ";
		std::cin >> userInput;
	}
	return userInput;
}

int main()
{
	int userInput = 0;

	std::cout << "I can count until: ";
	userInput = askNumber();

	for (int i = 1; i <= userInput; i++)
	{
		std::cout << i << "\n";
	}

	system("pause");
    return 0;
}

