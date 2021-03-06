#include "stdafx.h"
#include <iostream>
#include <string>

#include "ThreadManager.h"
#include "MathHelper.h"
#include "MonteCarloHelper.h"

using namespace std;

int main(int argc, char *argv[])
{
	unsigned int numThrows = stoi(argv[1]);
	unsigned int threadCount = stoi(argv[2]);
	unsigned int inCircleDotsCounter = 0;

	shared_ptr<CalculatingData> calculatingData = make_shared<CalculatingData>(CalculatingData({ numThrows, inCircleDotsCounter }));

	ThreadManager threadManager;
	threadManager.AddTask(MonteCarloHelper::PrintStatus, calculatingData.get());

	if (threadCount == 1)
	{
		MonteCarloHelper::CalculateDots(calculatingData.get());
	}
	else
	{
		for (unsigned int i = 0; i < threadCount; ++i)
		{
			threadManager.AddTask(MonteCarloHelper::Calculate, calculatingData.get());
		}
	}

	threadManager.WaitAllTasks();
	threadManager.KillAll();
	
	cout << "All dots = " << calculatingData->GetTotalNumOfDots() << "  In circle dots = " << calculatingData->GetInCircleNumOfDots() << endl;

	double pieCalc = MathHelper::GetPi((calculatingData->GetTotalNumOfDots()), (calculatingData->GetInCircleNumOfDots()));
	cout << "The value of PI is: " << pieCalc << endl;

	return 0;
}
