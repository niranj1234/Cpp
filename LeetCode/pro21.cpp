// https://leetcode.com/problems/merge-two-sorted-lists/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;

    ListNode* result;


    if(list1->val <= list2->val){
        result = list1;
        result->next =mergeTwoLists(list1->next,list2);
    }
    else{
        result = list2;
        result -> next = mergeTwoLists(list1,list2->next);
    }
    return result;

    // ListNode* current = list1;
    // if (current == nullptr) return list2;
    // while (current->next != nullptr) {
    //     current = current->next;
    // }
    // current->next = list2;




    // return list1;
}

};
