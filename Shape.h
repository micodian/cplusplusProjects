#pragma once
#include "pch.h"
#include <string>
using std::string;




class Shape {

public:
	Shape();
	Shape(string name);
	~Shape();
	string getName();
	void setName(string newName);
	virtual double getArea() = 0;//abstract function to get the area by setting equal to 0

private:
	string name;
};