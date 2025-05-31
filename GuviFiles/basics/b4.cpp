// Write a program to print the sum of the first K natural numbers.
// Input Size : n <= 100000
// Sample Testcase :
// INPUT
// 3
// OUTPUT
// 6

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    
    cout << sum << endl;
    return 0;
}
