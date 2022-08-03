#pragma once

#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//class Solution 
//{
//public:
//
//    std::vector<int> twoSum(std::vector<int>& nums, int target);
//};


struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class SolutionLC2
{
public:
    SolutionLC2() {}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    bool is_empty(ListNode* l);

    void print(ListNode* l);

    ~SolutionLC2() {}
};