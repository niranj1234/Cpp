// Given a range of 2 numbers (i.e) L and R count the number of prime numbers in the range (inclusive of L and R ).
// Input Size : L <= R <= 100000(complexity O(n) read about Sieve of Eratosthenes)
// Sample Testcase :
// INPUT
// 2 5
// OUTPUT
// 3

#include <iostream>
using namespace std;  
int main() {
    int L, R;
    cin >> L >> R;

    if (L < 2) L = 2; // Start from the first prime number

    int count = 0;
    for (int num = L; num <= R; ++num) {
        bool isPrime = true;
        if (num < 2) isPrime = false; // 0 and 1 are not prime numbers
        else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) count++;
    }

    cout << count << endl;
    return 0;
}