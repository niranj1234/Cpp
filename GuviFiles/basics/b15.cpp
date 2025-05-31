// Given 3 numbers A,B,C process and print 'yes' if they can form the sides of a triangle otherwise print 'no'.
// Input Size : A,B,C <= 100000
// Sample Testcase :
// INPUT
// 3 4 5
// OUTPUT
// yes

#include <iostream>
using namespace std;    
int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Check the triangle inequality theorem
    if (A + B > C && A + C > B && B + C > A) {
        cout << "yes" << endl; // They can form a triangle
    } else {
        cout << "no" << endl; // They cannot form a triangle
    }

    return 0; // Indicate successful program execution
}
