#pragma once
#include "ThreadHandler.h"

struct ThreadResult
{
	size_t countPointsInCircle;
	size_t countIterations;
};

typedef std::vector<ThreadResult> ThreadResults;

class MultiThreadCalculator
{
public:
	MultiThreadCalculator(size_t countIterations, size_t countThreads);
	double Calculate();
	~MultiThreadCalculator();
private:
	size_t m_countIterations;
	size_t m_countThreads;

	static DWORD WINAPI GetCountPointsInCircle(LPVOID lpParam);
	void InitThreads();

	std::shared_ptr<ThreadHandler> m_threadHandler;
	std::vector<ThreadResult> m_threadResults;
};

