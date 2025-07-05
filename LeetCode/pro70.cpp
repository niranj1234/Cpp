//https://leetcode.com/problems/climbing-stairs/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

class Solution {
public:
    int climbStairs(int n) {
        int a =2, b=1, c= 0;

    if(n == 1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    for( int  i =3; i<=n;++i){
        c=a+b;
        b=a;
        a=c;
    }
    return c;
    }
};
