// Given 2 numbers N and M add both the numbers and check whether the sum is odd or even.
// Sample Testcase :
// INPUT
// 9 2
// OUTPUT
// odd

#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    
    int sum = N + M;
    
    if (sum % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
    
    return 0;
}
