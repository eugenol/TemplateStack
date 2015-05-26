#include <iostream>
#include "Stack.h"

int main(int argc, char **argv)
{
	Stack<int> testStack;

	for (int i = 0; i < 5; i++)
	{
		testStack.Push(i);
	}

	//for (int i = 0; i < 10; i++)
	while (!testStack.isEmpty())
	{
		try
		{
			std::cout << testStack.Pop() << std::endl;
		}
		catch (char *message)
		{
			std::cout << message << std::endl;
		}
	}

	return 0;
}