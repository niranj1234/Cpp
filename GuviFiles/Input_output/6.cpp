// Write a code to get the input in the given format and print the output in the given format


// Input Description:
// First-line indicates two integers separated by space. Second-line indicates three integers separated by space. Third-line indicates three integers separated by space

// Output Description:
// Print the input in the same format.

// Sample Input :
// 2 5
// 2 5 6
// 2 4 5
// Sample Output :
// 2 5
// 2 5 6
// 2 4 5

#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2,c2, a3, b3,c3;

    // Read three lines of input, each containing two integers
    cin >> a1 >> b1;
    cin >> a2 >> b2>> c2;
    cin >> a3 >> b3>> c3;

    // Print the values in the same format
    cout << a1 << " " << b1 << endl;
        cout << a2 << " " << b2 <<  " " <<c2 << endl;
            cout << a3 << " " << b3 << " " <<c3<< endl;

    return 0;
}
