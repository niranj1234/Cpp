// Write a code to get a integer n as input and calculate the smallest perfect power of 2 greater than n.


// Input Description:
// A single line containing an integer,n.

// Output Description:
// Print the smallest perfect power of 2 greater than n.

// Sample Input :
// 48
// Sample Output :
// 64

#include <iostream>  
using namespace std;

int main() {
    int b;
    cin >> b ;

    double a = 1;
    while(a<=b){
        a *= 2;
    }

    cout << a << endl;
    return 0;
}

