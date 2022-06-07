#pragma once
#include <iostream>

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

class CircleClass //���赵
{
public://��� ������ �����Ҽ� ����
private://�ٸ� ������ �����Ҽ� ����
protected://�ڽı����� �����Ҽ� ����

public:
//-->
	CircleClass();//������
	~CircleClass();//�ı���

	double circleArea();
	double getDistance(CircleType target);
	bool IsOverLapped(CircleType target);
	


	CircleType c;

//<--public ����
private:
//-->


//<--private ����
protected:
//-->
//<--protected ����
public:
//-->


//<--public ����
};