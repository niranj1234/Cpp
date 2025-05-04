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
