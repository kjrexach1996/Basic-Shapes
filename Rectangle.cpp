//Rectangle.cpp - implementation file the for Rectangle class, derived from BasicShape.

#include "Rectangle.h"
#include <iostream>
#include <iomanip>
using namespace std;

Rectangle::Rectangle(double l, double w, string n)
{
	if (l <= 0 || w <= 0)
	{
		if (l == w)
		{
			cout << "ERROR! Could not create square. ";
		}
		else
		{
			cout << "ERROR! Could not create rectangle. ";
		}
		cout << "All sides must be positive values." << endl;
	}
	else
	{
		BasicShape::setName(n);
		setLength(l);
		setWidth(w);
		calcArea();
	}
	
}

void Rectangle::calcArea()
{
	double a = length * width;

	BasicShape::setArea(a);
}