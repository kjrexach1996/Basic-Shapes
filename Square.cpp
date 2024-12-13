//Square.cpp - implementation file for the Square class, derived from Rectangle.

#include "Square.h"
using namespace std;

Square::Square(double s, string n)
	: Rectangle(s, s, n)
{
	BasicShape::setName(n);
}