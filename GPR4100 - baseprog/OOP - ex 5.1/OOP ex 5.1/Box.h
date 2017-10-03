#ifndef BOX_H
#define BOX_H

class Box
{
private:
	double x,y;
	double size_x, size_y;
public:
	Box(double x, double y, double size_x, double size_y);

	bool isColliding(Box&);
};
#endif
