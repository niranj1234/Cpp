// Given 2 numbers N,M. Print 'yes' if their product is a perfect square else print 'no'.
// Sample Testcase :
// INPUT
// 5 5
// OUTPUT
// yes

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long N, L,K;
    cin >> N >> L ; // Read all three integers in one line
    
    K= N*L;

    double R = floor(sqrt(K)); // Calculate the square root of N



    if (R * R == K) { // Check if the square root is an integer
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
