class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // unordered_map<int,int> mp;
        // for(int i:nums){
        //     mp[i]++;
        // }

        // int ans=0;
        // for(auto it:mp)
        // {
        //     if(it.second>ans) ans=it.second;
        // }
        // return ;

        int candidate = 0 ; 
        int count = 0 ;

        for(int x : nums)
        {
            if(count==0)
            {
                candidate=x;
            }

            if(x==candidate)
            {
                count++;
            }
            else count--;
        }
        return candidate;

        
    }
};