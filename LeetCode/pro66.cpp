// https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size() - 1;
      for (int i = n; i >= 0; --i) { 
        if (digits[i] == 9) {  
          digits[i] = 0;
        } else {  
          digits[i] += 1;
          return digits;
        }
      }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};

/* Examples of Return Values:
If digits = {1, 2, 3}:
i = 2 (digit 3): 3 != 9. digits[2] becomes 4.
return {1, 2, 4};

If digits = {4, 5, 9}:
i = 2 (digit 9): 9 == 9. digits[2] becomes 0. digits is now {4, 5, 0}.
i = 1 (digit 5): 5 != 9. digits[1] becomes 6.
return {4, 6, 0};

If digits = {9, 9}:
i = 1 (digit 9): 9 == 9. digits[1] becomes 0. digits is now {9, 0}.
i = 0 (digit 9): 9 == 9. digits[0] becomes 0. digits is now {0, 0}.
Loop finishes.
digits.push_back(0);. digits is now {0, 0, 0}.
digits[0] = 1;. digits is now {1, 0, 0}.
return {1, 0, 0}; */
