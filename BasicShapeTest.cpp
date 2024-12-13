//BasicShapeTest.cpp - This test file will demonstrate the use of abstract base classes
//and virtual functions to eliminate the slicing problem when passing objects derived from
//abstract base classes by value instead of through pointers or reference.

#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Square.h"

using namespace std;

void callPrint(const BasicShape*);

int main()
{
	//Length of pointer array
	const int NUM_SHAPES = 5;

	//Testing for invalid inputs
	cout << "Attempting to create a Circle object using a negative radius: " << endl;
	Circle negCircle(0, 0, -4, "negCircle");
	cout << endl;

	cout << "Attempting to create a Rectangle object using a length of 0 and a negative width: " << endl;
	Rectangle negRect(0, -3, "negRectangle");
	cout << endl;

	cout << "Attempting to create a Square object using a negative side: " << endl;
	Square negSquare(-6, "negSquare");
	cout << endl;

	//Testing for name and area of shape
	cout << "List the names and areas of various shapes: " << endl << endl;

	BasicShape* shapes[NUM_SHAPES] =
	{
		new Rectangle(3, 4),
		new Rectangle(6.8, 12.6, "myRectangle"),
		new Circle(2, 8, 10.2),
		new Circle(5, 17, 9.3, "myCircle"),
		new Square(4.5)
	};

	//Looping through array and calling callPrint for each shape
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