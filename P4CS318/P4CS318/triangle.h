#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "TwoDimensionalShape.h"
class Triangle : public TwoDimensionalShape
{
public:
	// default constructor with parameters: x1,y1, x2,y2, x3,y3
	Triangle(double, double, double, double, double, double);
	//note no default, 0-argument constructor
	virtual double getPoint1x() const { return x1; } //get coordinates for
	each of the three points forming the triangle.
		virtual double getPoint1y() const { return y1; }
	virtual double getPoint2x() const { return x2; }
	virtual double getPoint2y() const { return y2; }
	virtual double getPoint3x() const { return x3; }
	virtual double getPoint3y() const { return y3; }
	virtual double getSide1Length() const; // return length of side1 (which
	is side1 arbitrary but fixed) of triangle
	virtual double getSide2Length() const; // return length of side2 of
	triangle
		virtual double getSide3Length() const; // return length of side3 of
	triangle
		virtual double getArea() const; // return area of triangle
	void print() const; // output triangle object
private: //some redundancy built-in sides can be computed from points,
	but we store the side lengths
		double x1, y1; // numbering of points is arbitrary but fixed after chosen
	double x2, y2; // second of three
	double x3, y3; // third of three
	double side1; // side1 = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) )
	double side2; // side2 = sqrt( (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) )
	double side3; // side3 = sqrt( (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) )
}; // end class Triangle
