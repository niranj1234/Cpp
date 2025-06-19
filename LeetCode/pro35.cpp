// https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        auto t = std::find(nums.begin(),nums.end(), target);
    if(t!= nums.end()){
        return distance(nums.begin(),t);
        
    }
    else{
        for(int i=0;i<nums.size();++i){
        //cout<<sortedNumbers[i]<<endl;
        if(target < nums[i]){
            return i;
            break;
        }
    }
    return nums.size();
    }

    }

};


// #include <vector>
// #include <algorithm> // Required for std::lower_bound
// #include <iterator>  // Required for std::distance

// class Solution {
// public:
//     int searchInsert(std::vector<int>& nums, int target) {
//         // lower_bound returns an iterator to the first element that is
//         // not less than target.
//         // - If target is present, it points to the first occurrence.
//         // - If target is NOT present, it points to the position where target
//         //   would be inserted to maintain the sorted order.
//         auto it = std::lower_bound(nums.begin(), nums.end(), target);

//         // std::distance calculates the index (position) of the iterator
//         // relative to the beginning of the vector.
//         int index = std::distance(nums.begin(), it);

//         return index;
//     }
// };
