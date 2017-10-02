// OOP - Exercice 1.1 : Probabilities
// Definition : Program that randomly outputs a value from a table depending on the probabilities
// Author : Duncan Bourquard
// Date : 02.10.17

#include <iostream>
#include <cstdlib>
#include <ctime>

enum class Fruits 
{
	APPLE,
	ORANGE,
	PINEAPPLE,
	GRAPEFRUIT,
	BLUEBERRIES,
	LENGTH
};

double probabilities[(int)Fruits::LENGTH] =
{
	15, // 15
	10, // 25
	12, // 37
	17, // 54
	46 // 100
};

//this function allows to print SlotResult to std::cout
std::ostream& operator << (std::ostream& os, const Fruits& obj)
{
	os << static_cast<std::underlying_type<Fruits>::type>(obj);
	return os;
}

Fruits chooseRandomFruit()
{
	int sumProba = 0;
	for (int i = 0; i < (int)Fruits::LENGTH; i++)
	{
		sumProba += probabilities[i];
	}

	int proba = rand() % sumProba;
	int sumResult = 0;
	int iResult = 0;

	std::cout << proba << "\n";

	for (iResult = 0; iResult < (int)Fruits::LENGTH; iResult++)
	{
		sumResult += probabilities[iResult];
		if (sumResult > proba)
			break;
	}
	return (Fruits)iResult;
}

int main()
{
	std::srand(time(NULL));

	std::cout << "You should eat this " << chooseRandomFruit() << "\n";

	system("pause");
    return 0;
}

