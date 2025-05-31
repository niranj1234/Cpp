// Given 2 numbers N,M find the GCD of N and M.If it cannot be found for given number(s) then print -1
// Sample Testcase :
// INPUT
// 10 5
// OUTPUT
// 5

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    
    a = abs(a); 
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int N, M;
    cin >> N >> M; // Read two integers from input

    if (N == 0 || M == 0) {
        cout << -1 << endl; // If either number is non-positive, print -1
    } else {
        cout << gcd(N, M) << endl; // Print the GCD of N and M
    }

    return 0; // Indicate successful program execution
}
