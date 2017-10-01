////////////////////////////////////////////////////////////////
// Title : Exercice2.3.cpp - Prime number
// Definition: Asks for a number and tells if it's prime or not
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>
#include <cmath>

// Forces the user to enter a number and returns an error if he doens't
// Furthermore, it asks for a positive number only, 
// unless the user enters -1. It shutdowns the program
int askPositiveNumber()
{
	int userInput = 0;
	std::cin >> userInput;

	while (std::cin.fail() || userInput < -1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "PLEASE ENTER A POSITIVE NUMBER: ";
		std::cin >> userInput;
	}
	return userInput;
}


int main()
{
	int userInput = 0;
	bool isPrime = false;

	while (userInput != -1)
	{
		isPrime = true;

		std::cout << "Is your number Prime? : ";
		userInput = askPositiveNumber();

		for (int i = userInput-1; i > 1; i--)
		{
			if (userInput%i == 0) 
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			std::cout << "Yes!\n";
		else
			std::cout << "No!\n";
	}

	system("pause");
    return 0;
}

