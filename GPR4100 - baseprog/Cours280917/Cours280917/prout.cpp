
#include "Prout.h"
#include <iostream>

Prout::Prout(int new_private_value)
{
	this->private_value = new_private_value;
}

void hello()
{

}

void Prout::hello()
{
	std::cout << this->private_value << "\n";
}