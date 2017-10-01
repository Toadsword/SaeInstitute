#ifndef CHIEN_H
#define CHIEN_H

#include "Animal.h"

class Chien : public Animal
{
public:
	Chien(std::string name, int hapiness);
	~Chien();

	void play();
	void bore();
};

#endif
