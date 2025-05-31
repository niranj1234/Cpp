// https://leetcode.com/problems/add-two-numbers/

// #import <string>
// #import <algorithms>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int n,m = l1.size(), l2.size();
//         string s ="";
//         while(n!=0){

//         }

//     }
// };



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

// Example usage:

int main() {
    Solution solution;

    // Create first linked list: 2 -> 4 -> 3 (represents the number 342)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Create second linked list: 5 -> 6 -> 4 (represents the number 465)
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Add the two numbers
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result linked list
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    
    // Clean up memory
    delete l1->next->next; // Delete last node of l1
    delete l1->next;       // Delete second node of l1
    delete l1;             // Delete first node of l1

    delete l2->next->next; // Delete last node of l2
    delete l2->next;       // Delete second node of l2
    delete l2;             // Delete first node of l2

    return 0;
}