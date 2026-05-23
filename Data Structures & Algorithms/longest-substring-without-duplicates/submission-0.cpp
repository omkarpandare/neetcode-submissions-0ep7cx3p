class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> uset;
        int ans=0;
        int l=0;
        for(int i = 0 ; i<s.length() ; i++)
        {
            while(uset.contains(s[i])) 
            {
                uset.erase(s[l]);
                l++;
            }
            uset.insert(s[i]);
            

            ans=max(ans,(int)uset.size());

        }

        return ans;

        
        
    }
};
