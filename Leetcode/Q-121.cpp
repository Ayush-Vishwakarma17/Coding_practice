/*
------- Best time to buy and sell stock 
------- kadan's algo based solution!

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minprice = INT_MAX;
        for (auto price: prices) {
            minprice = min(price, minprice);
            maxprofit = max(maxprofit, price - minprice);
        }
        return maxprofit;
    }
};

*/