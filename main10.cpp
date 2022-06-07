#include <iostream>

#include "employeestruct.h"

using namespace std;

const double PI = 3.14159265358979;

struct C2dType// Circle 2D Type
{
	double x, y;

};

struct CircleType
{
	C2dType center;
	double radius;
};

double circleArea(CircleType c)
{
	//반지름 * 반지름 * PI --> 원의 넓이
	return c.radius * c.radius * PI;
}

double getDistance(CircleType c1, CircleType c2)
{
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : 제곱근
	return dCntr;
}

bool IsOverLapped(CircleType c1, CircleType c2)
{
	double distance = getDistance(c1, c2);
	return (distance < c1.radius + c2.radius);
}

int Lappednum(CircleType c1, CircleType c2)
{
	double distance = getDistance(c1, c2);
	if (distance < c1.radius + c2.radius)
	{
		return 2;
	}
	else if (distance == c1.radius + c2.radius)
	{
		return 1;
	}
	else if (distance > c1.radius + c2.radius)
	{
		return 0;
	}
}

int main() 
{
	CircleType c1, c2;
	c1.center.x = 10;
	c1.center.y = 0;
	c1.radius = 10;

	c2.center.x = 30;
	c2.center.y = 0;
	c2.radius = 11;
	
	bool blsOverLapped = IsOverLapped(c1, c2);
	cout << "IsOverLapped = " << boolalpha << IsOverLapped(c1, c2) << noboolalpha << endl;

	if (blsOverLapped == 1)
	{
		cout << "겹치는 부분의 수 "<< Lappednum(c1,c2) << endl;
	}

	//Employee aaa;//객체지향 


}