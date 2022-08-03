#include <iostream>
#include <vector>

#include "LC1.h"
#include "LC2.h"

int main()
{
//#pragma region LC1
//
//	// https://leetcode.com/problems/two-sum/
//	std::vector<int> input = { 11, 1, 4, 3, 2, 1, 7, 15 };
//	//std::vector<int> input = { 3,2,4 };
//	//std::vector<int> input = { 3, 3 };
//	std::vector<int> outputLC1;
//	int t = 9;
//	//int t = 6;
//
//	Solution s;
//
//	outputLC1 = s.twoSum(input, t);
//
//	std::cout << std::endl;
//	for (int& x : outputLC1)
//	{
//		std::cout << x << " ";
//	}
//
//#pragma endregion LC1
//
//#pragma region LC2

	//https://leetcode.com/problems/add-two-numbers/

	SolutionLC2 s2;

	ListNode* l1 = new ListNode(243);
	ListNode* l2 = new ListNode(564);

	ListNode* outputLC2 = new ListNode();
	outputLC2 = s2.addTwoNumbers(l1, l2);

	s2.print(outputLC2);

	delete l1;
	delete l2;
	delete outputLC2;

//
//#pragma endregion LC2
	
	//return 0;
}