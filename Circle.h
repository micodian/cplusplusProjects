#pragma once
#include "pch.h"
#include "Shape.h"

//Circle derived from the shape class
class Circle :
	
	public Shape {

public:
	Circle();
	Circle(int theRadius);
	void setRadius(int newRadius);
	double getRadius();
	virtual double getArea();
	~Circle();

private:
	int radius;
};