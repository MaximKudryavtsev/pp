#include "stdafx.h"
#include "RandomGenerator.h"


RandomGenerator::RandomGenerator()
{
}

double RandomGenerator::GetRandomNumber(const double &min, const double &max)
{
	return (double)(rand()) / RAND_MAX * (max - min) + min;
}

Point RandomGenerator::GetPoint(const int squareSize)
{
	double max = squareSize / 2;
	double min = -max;
	return Point(GetRandomNumber(min, max), GetRandomNumber(min, max));
}

RandomGenerator::~RandomGenerator()
{
}
