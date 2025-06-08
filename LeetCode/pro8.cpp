#include <string>
#include <algorithm> // Required for std::remove_if (though not used in the final version of myAtoi)
#include <climits>   // Required for INT_MAX, INT_MIN
#include <cctype>    // Required for isspace, isdigit
#include <set>       // Not strictly needed for the final myAtoi logic, but was in your original code

// Add this line to bring the std namespace into scope
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long result = 0; // Use long long to handle potential overflow before clamping
        int sign = 1;         // Default to positive
        int i = 0;            // Index to iterate through the string

        // 1. Skip leading whitespace
        while (i < s.length() && isspace(static_cast<unsigned char>(s[i]))) {
            i++;
        }

        // 2. Handle sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++; // Move past the sign character
        }

        // 3. Convert digits to integer
        while (i < s.length() && isdigit(static_cast<unsigned char>(s[i]))) {
            int digit = s[i] - '0'; // Convert char digit to int
            result = result * 10 + digit;

            // 4. Check for overflow *before* multiplying by sign
            if (sign == 1 && result > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && result * -1 < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }

        // 5. Apply the sign
        result *= sign;

        // 6. Clamp to INT_MAX or INT_MIN if overflow occurred
        if (result > INT_MAX) {
            return INT_MAX;
        }
        if (result < INT_MIN) {
            return INT_MIN;
        }

        return static_cast<int>(result); // Cast to int for the final return
    }
};

// Example usage:
int main() {
    Solution solution;  
    // Test case 1: Positive number

    cout << "Input: s = '42'" << endl;
    cout << "Output: " << solution.myAtoi("42") << endl;  // Expected output: 42
    