////////////////////////////////////////////////////////////////
// Title : Exercice4.2.cpp - avergae of numbers
// Definition: Asks for numbers to the user, then returns the average of them
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>

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
	double sumInputs = 0;
	double averageInputs = 0;
	int userNbInput = 1;

	std::cout << "With how many numbers do you want to make the average? ";
	userNbInput = askNumber();

	for (int i = 1; i <= userNbInput; i++)
	{
		std::cout << "Please enter the " << i << " number : ";
		sumInputs += askNumber();
	}

	averageInputs = sumInputs / userNbInput;

	std::cout << "The average of your numbers is " << averageInputs << ".\n";

	system("pause");
	return 0;
}

