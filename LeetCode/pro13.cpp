// https://leetcode.com/problems/roman-to-integer/description/

#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500},
            {'M', 1000}
        };
        int total = 0;
        int prevValue = 0;
        for (char c : s) {
            int currentValue = romanMap[c];
            if (currentValue > prevValue) {

                total += currentValue - 2 * prevValue; // Subtract twice the previous value
            } else {
                total += currentValue;
            }
            prevValue = currentValue;
        }
        return total;
    }
};
// Example usage:
int main() {
    Solution solution;
    // Test case 1: Convert "III" to integer
    cout << "Input: s = \"III\"" << endl;

    cout << "Output: " << solution.romanToInt("III") << endl;  // Expected output: 3
    // Test case 2: Convert "LVIII" to integer

    cout << "\nInput: s = \"LVIII\"" << endl;
    cout << "Output: " << solution.romanToInt("LVIII") << endl

}
