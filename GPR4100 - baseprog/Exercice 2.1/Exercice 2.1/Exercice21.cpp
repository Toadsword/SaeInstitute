// Exercice2.1.cpp : Définit le point d'entrée pour l'application console.
// Definition : Asks for the radius of the circle and returns the perimeter
// Author : Duncan Bourquard
// Date : 14.09.17

#include "stdafx.h"

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>


int main()
{
	int radius = 0;
	float perimeter = 0;

	std::cout << "Enter the radius of your circle: ";
	std::cin >> radius;

	perimeter = radius * 2 * M_PI;

	std::cout << "The perimeter is " << perimeter << "\n";

	system("pause");
    return 0;
}

