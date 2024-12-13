//BasicShape.h - specification files for the abstract base class BasicShape.

#pragma once
#include <string>

class BasicShape
{
private:
	double area;
	std::string name;
public:
	//Preconditions : Area member must be accessible, must be positive
	//Postconditions : Value will have been stored in area member during object construction
	void setArea(double a)
	{
		area = a;
	}

	//Preconditions : Name member must be accessible
	//Postconditions : Value will have been stored in name member during object construction
	void setName(std::string n)
	{
		name = n;
	}

	//Preconditions : Area member must be accessible; derived class objects should be able to call this function
	//Postconditions : Area will be returned and displayed to two decimal places
	double getArea() const
	{
		return area;
	}

	//Preconditions : Name member must be accessible; derived class objects should be able to call this function
	//Postconditions : Name will be returned; either user-supplied string or default will be displayed
	std::string getName() const
	{
		return name;
	}

	//Preconditions : Function must be accessible in all derived classes and defined; must have access to setArea()
	//Postconditions : Depending on the shape, function will calculate the area of the shape; area will be stored in shape's area member using setArea()
	virtual void calcArea() = 0;
};
