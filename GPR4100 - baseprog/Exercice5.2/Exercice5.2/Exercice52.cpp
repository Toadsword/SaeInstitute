// Exercice5.2.cpp - Fibonachi numbers - without loops
// Definition : The user asks for the Nth occurence of the Fibonacchi list.
// Author : Duncan Bourquard
// Date : 19.09.17

#include "stdafx.h"
#include <iostream>

const int LOW_NUM_START = 0;
const int HIGH_NUM_START = 1;

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

int countFibonacchi(int lowNumber, int highNumber, int nFiboAsked, int counter = 1)
{
	int tmp_lownum = highNumber;
	highNumber += lowNumber;
	lowNumber = tmp_lownum;
	counter++;
	if (counter != nFiboAsked) 
		return countFibonacchi(lowNumber, highNumber, nFiboAsked, counter);
	else
		return highNumber;
	
}

int main()
{
	int userInput = 0;
	int fiboResult = 0;

	std::cout << "Which occurence of the Fibonacchi list do you want? :";	
	userInput = askNumber();

	fiboResult = countFibonacchi(LOW_NUM_START, HIGH_NUM_START, userInput);

	std::cout << "Your finale number is :" << fiboResult << ".\n";

	system("pause");
	return 0;
}

