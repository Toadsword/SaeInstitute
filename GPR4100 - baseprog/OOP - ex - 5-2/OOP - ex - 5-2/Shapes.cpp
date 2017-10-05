#include "Shapes.h"

Shape::Shape(double x, double y)
{
}


Shape::~Shape()
{
}

bool Shape::isColliding(Shape* collider)
{
	return false;
}


Rectangle::Rectangle(double x, double y, double width, double height) : Shape(x, y)
{
}


Rectangle::~Rectangle()
{
}

bool Rectangle::isColliding(Shape * collider)
{

	return false;
}

bool Rectangle::isColliding(Circle * collider)
{

	return false;
}

bool Rectangle::isColliding(Rectangle * collider)
{

	return false;
}

Circle::Circle(double x, double y, double r) : Shape(x, y)
{
}


Circle::~Circle()
{
}

bool Circle::isColliding(Shape * collider)
{

	return false;
}

bool Circle::isColliding(Circle * collider)
{

	return false;
}

bool Circle::isColliding(Rectangle * collider)
{

	return false;
}
