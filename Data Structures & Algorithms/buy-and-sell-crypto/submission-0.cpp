class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int i=0;
    





      //so brute is obv 
      int profit =0 ;

      for(int i = 0 ; i<prices.size()-1 ; i++)
      {
        for(int j = i+1 ; j<prices.size() ; j++)
        {
           if(prices[i]>prices[j]) continue;

           profit=max(profit,prices[j]-prices[i]);
        }
      }  

      return profit;
        
    }
};
