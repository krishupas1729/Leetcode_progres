class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro =0;
        int profit=0;
        int minstock=prices[0];
        for(int i =1;i<prices.size();i++) {
            profit = prices[i] - minstock;
            maxpro = max(profit,maxpro);
            minstock = min(minstock,prices[i]);
        }
        return maxpro;

    }
};