// Exercice5.5.cpp - Fibonachi numbers - sum of the Prime ones
// Author : Duncan Bourquard
// Date : 06.10.17

#include "stdafx.h"
#include <iostream>
#include <cmath>

#define MAX_NUM_FIBO 4000000
#define FIRST_FIB_NUM 0
#define SECOND_FIB_NUM 1

int main()
{
	int lowNum = FIRST_FIB_NUM;
	int highNum = SECOND_FIB_NUM;
	int sumPrimeNumbers = 0;
	bool isPrime = true;

	while (highNum < MAX_NUM_FIBO)
	{
		int tmp_lownum = highNum;
		highNum += lowNum;
		lowNum = tmp_lownum;

		isPrime = true;
		for (int i = sqrt(highNum); i > 1; i--)
		{
			if (highNum % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			sumPrimeNumbers += highNum;
	}

	std::cout << "The sum of the prime numbers of the Fibo list is :" << sumPrimeNumbers << ".\n";

	system("pause");
	return 0;
}

