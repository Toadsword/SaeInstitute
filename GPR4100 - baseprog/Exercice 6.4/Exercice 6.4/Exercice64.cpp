// Exercice64.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

const int NB_PRIME_TO_GET = 1000;

int main()
{
	bool isPrime = false;
	int currentNumber = 2;

	for (int iOccurence = 1; iOccurence <= NB_PRIME_TO_GET; iOccurence++)
	{
		isPrime = false;
		while (!isPrime)
		{
			currentNumber++;
			isPrime = true;
			for (int i_test = currentNumber - 1; i_test > 1; i_test--)
			{
				if (currentNumber % i_test == 0)
				{
					isPrime = false;
					break;
				}
			}
		}
		std::cout << currentNumber << " ";
	}
	system("pause");
	return 0;
}

