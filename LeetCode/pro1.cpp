// https://leetcode.com/problems/two-sum/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};

// Example usage:
int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    for (int index : result) {
        cout << index << " ";
    }
    return 0;
}
// Note: This code is a brute-force solution and may not be optimal for large inputs.
// For larger inputs, consider using a hash map to achieve O(n) time complexity.