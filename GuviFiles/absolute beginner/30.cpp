// Write a program to get a string as input and reverse the string without using temporary variable.


// Input Description:
// A single line containing a string.

// Output Description:
// Print the reversed string.

// Sample Input :
// GUVI
// Sample Output :
// IVUG

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string in;
    cin >> in;
    reverse(in.begin(), in.end());
    cout<< in;
    cout << endl;
    return 0;
}
