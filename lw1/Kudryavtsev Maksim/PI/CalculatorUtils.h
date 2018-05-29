#pragma once
class CalculatorUtils
{
public:
	CalculatorUtils();
	static bool IsPointInCircle(Point &point);
	static size_t GetPointsInCircle(size_t countIterations);
	~CalculatorUtils();
};

