class Solution{ 
public:
    int majorityElement(vector<int>& nums) {


        // time O(n) space O(n)
        // unordered_map<int,int> mp;
        // for(int i:nums){
        //     mp[i]++;
        // }

        // int ans=0;
        // int index ;
        // for(auto it:mp)
        // {
        //     if(it.second>ans) {
        //         ans=it.second;
        //         index = it.first;
        // }
        // }
        // return index;


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