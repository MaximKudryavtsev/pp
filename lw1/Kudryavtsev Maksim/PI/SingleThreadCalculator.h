#pragma once
class SingleThreadCalculator
{
public:
	SingleThreadCalculator(size_t countIterations);
	double Calculate();
	~SingleThreadCalculator();
private:
	size_t m_countIterations;
};

