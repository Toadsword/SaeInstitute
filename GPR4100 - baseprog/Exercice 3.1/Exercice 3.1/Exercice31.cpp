////////////////////////////////////////////////////////////////
// Title : Exercice3.1.cpp - sum output
// Definition: Output the sum of the multiples of 3 and 5 for the numbers under 1000
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"
#include <iostream>

const int MAX_NUM = 1000;
const int MULTIPLE_1 = 3;
const int MULTIPLE_2 = 5;
int main()
{

	int sumMultiples = 0;

	for (int i = 1; i < MAX_NUM; i++)
	{
		if(i % MULTIPLE_1 == 0 || i % MULTIPLE_2 == 0)
			sumMultiples += i;
	}

	std::cout << "The sum of the multiples of numbers under " << MAX_NUM << " is " << sumMultiples << "\n";

	system("pause");

	return 0;
}

