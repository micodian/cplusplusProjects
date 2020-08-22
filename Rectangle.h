#pragma once
#include "pch.h"
#include "Shape.h"

class Rectangle :

	public Shape
{
public:
	Rectangle();
	Rectangle(int h, int w);
	~Rectangle();
	int getHeight();//get height
	int getWidth();//get width
	void setHeight(int newHeight);
	void setWidth(int newWidth);
	virtual double getArea();
private:
	int height;
	int width;

};
