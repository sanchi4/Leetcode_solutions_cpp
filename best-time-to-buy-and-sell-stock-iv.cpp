//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(k==0)return 0;
        if (k >= prices.size()/2) {
            int res = 0;
            for (int i = 1; i < prices.size(); ++i)
                res += max(prices[i] - prices[i-1], 0);
            return res;
        }
        vector<int> buy(k,INT_MIN);
        vector<int> sell(k,0);
        for(int i = 0;i<prices.size();i++){
            for(int j=0;j<k;j++){
                buy[j] = max(buy[j],(j==0?0:sell[j-1])-prices[i]);
                sell[j]=max(sell[j],buy[j]+prices[i]);
            }
        }
        return sell[k-1];
    }
};