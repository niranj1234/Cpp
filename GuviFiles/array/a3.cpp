// You are given an array. Your task is to sort the array in given manner. Print the elements in increasing order of the frequency. If frequency is same print smaller one first.


// Input Description:
// You are given a number ‘n’. Then in next line n space separated numbers.

// Output Description:
// Print the array as mentioned

// Sample Input :
// 4
// 1 1 3 2
// Sample Output :
// 2 3 1

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first; // If frequencies are the same, sort by value
    }
    return a.second < b.second; // Sort by frequency
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    
    vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());
    
    sort(freqVec.begin(), freqVec.end(), compare);
    
    for (size_t i = 0; i < freqVec.size(); ++i) {
        cout << freqVec[i].first;
        if (i < freqVec.size() - 1) {
            cout << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}

/*
Reading input into arr → O(n)
Building freqMap: Inserting n elements into unordered_map → O(1) average per insert → total O(n)
Creating freqVec from freqMap → O(k), where k = number of unique elements (k ≤ n)

Sorting freqVec: O(k log k) comparisons
Printing results → O(k)

Total average case:
O(n) + O(n) + O(k) + O(k log k) + O(k)  
→ O(n + k log k)
Worst case (unordered_map hash collisions) could be O(n²), but very rare.

Space Complexity
arr vector → O(n)
freqMap → O(k)
freqVec → O(k)

Total space: O(n + k) → O(n)
(where k ≤ n). 
*/
