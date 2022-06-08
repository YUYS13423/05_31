#include "CircleClass.h"


CircleClass::CircleClass() : c({ 0 })//-->0으로 초기화 
{
//안에 아무값이 없어서 처리할 값 없음
}

CircleClass::CircleClass(double x, double y, double radius)
{
	initialize(x, y, radius);
}

CircleClass::~CircleClass()
{

}

void CircleClass::initialize(double x, double y, double radius)
{
	c.center.x = x;
	c.center.y = y;
	c.radius = radius;

}

double CircleClass::circleArea()
{
	//반지름 * 반지름 * PI --> 원의 넓이
	return c.radius * c.radius * PI;
}

double CircleClass::getDistance(CircleType target)
{
	double dx = c.center.x - target.center.x;
	double dy = c.center.y - target.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : 제곱근
	return dCntr;
}

bool CircleClass::IsOverLapped(CircleType target)
{
	double distance = getDistance(target);
	return (distance < c.radius + target.radius);

}


