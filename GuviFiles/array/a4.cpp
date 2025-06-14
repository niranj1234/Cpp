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