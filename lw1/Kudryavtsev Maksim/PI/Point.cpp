#include "stdafx.h"
#include "Point.h"


Point::Point()
{
	m_x = 0;
	m_y = 0;
}

Point::Point(double x, double y)
{
	m_x = x;
	m_y = y;
}


double Point::GetX()
{
	return m_x;
}

double Point::GetY()
{
	return m_y;
}



Point::~Point()
{
}
