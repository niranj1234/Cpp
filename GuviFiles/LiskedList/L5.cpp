/* Given a linked list,reverse it and print the values of linked list after reversed.


Input Description:
First line represents the size of the linked list .Next line represents the sequence of numbers as the node value of the linked list(separated by space).

Output Description:
Print the resultant of reversed linked list value(separated by space)

Sample Input :
4
1 2 3 4
Sample Output :
4 3 2 1*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Append a node to the end
void append(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

// Reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr) {
        next = curr->next;    // store next
        curr->next = prev;    // reverse current node's pointer
        prev = curr;          // move prev and curr one step forward
        curr = next;
    }
    return prev;
}

// Print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int size, val;
    cin >> size;

    Node* head = nullptr;

    for (int i = 0; i < size; ++i) {
        cin >> val;
        append(head, val);
    }

    head = reverseList(head);
    printList(head);

    return 0;
}
