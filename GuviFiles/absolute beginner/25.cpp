// Write a code to get an integer N and print the digits of the integer.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Print the digits of the integer in a single line separated by space,

// Sample Input :
// 348
// Sample Output :
// 3 4 8

#include <iostream>
#include <string>

using namespace std;
int main() {

int a;
cin >> a;
    string b = to_string(a);
for(size_t i=0; i< b.length(); i++){
    cout<<b[i];
    if(i<b.length()-1){
        cout<<" ";
    }
}
cout<<endl;
return 0;
}
