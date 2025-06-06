// LeetCode problem number: 7
// https://leetcode.com/problems/reverse-integer/

#include <string>
#include <limits.h>
#include <iostream>
using namespace std;

// class Solution {
// public:
//     int reverse(int x) {
//         if(x == 0) return 0;
//         int sign = x < 0 ? -1 : 1;
//         x = abs(x);
//         long long reversed = 0;
//         while (x > 0) {
//             reversed = reversed * 10 + x % 10;
//             x /= 10;
//             if (reversed < INT_MIN || reversed > INT_MAX) return 0; 
//         }
//         return sign * reversed;
//     }

    // string b = to_string(x);


// };
class Solution {
public:
    int reverse(int x) {
        string b = to_string(x);
        if (b[0] == '-') {
            b = '-' + string(b.rbegin(), b.rend() - 1);
        } else {
            b = string(b.rbegin(), b.rend());
        }
        long long ans = stoll(b);
        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }
        return static_cast<int>(ans);
    }
};

// Example usage:
int main() {
    Solution solution;
    
    // Test case 1: Positive number
    cout << "Input: x = 123" << endl;
    cout << "Output: " << solution.reverse(123) << endl;  // Expected output: 321
    
    // Test case 2: Negative number
    cout << "\nInput: x = -123" << endl;
    cout << "Output: " << solution.reverse(-123) << endl;  // Expected output: -321Add commentMore actions
    
    // Test case 3: Number with trailing zeros
    cout << "\nInput: x = 120" << endl;
    cout << "Output: " << solution.reverse(120) << endl;  // Expected output: 21
    
    // Test case 4: Number that causes overflow
    cout << "\nInput: x = 1534236469" << endl;
    cout << "Output: " << solution.reverse(1534236469) << endl;  // Expected output: 0 (overflow)
    
    return 0;
}

