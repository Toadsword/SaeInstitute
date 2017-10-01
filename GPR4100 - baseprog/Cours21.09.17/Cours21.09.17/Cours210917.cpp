// Cours210917.cpp : Définit le point d'entrée pour l'application console.
//

#include <iostream>
#include <vector>
#include <list>
#include "prout.h"

int main()
{
	/*
	int a = 3;
	int b = 2;
	std::vector<int> v{ 3,5,2,2,5,1,45,6,2 };

	std::cout << "A: " << a << "; B: " << b << "\n";
	switch_values(&a, &b);
	std::cout << "A: " << a << "; B: " << b << "\n";

	std::cout << v.size() << "\n";
	v.push_back(2);
	std::cout << v.size() << "\n";
	v.pop_back();
	std::cout << v.size() << "\n";

	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << "\n";
	}
	for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << *iter << "\n";
	}
	*/

	std::list<int> listeuh{ 1,2,3,4,5,6,7,8 };

	auto eraser_iter = listeuh.begin();
	std::advance(eraser_iter, 5);
	listeuh.erase(eraser_iter);

	for (auto iter = listeuh.begin(); iter != listeuh.end(); iter++)
	{
		std::cout << *iter << "\n";
	}


	system("pause");
    return EXIT_SUCCESS;
}

