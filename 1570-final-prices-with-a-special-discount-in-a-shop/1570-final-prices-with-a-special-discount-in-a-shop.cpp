class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
         for(int i = 0; i < prices.size(); i++) {
        int cur = prices[i];
        for(int j = i+1; j < prices.size(); j++) {
            if(cur >= prices[j]) {
                prices[i] -= prices[j];
                j = prices.size();
            }
        }
      
    }
        return prices;
    }
};