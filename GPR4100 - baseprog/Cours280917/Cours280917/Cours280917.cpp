// Cours280917.cpp : Définit le point d'entrée pour l'application console.
//

#include <iostream>
#include <random>
#include <ctime>

#include "Animal.h"
#include "Chat.h"
#include "Chien.h"

#define CHAT_HAPINESS -5
#define CHIEN_HAPINESS 5
#define CHIEN_MINUTE_JEU 30

int main()
{
	std::srand(time(nullptr));

	Chien chien("Dogo", CHIEN_HAPINESS);
	Chat chat("Felix", CHAT_HAPINESS);

	chat.print_animal_state();
	chien.print_animal_state();

	chat.hunt_mouse(std::rand() % 2);
	chat.print_animal_state();

	for (int minute = 0; minute < CHIEN_MINUTE_JEU; minute++)
	{
		std::rand() % 2 ? chien.play() : chien.bore();
	}
	chien.print_animal_state();

	system("pause");
    return 0;
}

