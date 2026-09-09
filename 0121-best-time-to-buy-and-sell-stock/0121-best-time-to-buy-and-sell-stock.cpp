class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int profit=0;
        for(int price:prices){
            minprice=min(price,minprice);
            profit=max(profit,price-minprice);
        }
        return profit;
    }
};