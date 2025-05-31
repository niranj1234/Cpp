// Write a code get an integer number as input and print the sum of the digits.


// Input Description:
// A single line containing an integer.

// Output Description:
// Print the sum of the digits of the integer.

// Sample Input :
// 124
// Sample Output :
// 7

#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N, l =0;
    int r;


    cin >> N; // Read the integer N
    N = abs(N);
    while(N>0){
        r = N % 10; // Get the last digit
        l= l + r;
        N/= 10; 
    }
    cout << l <<endl; // Print a newline at the end
}
