class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        unordered_map<int,int>mp;

        for(int i : nums) mp[i]++;

        vector<vector<int>> bucket(nums.size()+1);

        for(auto it : mp)
        {
            int freq = it.second;
            int val = it.first;
            bucket[freq].push_back(val);
        }

        vector<int> result;

        for(int i = bucket.size()-1 ; i>=0 && result.size()<k ; i--)
        {   
            for(int num : bucket[i])
            {
            result.push_back(num);
            if(result.size()==k) break;
            }
        }

        return result;








        // unordered_map<int,int>mp;
        

        // for(int i : nums) mp[i]++;

        // vector<pair<int,int>> arr;

        // for(auto it : mp)
        // {
        //     arr.push_back(it);
        // }

        // sort(arr.begin() , arr.end() ); im not sorting it correctly anyways this solution will be slower

        // vector<int>result;

        // for(int i = 0 ; i<k ; i++)
        // {
        //     result.push_back(arr[i].first);

        // }

        // return result;

        
        
    }
};
