#include "pch.h"
#include "Rectangle.h"
//implementation of the rectangle class
Rectangle::Rectangle():Shape("Rectangle"),height(0), width(0)/*call shape and give name of Rectangle*/ {

}

Rectangle::~Rectangle()/*destructor*/ {

}


Rectangle::Rectangle(int h, int w) :Shape("Rectangle"), height(h), width(w) {

}



int Rectangle::getHeight() {
	
	return height;//get the height
}

int Rectangle::getWidth() {
	
	return width;//get the width
}

void Rectangle::setHeight(int newHeight) {

	height = newHeight;
}
void Rectangle::setWidth(int newWidth) {

	width = newWidth;

}
 double  Rectangle::getArea() {

	 return width * height;
}