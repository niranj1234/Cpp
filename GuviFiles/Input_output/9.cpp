// Write a code to get the input in the given format and print the output in the given format.


// Input Description:
// A single line contains a string.

// Output Description:
// Print the characters in a string separated by line.

// Sample Input :
// guvigeek
// Sample Output :
// g
// u
// v
// i
// g
// e
// e
// k

#include <iostream>
using namespace std;

int main() {
    string in;
    cin >> in;
    
    // Print the values in the same format
    for( int i = 0; i< in.length(); ++i){
        cout<< in[i];
        if(i!=in.length()-1){
            cout<<"\n";
        }
    }
    cout << endl;
    return 0;
}
