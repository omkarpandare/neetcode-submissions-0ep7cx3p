class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // int i = 0;
        // int j = i+k;

        for(int i = 0 ; i<nums.size()-k ; i++ )
        {
            for(int j = i+1 ; j<i+k+1 ; j++)
            {
                if(nums[i]==nums[j]) return true;
            }
        }

        return false;
        
    }
};