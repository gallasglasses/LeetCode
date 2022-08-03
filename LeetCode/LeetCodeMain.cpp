#include <iostream>
#include <vector>

#include "LC1.h"
#include "LC2.h"

int main()
{
#pragma region LC1

	// https://leetcode.com/problems/two-sum/
	std::vector<int> input = { 11, 1, 4, 3, 2, 1, 7, 15 };
	//std::vector<int> input = { 3,2,4 };
	//std::vector<int> input = { 3, 3 };
	std::vector<int> output;
	int t = 9;
	//int t = 6;

	Solution s;

	output = s.twoSum(input, t);
	std::cout << "LC1: \n\n";
	for (int& x : output)
	{
		std::cout << x << " ";
	}
	std::cout << "\n_________________________________\n\n";

#pragma endregion

#pragma region LC2

	  //https://leetcode.com/problems/add-two-numbers/

	SolutionLC2 s2;

	ListNode* l1 = new ListNode(243);
	ListNode* l2 = new ListNode(564);

	ListNode* outputLC2 = new ListNode();
	outputLC2 = s2.addTwoNumbers(l1, l2);

	std::cout << "LC2: \n\n";
	s2.print(outputLC2);
	std::cout << "\n_________________________________\n\n";

	delete l1;
	delete l2;
	delete outputLC2;

	
#pragma endregion LC2

	  return 0;
}