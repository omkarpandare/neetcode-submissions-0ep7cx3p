class Solution {
public:
    int trap(vector<int>& height) {

        int l = 0 ;
        int r = height.size()-1;

        int res=0;

        if(height.empty()) return res;


        int lmax=height[l];
        int rmax = height[r];

        while(l<r)
        {
            if(lmax<rmax)
            {
                l++;
                lmax=max(height[l],lmax);
                res+=lmax-height[l];
                cout<<res<<endl;
            }
            else
            {
                r--;
                rmax=max(height[r],rmax);
                res+=rmax-height[r];
                cout<<res<<endl;
            }
        }

        return res;
        
    }
};
