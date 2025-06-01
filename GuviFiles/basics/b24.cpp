// Write a code to get 2 integers as input and add the integers without any carry.


// Input Description:
// A single line containing 2 integers.

// Output Description:
// Print sum of the 2 integers without carry

// Sample Input :
// 44 66
// Sample Output :
// 0


#include <iostream> 
#include <string>   
#include <cmath>    

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M; 
    cin >> N >> M;

    long long sum_no_carry = 0; 
    long long power_of_10 = 1;  
    
    while (N > 0 || M > 0) {
        // Get the last digit of N. If N is 0, digitN will be 0.
        int digitN = N % 10;
        // Get the last digit of M. If M is 0, digitM will be 0.
        int digitM = M % 10;

        int current_digit_sum = (digitN + digitM) % 10;
        
        sum_no_carry += current_digit_sum * power_of_10;

        N /= 10;
        M /= 10;

        power_of_10 *= 10;
    }

    // Print the final sum of the two integers without carry
    cout << sum_no_carry << endl;

    return 0; // Indicate successful program execution
}
