// Let "A"  be a string. Remove all the whitespaces and find it's length.


// Input Description:
// A string is provide as an input

// Output Description:
// Remove all the whitespaces and then print the length of the remaining string.

// Sample Input :
// Lorem Ipsum
// Sample Output :
// 10

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {

string a;
getline(cin, a);

a.erase(remove(a.begin(),a.end(), ' '),a.end());

cout<< a.length()<<endl;

return 0;
}


/*
ime Complexity
remove → O(n) (scans through the string once, moving characters as needed)

erase → O(1) amortized (shrinks the container end)

length() → O(1)

Total: O(n)

Space Complexity
In-place operation: no extra string copy, only iterators used

O(1) extra space (besides the input string itself)*/
