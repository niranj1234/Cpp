// Write a code to get 2 integers A and N. Print the integer A, N times in separate line.


// Input Description:
// First line contains an integer A. Second line contains an Integer N.

// Output Description:
// Print the integer A, N times in a separate line.

// Sample Input :
// 2 3
// Sample Output :
// 2
// 2
// 2


#include <iostream>
using namespace std;
int main() {
    int A, N;
    cin >> A >> N; // Read two integers from input

    for (int i = 0; i < N; ++i) {
        cout << A << endl; // Print A, N times in separate lines
    }

    return 0; // Indicate successful program execution
}
