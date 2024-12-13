//Square.h - specification file for the Square class, derived from Rectangle.

#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
private:
	double side;
public:
	//Mutator

	//Preconditions : double value must be positive and accessible
	//Postconditions : value will be stored in side member
	void setSide(double s)
	{
		side = s;
	}

	//Accessor

	//Preconditions : Value in side member must be accessible
	//Postconditions : Value will be returned and used to calculate the area of the square
	double getSide()
	{
		return side;
	}

	//Constructor

	//Preconditions: value of side must be positive; this constructor calls the Rectangle constructor in its base class
	//so the square's side member value must be passed twice; must have access to setName() and calcArea() functions in BasicShape
	//Postconditions : shoudl length and /or width not be positive, square object will be not created and an error message will appear;
	//otherwise, function calls setName() to store the name of the shape, sets all four sides of the square to side member variable and
	//calls calcArea() to calculate the area of the square using the same definition in Rectangle class
	Square(double, std::string = "Square");
};
