#include "Shapes.h"
#include <cmath> // sqrt
#include <algorithm> // min, max

Shape::Shape(double x, double y) : x(x), y(y)
{
}

Shape::~Shape()
{
}


Rectangle::Rectangle(double x, double y, double width, double height) : Shape(x, y), width(width), height(height)
{
}

Rectangle::~Rectangle()
{
}

bool Rectangle::isColliding(Shape * collider)
{
	if (dynamic_cast<Rectangle*>(collider))
		this->isColliding(dynamic_cast<Rectangle*>(collider));
	else if (dynamic_cast<Circle*>(collider))
		this->isColliding(dynamic_cast<Circle*>(collider));
	else
		return false;
}

bool Rectangle::isColliding(Circle * collider)
{
	double deltaX = collider->x - std::max(this->x, std::min(collider->x, this->x + this->width));
	double deltaY = collider->y - std::max(this->x, std::min(collider->y, this->y + this->height));;
	return ((deltaX * deltaX + deltaY * deltaY) < (collider->r * collider->r));
}

bool Rectangle::isColliding(Rectangle * collider)
{
	return (this->x < collider->x + collider->width &&
		this->x + this->width > collider->x &&
		this->y < collider->y + collider->height &&
		this->height + this->y > collider->y);
}

Circle::Circle(double x, double y, double r) : Shape(x, y), r(r)
{
}


Circle::~Circle()
{
}

bool Circle::isColliding(Shape * collider)
{
	if (dynamic_cast<Rectangle*>(collider))
		this->isColliding(dynamic_cast<Rectangle*>(collider));
	else if (dynamic_cast<Circle*>(collider))
		this->isColliding(dynamic_cast<Circle*>(collider));
	else
		return false;
}

bool Circle::isColliding(Circle * collider)
{

	double dx = this->x - collider->x;
	double dy = this->y - collider->y;
	double distance = sqrt(dx * dx + dy * dy);

	if (distance < this->r + collider->r)
		return true;
	return false;
}

bool Circle::isColliding(Rectangle * collider)
{
	float deltaX = this->x - std::max(collider->x, std::min(this->x, collider->x + collider->width));
	float deltaY = this->y - std::max(collider->y, std::min(this->y, collider->y + collider->height));
	if ((deltaX * deltaX + deltaY * deltaY) < (this->r * this->r))
		return true;
	return false;
}
