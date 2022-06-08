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

class CircleClass //설계도
{
public:
//-->
	CircleClass();//생성자
	CircleClass(double x, double y, double radius);
	~CircleClass();//파괴자

	void initialize(double x, double y, double radius);
	double circleArea();
	double getDistance(CircleType target);
	bool IsOverLapped(CircleType target);
	


	CircleType c;

//<--public 영역
private:
//-->


//<--private 영역
protected:
//-->
//<--protected 역역
public:
//-->


//<--public 영역
public://모든 곳에서 접근할수 있음
private://다른 곳에서 접근할수 없음
protected://자식까지는 접근할수 있음
};