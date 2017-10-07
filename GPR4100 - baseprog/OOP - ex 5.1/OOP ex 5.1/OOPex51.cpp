// OOP ex 5.1 - Collision
// Description : Check if two boxes touche themselves in a grid.
// Author : Duncan Bourquard
// Date : 03.10.2017


#include <iostream>
#include "box.h"

int main()
{
	Box b1 = Box(2.0, 3.0, 4.0, 5.0);
	Box b2 = Box(5.0, 4.0, 3.0, 2.0);

	if (b1.isColliding(b2))
	{
		std::cout << "Wistiti\n";
	}
	else
	{
		std::cout << "Nomenclature\n";
	}
	system("pause");
}