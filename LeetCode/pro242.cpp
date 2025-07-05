//https://leetcode.com/problems/valid-anagram/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,int> counter;

        for(char c:s){
            counter[c]= counter[c]+1;
        }
        for(char c: t){
            if(counter.find(c)==counter.end()||counter[c]==0){
                return false;
            }
            counter[c]=counter[c]-1;
        }
        return true;
    }
};
