// Write a code to get the input in the given format and print the output in the given format


// Input Description:
// Three integers are given in line by line.

// Output Description:
// Print the integers in a single line separate by space.

// Sample Input :
// 2
// 4
// 5
// Sample Output :
// 2 4 5
  
#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;

    // Read three lines of input, each containing two integers
    cin >> a1;
    cin >> a2;
    cin >> a3;

    // Print the values in the same format
    cout << a1 << " " << a2 << " " << a3 << endl;

    return 0;
}
