// https://leetcode.com/problems/move-zeroes/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;

        for(int i = 0; i<nums.size();i++){
            if(nums[i]!=0){
                nums[a++]=nums[i];
            }

        }
        for(int i = a;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
