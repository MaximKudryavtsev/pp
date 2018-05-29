#pragma once
class Point
{
public:
	Point();
	Point(double x, double y);
	double GetX();
	double GetY();
	~Point();
private:
	double m_x;
	double m_y;
};

