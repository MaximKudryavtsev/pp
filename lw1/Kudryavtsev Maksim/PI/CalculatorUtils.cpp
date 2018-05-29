#include "stdafx.h"
#include "CalculatorUtils.h"

const double SQUARE_SIDE = 2;

CalculatorUtils::CalculatorUtils()
{
}

bool CalculatorUtils::IsPointInCircle(Point &point)
{
	return point.GetX() * point.GetX() + point.GetY() * point.GetY() <= 1;
}

size_t CalculatorUtils::GetPointsInCircle(size_t countIterations)
{
	RandomGenerator random;
	size_t countPointInCircle = 0;
	for (size_t i = 0; i < countIterations; i++)
	{
		Point point = random.GetPoint(SQUARE_SIDE);
		if (IsPointInCircle(point))
		{
			++countPointInCircle;
		}
	}
	return countPointInCircle;
}

CalculatorUtils::~CalculatorUtils()
{
}
