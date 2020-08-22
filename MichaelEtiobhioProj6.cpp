// MichaelEtiobhioProj6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;




int main() {

	Circle c(2);
	cout <<c.getName() << " with given radius of " << c.getRadius()<<
		" has an area of " <<c.getArea() << endl;//print area of the circle
	
	Rectangle r(3, 4);
	cout<< "The " << r.getName() << " with a given width " <<
		r.getWidth() << " and height " <<
		r.getHeight() << " has an area " <<
		r.getArea() << endl;//print area of the rectangle

	

	system("pause");
	return 0;




}