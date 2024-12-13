//Rectangle.h - specification file for the Rectangle class, derived from BasicShape.

#pragma once
#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	double length;
	double width;
public:
	//Mutators

	//Preconditions : value must be positive and function must have access to length member
	//Postconditions : Positive value will be stored in length member
	void setLength(double l)
	{
		length = l;
	}

	//Preconditions : value must be positive and function must have access to width member
	//Postconditions : Positive value will be stored in width member
	void setWidth(double w)
	{
		width = w;
	}

	//Accessors

	//Preconditions : length must be accessible
	//Postconditions : length value is accessed and returned
	double getLength()
	{
		return length;
	}

	//Preconditions : width must be accessible
	//Postconditions : width value is accessed and returned
	double getWidth()
	{
		return width;
	}

	//Preconditions : length and width values are accessible and positive
	//Postconditions : Function will multiply length and width values together to calculate the area of the rectangle;
	//function will execute setArea() to store the result in area member
	void calcArea();

	//Constructors

	//Preconditions : length and width values must be positive; constructor must have access to base class'
	//calcArea() and setName() functions to store values
	//Postconditions : should length and /or width be 0 or negative, an error message will display and the shape 
	//will not be created; otherwise, function calls setName() to store the shape's name, sets values to the shape's
	//member variables and calls calcArea() to calculate the area of the rectangle and store the result.
	Rectangle(double, double, std::string = "Rectangle");
};
