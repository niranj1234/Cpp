// https://leetcode.com/problems/container-with-most-water/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {ssssss
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_area = 0;

        while (left < right) {
            int current_height = min(height[left], height[right]);
            int width = right - left;
            max_area = max(max_area, current_height * width);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};
// Example usage:
int main() {
    Solution solution;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    cout << "Input: height = [1,8,6,2,5,4,8,3,7]" << endl;
    cout << "Output: " << solution.maxArea(height) << endl;  // Expected output: 49

    return 0;
}