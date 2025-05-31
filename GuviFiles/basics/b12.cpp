// Write a code to get an integer N and print the digits of the integer.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Print the digits of the integer in a single line separated by space,

// Sample Input :
// 348
// Sample Output :
// 3 4 8

#include<iostream>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
            cin.tie(NULL);

    int N;
    cin >> N ;
    if(N ==0){
        cout<< '0'<< endl;
        return 0;
    }
    string s = to_string(N);


  for (int i = 0; i < s.length(); ++i) {
        // Print the current digit
        cout << s[i];

        // If it's not the last digit, print a space after it
        if (i < s.length() - 1) {
            cout << " ";
        }
    }
    // After printing all digits, print a newline character
    cout << endl;

    return 0; // Indicate successful program execution
}
