// Given a number N and an array of N elements ,find the Bitwise AND of the array elements.
// Input Size N <= 100000
// Sample Testcase :
// INPUT
// 4
// 4 3 2 1
// OUTPUT
// 0

#include <iostream>
#include <vector> // Required for using std::vector
using namespace std;
int main() {
    int N;
    cin >> N; 
    if (N <= 0) {
        return 1;
    }
    vector<int> arr(N); // Declare a vector to store the elements
    for (int i = 0; i < N; ++i) {
    cin >> arr[i];
    }
    int result = arr[0];
        for (int i = 1; i < N; ++i) {
        result &= arr[i]; 
    }
   cout << result << endl; // Print the final result
    return 0;
}
