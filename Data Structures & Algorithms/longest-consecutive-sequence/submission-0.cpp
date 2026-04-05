class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


    int longest = 0;

    unordered_set<int> set(nums.begin() , nums.end());

    for(int x : nums)
    {
        if(set.find(x-1)==set.end())
        {
            int current = x;
            int count = 1;
        while(set.find(current+1)!=set.end())
        {
            current++;
            count++;
        }

        longest = max(longest,count);
        }
    }

    return longest;



        

        
        // int count = 1;  sorting soution is o nlogn 
        // int max1 = 1;
        // int x = nums.size();
        // sort(nums.begin() , nums.end());
        

        // for(int i = 0 ; i<nums.size()-1 ; i++)
        // {
        //     if(nums[i+1]==nums[i]+1)
        //     {
        //         count++;
        //     }
        //     else if(nums[i+1]==nums[i])
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         max1=max(count , max1);
        //         count=1;

        //     }
        // }
        

        // int ans = max(count,max1);
        // return ans;
    }
};
