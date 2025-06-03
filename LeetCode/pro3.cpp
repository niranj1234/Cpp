//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charIndex(256, -1); // ASCII character set
        int maxLength = 0;
        int start = 0; // Start index of the current substring

        for (int i = 0; i < s.length(); i++) {
            if (charIndex[s[i]] >= start) {
                start = charIndex[s[i]] + 1; // Move start to the next index after the last occurrence
            }
            charIndex[s[i]] = i; // Update the last occurrence index of the character
            maxLength = max(maxLength, i - start + 1); // Update max length
        }

        return maxLength;
    }
};
