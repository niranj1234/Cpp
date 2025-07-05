// https://leetcode.com/problems/happy-number/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

class Solution {
public:

    int next(int n){
        int sum =0;
        while(n>0){
            int a = n%10;
            n=n/10;
            sum = sum + a*a;
        }
        return sum;
    }


    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.find(n) == seen.end()){
            seen.insert(n);
            n = next(n);
        }
        return n ==1;
    }
};
