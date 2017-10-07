#ifndef SHAPE_H
#define SHAPE_H

class Shape;
class Rectangle;
class Circle;

class Shape
{
public:
	Shape(double x, double y);
	~Shape();
	virtual bool isColliding(Shape* collider) = 0;

	double x;
	double y;
};

class Rectangle : public Shape
{
public:
	Rectangle(double x, double y, double width, double height);
	~Rectangle();
	bool Rectangle::isColliding(Shape* collider);
	bool Rectangle::isColliding(Circle* collider);
	bool Rectangle::isColliding(Rectangle* collider);

	double width;
	double height;
};

class Circle : public Shape
{
public:
	Circle(double x, double y, double r);
	~Circle();
	bool Circle::isColliding(Shape* collider);
	bool Circle::isColliding(Circle* collider);
	bool Circle::isColliding(Rectangle* collider);

	double r;
};

#endif
