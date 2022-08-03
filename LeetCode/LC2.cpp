//#include "LC2.h"
//
//ListNode* SolutionLC2::addTwoNumbers(ListNode* l1, ListNode* l2)
//{
//    ListNode Head(0);
//    ListNode* InMind = &Head;
//    int sum = 0;
//    while (l1 || l2)
//    {
//        if (l1)
//        {
//            sum += l1->val;
//            l1 = l1->next;
//        }
//        if (l2)
//        {
//            sum += l2->val;
//            l2 = l2->next;
//        }
//
//        sum /= 10;
//        InMind->next = new ListNode(sum % 10);
//        InMind = InMind->next;
//    }
//    return Head.next;
//}
//
//bool SolutionLC2::is_empty(ListNode* l) {
//    return l == nullptr;
//}
//
//void SolutionLC2::print(ListNode* l) {
//    if (l == nullptr) return;
//
//    while (l) {
//        std::cout << l->val << " ";
//        l = l->next;
//    }
//    std::cout << std::endl;
//}

