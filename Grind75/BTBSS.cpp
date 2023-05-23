class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0]; 
        int max = -1;
        int profit = 0;  
        int n = prices.size(); 
        for(int i = 1; i < n; ++i){
            if(prices[i] < min){
                min = prices[i];
                max = profit; 
            }
            else if(prices[i] > max){
                max = prices[i]; 
                if(max - min > profit)
                    profit = max - min;
            }
        }
        return profit; 
    }
};

// Runtime: 141ms 
// Memory: 93.2MB    