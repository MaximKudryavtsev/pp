#include "stdafx.h"


int main()
{
	size_t count;
	size_t threads;
	std::cin >> count >> threads;
	unsigned int start = clock();
	MultiThreadCalculator calculator(count, threads);
	std::cout << calculator.Calculate() << std::endl;
	unsigned int end = clock();
	std::cout << "Time: " << (static_cast<float>(end - start) / CLOCKS_PER_SEC) << std::endl;
}

