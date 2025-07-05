//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=company&envId=amazon&favoriteSlug=amazon-thirty-days

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int max = 0;
//         int s = prices.size();

//         for(int i =0;i<s-1;i++){
//             for(int j=i+1;j<s;j++){
//                 if(prices[j]-prices[i]>max){
//                     max = prices[j]-prices[i];
//                 }
//             }
//         }
//         return max;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int i=0; i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            else if(prices[i]-buy>profit){
                profit = prices[i]-buy;
            }

        }
        return profit;
    }
};
 
