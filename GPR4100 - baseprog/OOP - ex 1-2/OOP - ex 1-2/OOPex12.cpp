// OOP - Exercice 1.2 : Probabilities
// Definition : Program that randomly outputs a value from a table depending on the probabilities
// Author : Duncan Bourquard
// Date : 02.10.17

#include <iostream>
#include <cstdlib>
#include <ctime>

enum class States
{
	NOTHING, 
	JETPACK,
	TIME_TRAVEL,
	FIREFIGHT,
	LOVE,
	LENGTH
};

double probabilities[(int)States::LENGTH] =
{
	1, // NOTHING
	4, // JETPACK
	4, // TIME_TRAVEL
	1, // FIREFIGHT
	2, // LOVE
};

//this function allows to print SlotResult to std::cout
std::ostream& operator << (std::ostream& os, const States& obj)
{
	os << static_cast<std::underlying_type<States>::type>(obj);
	return os;
}

States getRandomState()
{
	int sumProba = 0;
	for (int i = 0; i < (int)States::LENGTH; i++)
	{
		sumProba += probabilities[i];
	}

	int proba = rand() % sumProba;
	int sumResult = 0;
	int iResult = 0;
	std::cout << proba << "\n";

	for (iResult = 0; iResult < (int)States::LENGTH; iResult++)
	{
		sumResult += probabilities[iResult];
		if (sumResult > proba)
			break;
	}
	return (States)iResult;
}

int main()
{

	std::srand(time(NULL));
	std::cout << getRandomState() << "\n";

	system("pause");
	return 0;
}

