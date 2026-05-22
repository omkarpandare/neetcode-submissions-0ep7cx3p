class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int l=0,r=1;
    int mp=0;
    
    while(r<prices.size())
    {
        if(prices[l]<prices[r])
        {
            int profit = prices[r]-prices[l];
            mp=max(mp,profit);
        }
        else
        {
            l=r;
        }
        r++;
        
    }

    return mp;
    





      //so brute is obv 
    //   int profit =0 ;

    //   for(int i = 0 ; i<prices.size()-1 ; i++)
    //   {
    //     for(int j = i+1 ; j<prices.size() ; j++)
    //     {
    //        if(prices[i]>prices[j]) continue;

    //        profit=max(profit,prices[j]-prices[i]);
    //     }
    //   }  

    //   return profit;
        
    }
};
