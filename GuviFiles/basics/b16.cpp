// Given an array of N elements switch(swap) the element with the adjacent element and print the output.
// Sample Testcase :
// INPUT
// 5
// 3 2 1 2 3
// OUTPUT
// 2 3 2 1 3

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N; // Read the number of elements in the array
    vector<int> arr(N); // Create a vector to hold the elements

    // Read the elements into the vector
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Swap adjacent elements
    for (int i = 0; i < N - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    // Print the modified array
    for (int i = 0; i < N; ++i) {
        cout << arr[i];
                if (i < N - 1) {
            cout << " "; // Print a space between elements
        }
    }
    cout << endl;

    return 0; // Indicate successful program execution
}
