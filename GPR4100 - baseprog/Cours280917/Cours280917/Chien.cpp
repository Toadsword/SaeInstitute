#include "stdafx.h"
#include "Chien.h"


Chien::Chien(std::string name, int hapiness):Animal(name, hapiness)
{
}

Chien::~Chien()
{
}

void Chien::play()
{
	hapiness++;
}

void Chien::bore()
{
	hapiness--;
}
