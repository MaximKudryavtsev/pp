#pragma once
class RandomGenerator
{
public:
	RandomGenerator();
	double GetRandomNumber(const double &min, const double &max);
	Point GetPoint(const int sqaureSide);
	~RandomGenerator();
};

