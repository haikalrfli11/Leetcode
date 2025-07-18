class Solution {
public:
   
    int maxProfit(vector<int>& prices) {
            int curr_big_prices = prices[prices.size()-1];
       int max_profit = 0;
       for(int i = prices.size()-2; i >=0;i--) {
            max_profit = max(max_profit, curr_big_prices-  prices[i]);
            curr_big_prices = max(curr_big_prices, prices[i]);
      
       }
       return max_profit;
    }
};