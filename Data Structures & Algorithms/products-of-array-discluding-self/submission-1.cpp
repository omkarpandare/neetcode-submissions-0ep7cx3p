class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // if(nums.empty()) return {};

        // vector<int> output(nums.size(),1);

        // long long pf=1;
        // for(int i =0 ; i<nums.size() ; i++)
        // {   
        //     output[i]=pf;
        //     pf *=nums[i];
        // }

        // long long sf=1;
        // for(int i = nums.size()-1 ; i>=0 ; i++)
        // {
        //     output[i] *=sf;
        //     sf *= nums[i];
        // }

        // return output;





        
        vector<int> output;
        for(int i = 0 ; i<nums.size() ; i++)
        {   int temp1=1;
            for(int j = 0 ; j<i ; j++) temp1 = temp1*nums[j];

            int temp2=1;
            for(int j = i+1 ; j<nums.size() ; j++) temp2 = temp2*nums[j];

            output.push_back(temp1*temp2);

            
        }
        return output;

    }
};
