// You are given with an array of numbers, Your task is to print the difference of indices of largest and smallest number.All number are unique.


// Input Description:
// First line contains a number ‘n’. Then next line contains n space separated numbers.

// Output Description:
// Print the difference of indices of largest and smallest array

// Sample Input :
// 5
// 1 6 4 0 3
// Sample Output :
// -2

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int maxIndex = 0, minIndex = 0;
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    cout << (maxIndex - minIndex) << endl;
    
    return 0;
}