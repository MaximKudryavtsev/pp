#include "stdafx.h"
#include "SingleThreadCalculator.h"


SingleThreadCalculator::SingleThreadCalculator(size_t countIterations)
	:m_countIterations(countIterations)
{
}

double SingleThreadCalculator::Calculate()
{
	size_t countPointsInCircle = CalculatorUtils::GetPointsInCircle(m_countIterations);
	return 4.0 * countPointsInCircle / m_countIterations;
}

SingleThreadCalculator::~SingleThreadCalculator()
{
}
