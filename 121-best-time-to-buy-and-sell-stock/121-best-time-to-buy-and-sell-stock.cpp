class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int buy = INT_MAX;
            int sell =0;
        for(int i: prices)
        {  buy = min(buy, i);
         sell = max(i-buy, sell);
           
        }
        return sell;
    }
};