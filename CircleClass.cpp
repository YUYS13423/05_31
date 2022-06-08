#include "CircleClass.h"


CircleClass::CircleClass() : c({ 0 })//-->0���� �ʱ�ȭ 
{
//�ȿ� �ƹ����� ��� ó���� �� ����
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
	//������ * ������ * PI --> ���� ����
	return c.radius * c.radius * PI;
}

double CircleClass::getDistance(CircleType target)
{
	double dx = c.center.x - target.center.x;
	double dy = c.center.y - target.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);//sqrt : ������
	return dCntr;
}

bool CircleClass::IsOverLapped(CircleType target)
{
	double distance = getDistance(target);
	return (distance < c.radius + target.radius);

}


