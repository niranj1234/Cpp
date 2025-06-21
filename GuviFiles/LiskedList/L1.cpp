// Given a linked list,rotate it for a given number of times and print the values of linked list after rotation.


// Input Description:
// First line represents the size of the linked list. Next line represents the sequence of numbers as the node value of the linked list(separated by space). Third line contains the number of rotations to be done.

// Output Description:
// Print the resultant rotated linked list value(separated by space).

// Sample Input :
// 8
// 1 2 3 4 5 6 7 8
// 4
// Sample Output :
// 5 6 7 8 1 2 3 4



#include <iostream>
#include <vector>

using namespace std;


struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr){}
};

// Function to create a linked list from a vector of values
ListNode* createLinkedList(const std::vector<int>& values){
    if(values.empty()){
        return nullptr;
    }
    ListNode *head = new ListNode(values[0]);
    ListNode *current = head;
    
    for(size_t i=1; i<values.size();++i){
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Function to print the linked list
void printLinkedList(ListNode* head){
    ListNode *current = head;
    while(current != nullptr){
        cout<<current->val;
        if(current->next != nullptr ){
            cout<<" ";
        }
        current = current->next;
    }
    cout<<endl;
}

// Function to free the memory allocated for the linked list
void deleteLinkedList(ListNode* head){
    ListNode *current = head;
    while(current != nullptr){
        ListNode *next_node = current->next;
        delete current;
        current = next_node;
    }
}

ListNode* rotateList(ListNode* head, int k, int n){
    if(head == nullptr || head->next ==nullptr || k==0){
        return head;
    }
    k = k%n;
    if(k ==0){
        return head;
    }
    
    ListNode *new_tail = head;
    for(int i =0; i<n-k-1; i++){
        new_tail = new_tail->next;
    }
    
    ListNode *new_head = new_tail->next;
    new_tail->next = nullptr;
    
    ListNode *orginal_tail = new_head;
    while(orginal_tail->next != nullptr){
        orginal_tail = orginal_tail->next;
    }
    orginal_tail->next = head;
    
    return new_head;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> values(n);
    for(int i=0;i<n;++i){
        cin>>values[i];
    }
    
    int k;
    cin >>k;
   // Create the linked list
    ListNode* head = createLinkedList(values);

    // Rotate the linked list
     ListNode* rotated_head = rotateList(head, k, n);

    // Print the rotated linked list
    printLinkedList(rotated_head);

    // Clean up allocated memory to prevent memory leaks
    deleteLinkedList(rotated_head);

    return 0;
}
    

