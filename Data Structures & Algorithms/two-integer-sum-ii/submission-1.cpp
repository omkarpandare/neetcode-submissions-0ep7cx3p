class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int index1 = 0  , index2 = nums.size()-1;

        while(index1<index2)
        {
            int cursum = nums[index1]+nums[index2];

            if(cursum>target)
            {
                index2--;
            }
            else if(cursum<target)
            {
                index1++;
            }
            else return { index1+1 , index2+1};

        } 
        return { };
        
    }
};
