// Write a code to get an integer N and print values from 1 till N in a separate line.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Print the values from 1 to N in a separate line.

// Sample Input :
// 5
// Sample Output :
// 1
// 2
// 3
// 4
// 5


#include<iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int i =1;
    while( i<=n){
        cout<<i;
        if(i <n) {
            cout << "\n"; // Print a new line after every 5 numbers
        }
        ++i;
    }
    cout << endl; 

    return 0;
}
