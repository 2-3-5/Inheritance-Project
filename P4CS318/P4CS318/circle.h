#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDimensionalShape.h"
class Circle : public TwoDimensionalShape
{
public:
	// default constructor with parameters: radius, x, y
	Circle(double = 0.0, double = 0.0, double = 0.0);

	virtual double getRadius() const; // return radius
	virtual double getArea() const; // return area
	void print() const; // output Circle object
private:
	double radius; // Circle's radius
}; // end class Circle
