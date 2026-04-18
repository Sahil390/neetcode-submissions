class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int s = prices.size();
        int max = 0;
        while(j < s)
        {
            if(prices[j] < prices[i]) i = j;
            else if(prices[j] > prices[i])
            {
                if(max < prices[j]-prices[i]) max = prices[j]-prices[i];   
            }
            j++;
        }
        return max;
    }
};
