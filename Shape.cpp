#include "pch.h"
#include "Shape.h"

Shape::Shape() {

	name = "";
}


Shape::Shape(string name) {
	this->name = name;
}

Shape::~Shape() {


}


string Shape::getName() {

	return name;// retrieve name
}



void Shape::setName(string newName) {

	this->name = newName;//set name
}