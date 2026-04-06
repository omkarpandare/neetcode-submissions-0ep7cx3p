class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int maxwater = 0;
        int l = 0;
        int r = nums.size()-1;

        while(l<r)
        {  int temp = min(nums[l],nums[r]);
           int  water = temp * (r-l);

           maxwater = max(water,maxwater);

           if(nums[l]>nums[r]) r--;
           else l++;
        }

        return maxwater;
    }
};
