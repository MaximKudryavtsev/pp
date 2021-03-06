#include "stdafx.h"

const size_t ARGS_COUNT = 3;

int main(int argc, char* argv[])
{
	if (argc == 2 && std::string(argv[1]) == "--help")
	{

		Messenger::PrintHelpMessage();
		return 1;
	}

	if (argc != ARGS_COUNT)
	{
		Messenger::PrintErrorMessage();
		return 1;
	}
	size_t count = std::stoi(argv[1]);
	size_t threads = std::stoi(argv[2]);

	unsigned int start = clock();
	MultiThreadCalculator calculator(count, threads);
	std::cout << "PI = " << calculator.Calculate() << std::endl;
	unsigned int end = clock();
	std::cout << "Time: " << (static_cast<float>(end - start) / CLOCKS_PER_SEC) << std::endl;
}

