// Write a code to get the input in the given format and print the output in the given format


// Input Description:
// A single line contains a string.

// Output Description:
// Print the characters in a string separated by space.

// Sample Input :
// guvi
// Sample Output :
// g u v i

#include <iostream>
using namespace std;

int main() {
    string in;
    cin >> in;
    
    // Print the values in the same format
    for( int i = 0; i< in.length(); ++i){
        cout<< in[i];
        if(i!=in.length()-1){
            cout<<" ";
        }
    }
    cout << endl;
    return 0;
}
