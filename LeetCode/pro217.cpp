// https://leetcode.com/problems/contains-duplicate/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());

// for(int i = 1;i<nums.size();i++){
//     if(nums[i-1]==nums[i]){
//         return true;
//     }
// }  
// return false; 
// }
// };
class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for (int i : nums) {
        if (s.find(i) != s.end())
            return true;
        s.insert(i);
    }
    return false;
}
};
