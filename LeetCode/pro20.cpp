// https://leetcode.com/problems/valid-parentheses/

#include <string>
#include <stack>
#include <iostream> 
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty()) return false;
                char top = stack.top();
                stack.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};       

// Example usage:
int main() {
    Solution solution;
    string input = "()[]{}";
    cout << "Input: s = \"" << input << "\"" << endl;
    cout << "Output: " << (solution.isValid(input) ? "true" : "false") << endl;  // Expected output: true

}