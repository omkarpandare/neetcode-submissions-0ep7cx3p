class Solution {
public:
    int trap(vector<int>& height) {

        int h = height.size() , i=1 , j=i+1 , maxwater=0;

        if(h==0) return maxwater;

        while(i<h-1)
        {
            if(h<=2) return maxwater;
            if(height[i-1]<=height[i])
            {   
                i++;
                j=i+1;
                continue;             
               
               
            }
            if(j>h-1)
            {
                i++;
                j=i+1;
                
            }
            while(j<h &&height[j]<=height[i] )
            {
                j++;
                
            
            }
            
            if(j>=h) continue;
            else {
              maxwater+=(height[i-1]-height[i])*(j-i);
                i++;
                j=i+1;
            }

        }

        return maxwater;

      
        
    }
};
