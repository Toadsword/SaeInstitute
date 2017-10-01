#ifndef CHAT_H
#define CHAT_H

#include "Animal.h"

class Chat : public Animal
{
public:
	Chat(std::string name, int hapiness);
	~Chat();

	void hunt_mouse(bool success);
};

#endif