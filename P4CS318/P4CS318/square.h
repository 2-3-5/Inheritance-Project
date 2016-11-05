#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
class Square : public Rectangle
{
public:
	// default constructor with parameters: side, x, y
	Square(double = 0.0, double = 0.0, double = 0.0);

	virtual double getSideLength() const; // return length of sides
	virtual double getArea() const; // return area of Square
	void print() const; // output Square object
private:
	double sideLength; // length of sides
}; // end class Square

