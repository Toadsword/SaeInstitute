////////////////////////////////////////////////////////////////
// Title : Exercice2.4.cpp - Square root
// Definition: Asks for a number and tells its square root value
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>
#include <cmath>

// Forces the user to enter a number and returns an error if he doens't
float askNumber()
{
	float userInput = 0;
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
	float userInput = 0;
	
	std::cout << "Please enter a number : ";
	userInput = askNumber();
	
	if(userInput < 0)
		std::cout << "Error : You can't square root a negative number.\n";
	else
	{
		float squaredNum = sqrt(userInput);
		std::cout << "The square root is : " << squaredNum << ".\n";
	}

	system("pause");
    return 0;
}

