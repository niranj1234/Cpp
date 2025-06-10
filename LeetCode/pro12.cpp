#include <string>
#include <unordered_map>
#include <vector>   
#include <iostream>  
#include <algorithm> 

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        // The unordered_map stores the integer-to-Roman symbol mappings.
        // Its internal order is not guaranteed.
        unordered_map<int, string> romanMap = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };


        vector<int> values = {
            1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };
        
        string result; 
        for (int val : values) {


            while (num >= val) {
                // Append the corresponding Roman symbol (looked up from romanMap) to the result string
                result += romanMap[val];
                // Subtract the Roman value from num
                num -= val;
            }
        }
        
        return result; 
    }
};

// Example usage:
int main() {
    Solution solution;
    
    // Test case 1: Convert 3 to Roman numeral
    cout << "Input: num = 3" << endl;
    cout << "Output: " << solution.intToRoman(3) << endl;  // Expected output: "III"
    
    // Test case 2: Convert 58 to Roman numeral
    cout << "\nInput: num = 58" << endl;
    cout << "Output: " << solution.intToRoman(58) << endl; // Expected output: "LVIII"

    // Test case 3: Convert 1994 to Roman numeral
    cout << "\nInput: num = 1994" << endl;
    cout << "Output: " << solution.intToRoman(1994) << endl;  // Expected output: "MCMXCIV"
    
    return 0;
}