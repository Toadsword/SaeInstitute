#include "stdafx.h"
#include "Animal.h"

#include <iostream>


Animal::Animal(std::string name, int hapiness): name(name), hapiness(hapiness)
{

}


Animal::~Animal()
{
}

void Animal::print_animal_state()
{
	std::cout << name << " has a value of hapiness of " << hapiness << "\n";
}
