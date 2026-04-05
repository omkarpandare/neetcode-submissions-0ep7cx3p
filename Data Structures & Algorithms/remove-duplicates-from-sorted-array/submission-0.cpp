class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size()==0) 
        return 0;



        int k = 1;

        for(int i = 1 ; i<nums.size() ; i++)
        {
            if(nums[i]!=nums[k-1])
            {
                nums[k]=nums[i];
                k++;
            }
        }

        return k;
        
        // unordered_map<int,int>map;

        // for(int i = 0 ; i<nums.size() ; i++)
        // {
        //     map[nums[i]]++;
        // }
        // int k = 0;

        // for(auto it : map)
        // {
        //    nums[k]=it.first;  //this shit is lifo i mean i can reverse this in like On tim abbut 
        //    k++;
        // }
           
        // //    for(int i = 0 ; i < k/2 ; i++)
        // //    {
        // //     int temp = nums[i];
        // //     nums[i]=nums[k-1];
        // //     nums[k-i]=temp;        // this is the most bullhshit cod ei wrote
        // //    }
        // return k;  

    }
};