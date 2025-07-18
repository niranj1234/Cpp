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
// for(size_t i=0; i< b.length(); i++){
//     cout<<b[i];
//     if(i<b.length()-1){
//         cout<<" ";
//     }
// }
    int current_index = 0; 
    for (char ax : b) {
        int c = ax - '0'; 
        cout << c;        
        if (current_index < b.length() - 1) {
            cout << " ";
        }
        current_index++; 
    }
    cout << endl;
    return 0;
}
