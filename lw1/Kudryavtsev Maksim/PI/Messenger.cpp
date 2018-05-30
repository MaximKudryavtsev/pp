#include "stdafx.h"
#include "Messenger.h"


Messenger::Messenger()
{
}

void Messenger::PrintHelpMessage()
{
	std::cout << "Use PI.exe <countIterations> <countThread> for multi threaded" << std::endl;
}

void Messenger::PrintErrorMessage()
{
	std::cout << "Error! Use PI.exe --help for help message." << std::endl;
}

Messenger::~Messenger()
{
}
