#include "Box.h"

Box::Box(double x, double y, double size_x, double size_y)
{
	this->x = x;
	this->y = y;
	this->size_x = size_x;
	this->size_y = size_y;

}

bool Box::isColliding(Box &box)
{
	if (this->x < box.x + box.size_x &&
		this->x + this->size_x > box.x &&
		this->y < box.y + box.size_y &&
		this->size_y + this->y > box.y)
		return true;
	else
		return false;
}
