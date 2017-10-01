// Exercice63.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	unsigned long long lowNum = 0;
	unsigned long long highNum = 1;

	std::cout << lowNum << " " << highNum << " ";
	
	for (int i = 1; i < 1000; i++)
	{
		unsigned long long tmp_lownum = highNum;
		highNum += lowNum;
		lowNum = tmp_lownum;

		std::cout << highNum << " ";
	}

	system("pause");
	return 0;
}

