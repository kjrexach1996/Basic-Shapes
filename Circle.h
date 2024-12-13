//Circle.h - specification file the for Circle class, derived from BasicShape.

#pragma once
#include <string>
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	int xCenter;
	int yCenter;
	double radius;
public:
	//Mutators

	//Preconditions : xCenter must be accessible
	//Postconditions : xCenter will store int value representing x-coordinate
	void setX(int x)
	{
		xCenter = x;
	}

	//Preconditions : yCenter must be accessible
	//Postconditions : yCenter will store int value representing y-coordinate
	void setY(int y)
	{
		yCenter = y;
	}

	//Preconditions : radius must be accessible, cannot be negative
	//Postconditions : radius will store double value representing radius of the circle
	void setRadius(double r)
	{
		radius = r;
	}

	//Accessors

	//Preconditions : xCenter must be accessible
	//Postconditions : Function will return value in xCenter
	int getX()
	{
		return xCenter;
	}

	//Preconditions : yCenter must be accessible
	//Postconditions : Function will return value in yCenter
	int getY()
	{
		return yCenter;
	}

	//Preconditions : radius must be accessible and will be positive
	//Postconditions : Function will return value in radius 
	double getRadius()
	{
		return radius;
	}

	//Preconditions : Function must be accessible from constructor, must also have access to both radius member and setArea() in BasicShape
	//Postconditions : Function will calculate area of the circle and store result in area member using setArea()
	void calcArea();

	//Constructors

	//Preconditions : Function must be accessible from constructor, must also have access to both radius member and setArea() in BasicShape
	//Postconditions : Function will calculate area of the circle and store result in area member using setArea()
	Circle(int, int, double, std::string = "Circle");
};
