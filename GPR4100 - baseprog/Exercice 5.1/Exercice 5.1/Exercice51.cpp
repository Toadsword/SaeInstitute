// Exercice5.1.cpp - Fibonachi numbers
// Definition : The user asks for the Nth occurence of the Fibonacchi list.
// Author : Duncan Bourquard
// Date : 19.09.17

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

int fib(int n)
{
	int lowNum = 0;
	int highNum = 1;
	if (n == 1)
		return lowNum;

	for (int i = 0; i < n-2; i++)
	{
		int tmp_lownum = highNum;
		highNum += lowNum;
		lowNum = tmp_lownum;
	}
	return highNum;
}

int main()
{
	int userInput = 0;
	int fiboOccurence = 0;
	
	std::cout << "Which occurence of the Fibonacchi list do you want? :";
	userInput = askNumber();
	fiboOccurence = fib(userInput);

	std::cout << "Your finale number is :" << fiboOccurence << ".\n";

	system("pause");
    return 0;
}

