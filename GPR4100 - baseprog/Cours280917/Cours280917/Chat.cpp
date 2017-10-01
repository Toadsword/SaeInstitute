#include "stdafx.h"
#include "Chat.h"


Chat::Chat(std::string name, int hapiness) :Animal(name, hapiness)
{
}


Chat::~Chat()
{
}

void Chat::hunt_mouse(bool success)
{
	/*if (success)
	{
		hapiness++;
	}
	else
	{
		hapiness--;
	}*/
	success ? hapiness++ : hapiness--;
}
