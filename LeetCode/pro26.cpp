// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1;
        for(int i=1; i< nums.size(); i++){
            if(nums[i-1]!=nums[i]){
                nums[c]=nums[i];
                c=c+1;
            }
        }
        return c;

    }
};
