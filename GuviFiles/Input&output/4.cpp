// Write a code to get the input in the given format and print the output in the given format


// Input Description:
// First-line indicates two integers separated by space. Second-line indicates two integers separated by space. Third-line indicates two integers separated by space.

// Output Description:
// Print the input in the same format.

// Sample Input :
// 2 4
// 2 4
// 2 4
// Sample Output :
// 2 4
// 2 4
// 2 4

#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3;

    // Read three lines of input, each containing two integers
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;

    // Print the values in the same format
    cout << a1 << " " << b1 << endl;
    cout << a2 << " " << b2 << endl;
    cout << a3 << " " << b3 << endl;

    return 0;
}
