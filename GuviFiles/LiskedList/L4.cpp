/*Merge two sorted linked lists and print the new merged linked list.
The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.


Input Description:
Given two sorted linked list of size M,N First line M is the size of the first sorted linked list, Second line N is the size of the first sorted linked list. Third and Fourth line contains respective linked list values(separated by space)

Output Description:
Print the resultant linked list after merging the two sorted linked list(separated by space)

Sample Input :
3
3
5 8 20
4 11 15
Sample Output :
4 5 8 11 15 20*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Append a node at the end
void append(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

// Merge two sorted linked lists
Node* mergeSortedLists(Node* l1, Node* l2) {
    Node dummy(0);
    Node* tail = &dummy;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (l1) tail->next = l1;
    if (l2) tail->next = l2;

    return dummy.next;
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
    int m, n, val;
    cin >> m >> n;

    Node* list1 = nullptr;
    Node* list2 = nullptr;

    for (int i = 0; i < m; ++i) {
        cin >> val;
        append(list1, val);
    }

    for (int i = 0; i < n; ++i) {
        cin >> val;
        append(list2, val);
    }

    Node* merged = mergeSortedLists(list1, list2);
    printList(merged);

    return 0;
}
