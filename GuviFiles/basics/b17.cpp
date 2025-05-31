// Given 3 numbers A,B,C print 'yes' if they can form the sides of a right angled triangle,otherwise 'no'.
// Input Size : A,B,C <= 100000
// Sample Testcase :
// INPUT
// 3 4 5
// OUTPUT
// yes

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Check if any permutation of A, B, C satisfies the Pythagorean theorem
    if ((A * A + B * B == C * C) || (A * A + C * C == B * B) || (B * B + C * C == A * A)) {
        cout << "yes" << endl; // They can form a right-angled triangle
    } else {
        cout << "no" << endl; // They cannot form a right-angled triangle
    }

    return 0; // Indicate successful program execution
}
