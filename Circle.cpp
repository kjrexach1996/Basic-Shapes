//Circle.cpp - implementation file the for Circle class, derived from BasicShape.

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <iomanip>
#include "Circle.h"

using namespace std;

Circle::Circle(int x, int y, double r, string n)
{
	if (r <= 0)
	{
		cout << "ERROR! Could not create circle. Radius must be a positive value." << endl;
	}
	else
	{
		BasicShape::setName(n);
		setX(x);
		setY(y);
		setRadius(r);
		calcArea();
	}
}

void Circle::calcArea()
{
	double a;

	a = M_PI * pow(radius, 2);

	BasicShape::setArea(a);
}