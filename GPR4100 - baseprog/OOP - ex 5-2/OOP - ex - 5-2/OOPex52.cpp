// OOP ex 5.2 - Collision
// Description : Check if two shapes touche themselves in a grid. This program can check circles and rectangles
// Author : Duncan Bourquard
// Date : 03.10.2017

#include "Shapes.h"
#include <iostream>

int main()
{
	Shape* s1 = new Rectangle(3.0, 4.0, 5.0, 6.0);
	Shape* s2 = new Circle(6.0, 5.0, 3.0);

	std::cout << "s1 stats : x: " << s1->x << " y: " << s1->y << "\n";
	std::cout << "s2 stats : x: " << s2->x << " y: " << s2->y << "\n";

	if (s2->isColliding(s1))
	{
		std::cout << "Ouistiti\n";
	}
	else
	{
		std::cout << "Nomenclature\n";
	}

	delete s1;
	delete s2;
	system("pause");
	return 0;
}


