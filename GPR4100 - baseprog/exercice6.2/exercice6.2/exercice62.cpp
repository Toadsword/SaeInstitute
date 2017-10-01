////////////////////////////////////////////////////////////////////////////////// 
// Exercice6.2.cpp : MaxNum et LowestNum of an array
// Description : The program asks the user for 10 integers and stores them in an array,
//		then the program returns, using pointers, the max and min value of the array
// Author : Duncan Bourquard
// Date : 21.09.17

#include "stdafx.h"
#include <iostream>
#include <limits>

const int ARRAY_SIZE = 10;

// Assures the input from the user to be a number
int askNumber()
{
	int userInput = 0;
	std::cin >> userInput;

	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "I said a number. Try again : ";
		std::cin >> userInput;
	}
	return userInput;
}

// Return the pointer of the highest number of the array
int* maxFromArray(int numbers_length, int* numbersArray)
{
	int max = std::numeric_limits<int>::min(); // We begin from the bottom
	int * iterMax = NULL;
	for (int i = 0; i < numbers_length; i++)
	{
		if (*(numbersArray + i) > max) 
		{
			iterMax = numbersArray + i;
			max = *(numbersArray + i);
		}
	}
	return iterMax;
}

// Return the pointer of the lowest number of the array
int* minFromArray(int numbers_length, int* numbersArray)
{
	int min = std::numeric_limits<int>::max(); // We begin from the top
	int * iterMin = NULL;
	for (int i = 0; i < numbers_length; i++)
	{
		if (*(numbersArray + i) < min)
		{
			iterMin = numbersArray + i;
			min = *(numbersArray + i);
		}
	}
	return iterMin;
}

int main()
{
	int ArrayInt[ARRAY_SIZE];
	int* p = ArrayInt;

	std::cout << "Please enter 10 numbers.\n";

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		*(p + i) = askNumber();
	}

	std::cout << "The highest number you entered is : " << *(maxFromArray(ARRAY_SIZE, p)) << ".\n";
	std::cout << "The lowest number you entered is : " << *(minFromArray(ARRAY_SIZE, p)) << ".\n";


	system("pause");
	return 0;
}