#include <iostream>
#include "Stack.h"

int main(int argc, char **argv)
{
	Stack<int> testStack;

	for (int i = 0; i < 10;i++)
		testStack.Push(i);

	for (int i = 0; i < 10; i++)
	{
		std::cout << testStack.Pop() << std::endl;
	}

	return 0;
}