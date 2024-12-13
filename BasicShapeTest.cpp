//BasicShapeTest.cpp - This test file will demonstrate 

#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Square.h"

using namespace std;

void callPrint(const BasicShape*);

int main()
{
	const int NUM_SHAPES = 5;

	cout << "Attempting to create a Circle object using a negative radius: " << endl;
	Circle negCircle(0, 0, -4, "negCircle");
	cout << endl;

	cout << "Attempting to create a Rectangle object using a length of 0 and a negative width: " << endl;
	Rectangle negRect(0, -3, "negRectangle");
	cout << endl;

	cout << "Attempting to create a Square object using a negative side: " << endl;
	Square negSquare(-6, "negSquare");
	cout << endl;

	cout << "List the names and areas of various shapes: " << endl << endl;

	BasicShape* shapes[NUM_SHAPES] =
	{
		new Rectangle(3, 4),
		new Rectangle(6.8, 12.6, "myRectangle"),
		new Circle(2, 8, 10.2),
		new Circle(5, 17, 9.3, "myCircle"),
		new Square(4.5)
	};

	for (int i = 0; i < NUM_SHAPES; i++)
	{
		callPrint(shapes[i]);
	}
}

void callPrint(const BasicShape* shape)
{
	cout << "The name of the shape is " << shape->getName() << endl;
	cout << "The area of " << shape->getName() << " is " << setprecision(2) << fixed << shape->getArea() << " square units." << endl;
	cout.unsetf(ios::fixed);
	cout << endl;
}