// https://leetcode.com/problems/longest-palindromic-substring/


#include <string>
#include <vector>
#include <algorithm> 
#include <iostream>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }

        // 1. Transform the string
        // Example: "aba" -> "#a#b#a#"
        // Example: "abba" -> "#a#b#b#a#"
        string t = "#";
        for (char c : s) {
            t += c;
            t += '#';
        }

        int n = t.length();
        vector<int> p(n, 0); // P[i] stores the radius of the palindrome centered at i
                                  // p[i] = length / 2

        int center = 0; // Center of the current longest palindrome
        int right = 0;  // Right boundary of the current longest palindrome (center + radius)

        int max_len = 0;      // Max radius found
        int center_idx = 0; // Center index in transformed string for the longest palindrome

        for (int i = 0; i < n; ++i) {
            // Calculate mirror index (i_mirror = C - (i - C) = 2*C - i)
            int i_mirror = 2 * center - i;

            // If i is within the current longest palindrome's boundary
            if (i < right) {
                // p[i] can be at least the min of:
                // 1. The distance from i to the right boundary (right - i)
                // 2. The radius of its mirrored palindrome (p[i_mirror])
                p[i] = std::min(right - i, p[i_mirror]);
            }

            // Attempt to expand palindrome centered at i
            // Indices for expansion: i + (1 + p[i]) and i - (1 + p[i])
            while (i + 1 + p[i] < n && i - (1 + p[i]) >= 0 &&
                   t[i + 1 + p[i]] == t[i - (1 + p[i])]) {
                p[i]++;
            }

            // If palindrome centered at i expands beyond the current 'right' boundary,
            // update center and right boundary
            if (i + p[i] > right) {
                center = i;
                right = i + p[i];
            }

            // Update the overall longest palindrome found
            if (p[i] > max_len) {
                max_len = p[i];
                center_idx = i;
            }
        }

        // Calculate the start index and length in the original string from transformed string results
        // The start index in original string: (center_idx - max_len) / 2
        // The length in original string: max_len
        int original_start_idx = (center_idx - max_len) / 2;
        return s.substr(original_start_idx, max_len);
    }
};

int main() {
    Solution sol;
    cout << "Input: \"babad\", Output: " << sol.longestPalindrome("babad") << std::endl; // Expected: "bab" or "aba"
    cout << "Input: \"cbbd\", Output: " << sol.longestPalindrome("cbbd") << std::endl;   // Expected: "bb"
    cout << "Input: \"a\", Output: " << sol.longestPalindrome("a") << std::endl;     // Expected: "a"
    cout << "Input: \"ac\", Output: " << sol.longestPalindrome("ac") << std::endl;   // Expected: "a" or "c" (whichever comes first with max_len 1)
    cout << "Input: \"\", Output: " << sol.longestPalindrome("") << std::endl;       // Expected: ""
    cout << "Input: \"racecar\", Output: " << sol.longestPalindrome("racecar") << std::endl; // Expected: "racecar"
    return 0;
}
