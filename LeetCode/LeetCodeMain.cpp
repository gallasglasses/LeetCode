#include <iostream>
#include <vector>

#include "LC1.h"

int main()
{
#pragma region LC1

	std::vector<int> input = { 11, 1, 4, 3, 2, 1, 7, 15 };
	//std::vector<int> input = { 3,2,4 };
	//std::vector<int> input = { 3, 3 };
	std::vector<int> output;
	int t = 9;
	//int t = 6;

	Solution s;

	output = s.twoSum(input, t);

	std::cout << std::endl;
	for (int& x : output)
	{
		std::cout << x << " ";
	}

#pragma endregion
}