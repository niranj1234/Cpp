// https://leetcode.com/problems/single-number/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int a=0;
//         for (int i: nums){
//              a= a^i;
//         }
//         return a;
//     }
// };

class Solution{
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash_table;
        for(int i: nums) {
            hash_table[i]++;
        }
        for(int j : nums){
            if(hash_table[j]==1){
                return j;
            }
        }
        return 0;
}   
};
