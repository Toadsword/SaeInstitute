////////////////////////////////////////////////////////////////
// Title : Exercice4.1.cpp - avergae of numbers
// Definition: Asks for five numbers then returns the average of them
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>
#include <array>

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
	std::array<int,5> arrayInt;
	double sumInputs = 0;
	double averageInputs = 0;


	std::cout << "Please enter 5 numbers : \n";
	for (int i = 0; i <= 4; i++)
	{
		arrayInt[i] = askNumber();
		sumInputs += arrayInt[i];

	}
	
	averageInputs = sumInputs / arrayInt.size();

	std::cout << "The average of your numbers is " << averageInputs << ".\n";

	system("pause");
    return 0;
}

