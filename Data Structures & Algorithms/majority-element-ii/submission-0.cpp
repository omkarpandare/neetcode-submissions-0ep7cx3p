class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int>map;

        int n = nums.size()/3;

        for(int  i : nums) map[i]++;

        vector<int> result;

        for(auto it : map)
        {
            if(it.second>n)
            result.push_back(it.first);
        }

        return result;
        
    }
};