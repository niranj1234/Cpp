// Write a code to get an integer N and print the sum of  values from 1 to N.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Print the sum of values from 1 to N.

// Sample Input :
// 10
// Sample Output :
// 55

#include <iostream>
using namespace std;
int som(int a) {
    
     
    int i=0, temp =0;
    while (i<=a) {
        temp = temp+i;
        i++;
    }
    return temp;
}
int main() {
    int N;
    cin >> N ; 


    cout << som(N) << endl; // Print the GCD of N and M
    

    return 0;
}
