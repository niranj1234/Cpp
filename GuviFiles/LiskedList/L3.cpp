/*Number is represented in linked list such that each digit corresponds to a node in linked list. Add 1 to it. For example 1999 is represented as (1-> 9-> 9 -> 9) and adding 1 to it should change it to (2->0->0->0)


Input Description:
First line consists of length of the linked list. Second line consists the linked list each node in the linked list are having numbers as their data(separated by space).

Output Description:
Print the linked list after adding 1 to it(separated by space)

Sample Input :
4
1 9 9 9
Sample Output :
2 0 0 0*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to append node
void append(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

// Function to reverse linked list
Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Function to add 1 to linked list
Node* addOne(Node* head) {
    head = reverse(head);
    Node* temp = head;
    int carry = 1;
    
    while (temp && carry) {
        int sum = temp->data + carry;
        temp->data = sum % 10;
        carry = sum / 10;
        
        if (carry && !temp->next)
            temp->next = new Node(0);  // extend list if needed

        temp = temp->next;
    }

    return reverse(head);
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
    int n, val;
    cin >> n;

    Node* head = nullptr;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        append(head, val);
    }

    head = addOne(head);
    printList(head);

    return 0;
}
