//https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
          if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        // int original_x = x;
        long long reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // cout << reversed;

        if (reversed < INT_MIN || reversed > INT_MAX)
            return 0;

        return x == reversed || x == reversed / 10;
    }
};

// Example usage:
int main() {
    Solution solution;
    // Test case 1: Positive palindrome
    cout << "Input: x = 121" << endl;
    cout << "Output: " << solution.isPalindrome(121) << endl;  // Expected output: true