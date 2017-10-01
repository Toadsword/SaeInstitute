#ifndef ANIMAL_H
#define ANIMAL_H


#include <string>

class Animal
{
protected:
	int hapiness;
	std::string name;

public:
	Animal(std::string name, int hapiness);
	~Animal();

	void print_animal_state();
};

#endif