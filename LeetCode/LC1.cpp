#include "LC1.h"

ListNode* SolutionLC2::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode Head(0);
    ListNode* InMind = &Head;
    int sum = 0;
    while (l1 || l2 || sum != 0)
    {
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        InMind->next = new ListNode(sum % 10);
        sum /= 10;
        InMind = InMind->next;
    }
    return Head.next;
}

bool SolutionLC2::is_empty(ListNode* l) {
    return l == nullptr;
}

void SolutionLC2::print(ListNode* l) {
    if (l == nullptr) return;

    while (l) {
        std::cout << l->val << " ";
        l = l->next;
    }
    std::cout << std::endl;
}


//std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
//{
//    // Runtime: 18 ms Memory Usage : 10.8 MB
//    std::unordered_map<int, int> map;
//    for (int i = 0; i < nums.size(); i++)
//    {
//        if (map.find(target - nums[i]) != map.end())
//        {
//            /*for (const auto& m : map)
//            {
//                std::cout << m.first << " " << m.second << "\n";
//            }*/
//            return std::vector<int> { map[target - nums[i]], i };
//        }
//        else
//        {
//            map[nums[i]] = i;
//            //std::cout << "m: " << nums[i] << " " << i << "\n";
//        }
//    }
//    return std::vector<int>();
//
//    // Runtime: 16 ms Memory Usage : 10.8 MB
//    //std::vector<int> output;
//    //std::unordered_map<int, int> map;
//    //for (int i = 0; i < nums.size(); i++)
//    //{
//    //    if (map.find(target - nums[i]) != map.end())
//    //    {
//    //        for (const auto& m : map)
//    //        {
//    //            std::cout << m.first << " " << m.second << "\n";
//    //        }
//
//    //        output.push_back(map[target - nums[i]]);
//    //        output.push_back(i);
//    //        return output;
//    //    }
//    //    else
//    //    {
//    //        map[nums[i]] = i;
//    //        std::cout << "m: " << nums[i] << " " << i << "\n";
//    //    }
//    //}
//    //return output;
//
//    // Runtime: 87 ms Memory Usage: 10.3 MB
//    //std::vector<int> find;
//    //std::vector<int> output;
//    //for (int i = 0; i < nums.size(); i++)
//    //{
//    //    auto result = std::find(find.begin(), find.end(), target - nums[i]);
//    //    if (result != find.end())
//    //    {
//    //        output.push_back(result - find.begin()); //std::distance(find.begin(), result)
//    //        output.push_back(i);
//    //        /*for (const auto& elem : output)
//    //        {
//    //            std::cout << elem << " ";
//    //        }*/
//    //        return output;
//    //    }
//    //    else
//    //    {
//    //        find.push_back(nums[i]);
//    //        //std::cout << "m: " << find[i] << " " << i << "\n";
//    //    }
//    //}
//    //return output;
//
//
//    // Runtime: 1023 ms  Memory Usage : 10.1 MB
//    /*std::vector<int> index {0,0};
//    size_t j = 1;
//    for (size_t i = 0; i <= nums.size() - 1; )
//    {
//        std::cout << i << ": " << nums.at(i) << " " << j << ": " << nums.at(j) << " " << std::endl;
//
//        if ((nums.at(i) + nums.at(j)) == target)
//        {
//            index.at(0) = i;
//            index.at(1) = j;
//            return index;
//        }
//        else
//        {
//            if (j < nums.size() - 1)
//            {
//                j++;
//            }
//            else
//            {
//                i++;
//                j = i + 1;
//            }
//        }
//    }
//    return {};*/
//
//
//    // Runtime: 4 ms Memory Usage : 10 MB / Runtime: 9 ms Memory Usage : 10.3 MB
//    /*std::vector<int> index {0,0};
//    size_t j, x = 1;
//    for (size_t i = 0; x <= nums.size() - 1; )
//    {
//        j = nums.size() - (nums.size() - x - i);
//        if (j >= nums.size())
//        {
//            j-= nums.size();
//        }
//        std::cout << i << " " << j << " " << std::endl;
//
//        if ((nums.at(i) + nums.at(j)) == target)
//        {
//            if (j > i)
//            {
//                index.at(0) = i;
//                index.at(1) = j;
//            }
//            else
//            {
//                index.at(0) = j;
//                index.at(1) = i;
//            }
//            return index;
//        }
//        else
//        {
//            if (i < nums.size() - 1)
//            {
//                i++;
//            }
//            else
//            {
//                i = 0;
//                j = 0;
//                ++x;
//            }
//        }
//    }
//    return {};*/
//
//
//    // Runtime: 386 ms  Memory Usage : 10.3 MB
//    /*std::vector<int> index;
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        int k = target - nums[i];
//        for (int j = i + 1; j < nums.size(); ++j)
//        {
//            if ( k == nums[j] )
//            {
//                index.push_back(i);
//                index.push_back(j);
//                return index;
//            }
//        }
//    }
//
//    return index;*/
//}