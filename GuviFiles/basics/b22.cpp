// Given 2 numbers N and K followed by elements of N .Print 'yes' if K exists else print 'no'.
// Sample Testcase :
// INPUT
// 4 2
// 1 2 3 3
// OUTPUT
// yes


#include <iostream>  // Required for input (cin) and output (cout)
#include <vector>    // Required for std::vector
#include <algorithm> // Required for std::find

using namespace std;

int check(int target, const vector<int>& arr) {
    // std::find is an algorithm that searches for an element in a range.
    // It returns an iterator to the first occurrence if found,
    // or arr.end() if not found.
    if (std::find(arr.begin(), arr.end(), target) != arr.end()) {
        return 1; // If target is found, return 1
    } else {
        return 0; // If target is not found, return 0
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K; 
    cin >> N >> K;
    vector<int> numb(N);
    for (int i = 0; i < N; i++) {
        cin >> numb[i];
    }
    // Call the 'check' function with K (the target) and 'numb' (the vector).
    // Print the returned result (1 for found, 0 for not found) followed by a newline.
    int o =check(K, numb);
    if(o==1) cout<<"yes"<<endl;
    
    else cout<<"no"<<endl;
    return 0; // Indicate successful program execution
}
