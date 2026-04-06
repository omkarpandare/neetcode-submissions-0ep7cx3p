class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // brute solution i remember from gfg was 
        // like split array in k-1 and sort both split array;
        // if like k is greateer than arr size n  
        
        int n = nums.size();
        if(k>nums.size())
        {
            k=k%n;
        }

        rotates(nums , 0 , k-1);
        rotates(nums , k , n-1);
        rotates(nums , 0 , n-1);
                

        
    }
    void rotates(vector<int>& arr, int i , int j)
    {
        while(i<j)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

};