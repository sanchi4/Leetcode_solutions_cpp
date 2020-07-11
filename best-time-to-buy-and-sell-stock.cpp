//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MIN,sell=0;
        for(int i=0;i<prices.size();i++){
            buy = max(buy,-prices[i]);
            sell = max(sell,buy+prices[i]);
        }
        return sell;
    }
};

//Space: O(1)
//Time:O(n)