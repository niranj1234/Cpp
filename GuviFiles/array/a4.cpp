// You are given with an array. For each element present in the array your task is to print the next smallest than that number. If it is not smallest print -1


// Input Description:
// You are given a number ‘n’ representing size of array. And n space separated numbers.

// Output Description:
// Print the next smallest number present in array and -1 if no smallest is present

// Sample Input :
// 7
// 10 7 9 3 2 1 15
// Sample Output :
// 7 3 3 2 1 -1 -1

#include <iostream>
#include <vector>
#include <stack>
using namespace std;    

void findNextSmallest(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> s;

    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            result[i] = s.top();
        }
        s.push(arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findNextSmallest(arr);

    return 0;
}

/*
Approach:
    - Scan from RIGHT to LEFT.
    - Use a stack to store candidates for "next smaller".
    - Maintain stack in strictly increasing order from bottom to top.

Algorithm:
    1. Start from the last element and move to the first.
    2. For each arr[i]:
        a) Pop elements from the stack while stack.top() >= arr[i]
           (they can't be "next smaller").
        b) If stack is not empty, top is the "next smaller".
        c) Push arr[i] onto the stack as a candidate for future elements.
    3. Print the result array.

Why O(n) time:
    - Each element is pushed once and popped at most once.
    - Even though there's a 'while' loop, total pushes + pops ≤ 2n.

Complexity:
    Time: O(n)     → Single pass, amortized constant stack ops.
    Space: O(n)    → Result array + stack (worst case stack size n).

Example:
    Input:  10  7  9  3  2  1  15
    Output:  7  3  3  2  1  -1  -1

    Dry run for arr[0] = 10:
        - Stack contains [7, 10] at that point.
        - Top = 7 < 10, so 7 is next smaller.

Edge cases:
    - Strictly decreasing → Every element's next smaller is just the next index.
    - Strictly increasing → All outputs are -1.
    - Duplicates handled via >= in pop condition.
*/
