#include "pch.h"
#include "Circle.h"

//implementation of Circle

Circle::Circle() :Shape("Circle"), radius(0) {}//call the shape and give it the name of circle, radius set to 0

Circle::Circle(int newRadius) : Shape("Circle"), radius(newRadius) {}//set radius to new value

Circle::~Circle(){}

void Circle::setRadius(int newRadius) {

	this->radius = newRadius;
}

double Circle::getRadius() {

	return radius; // get radius
}

double Circle::getArea() {

	return 3.14159 * radius * radius;// return to compute area of the circle
}


