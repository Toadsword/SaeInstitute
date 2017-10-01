// Exercice5.3.cpp - Fibonachi numbers - without loops
// Definition : The user asks for the Nth occurence of the Fibonacchi list.
// Author : Duncan Bourquard
// Date : 19.09.17

#include "stdafx.h"
#include <iostream>

const int MAX_NUM_FIBO = 4000000;

// Fonction forcant l'utilisateur � retourner un nombre
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
	int lowNum = 0;
	int highNum = 1;
	int sumEvenNumbers = 0;

	while (highNum < MAX_NUM_FIBO)
	{
		int tmp_lownum = highNum;
		highNum += lowNum;
		lowNum = tmp_lownum;
		if (highNum % 2 == 0) {
			sumEvenNumbers += highNum;
		}
	}

	std::cout << "The sum of the even numbers of the Fibo list is :" << sumEvenNumbers << ".\n";

	system("pause");
	return 0;
}

