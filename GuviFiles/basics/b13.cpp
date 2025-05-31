// Write a code to get an integer N and print the even values from 1 till N in a separate line.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Print the even values from 1 to N in a separate line.

// Sample Input :
// 6
// Sample Output :
// 2
// 4
// 6

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << endl; // Print each even number on a new line
    }

    return 0; // Indicate successful program execution
}
