/* Delete the N-th node from the end of the linked list


Input Description:
First line represents the size of the linked list. Next line represents the sequence of numbers as the node value of the linked list(separated by space). Third line contains which node value to be delete

Output Description:
Delete the N-th Node from the last and print result the values of linked list(separated by space).

Sample Input :
5
1 2 3 4 5
3
Sample Output :
1 2 4 5 */

#include <iostream>
using namespace std;

// Define a structure for Linked List Node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to append a new node at the end
void append(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

// Function to delete N-th node from the end
void deleteNthFromEnd(Node*& head, int n) {
    Node* dummy = new Node(0); // dummy node to handle edge cases
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;

    // Move fast pointer n+1 steps
    for (int i = 0; i <= n; ++i) {
        if (fast) fast = fast->next;
    }

    // Move both fast and slow until fast reaches the end
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }

    // Delete the node after slow
    Node* toDelete = slow->next;
    if (toDelete) {
        slow->next = toDelete->next;
        delete toDelete;
    }

    head = dummy->next;
    delete dummy;
}

// Function to print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int size, n, val;
    cin >> size;
    
    Node* head = nullptr;
    for (int i = 0; i < size; ++i) {
        cin >> val;
        append(head, val);
    }

    cin >> n;
    deleteNthFromEnd(head, n);
    printList(head);

    return 0;
}
