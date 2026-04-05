class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // unordered_map<char,int>mp;

        // for(int i = 0 ; i<strs.size() ; i++)
        // {
        //     for(char x : strs[i])
        //     {
        //         mp[x]++;
        //     }
        // }


        int Index2 = 0;
        for(int i = 0 ; i<strs[0].size();i++)
        {
            char ch = strs[0][i];
            for(int j = 1 ; j<strs.size() ; j++)
            {
                if(i>=strs[j].size() || strs[j][i]!=ch)
                {
                    return strs[0].substr(0,Index2);
                }
            }
            Index2++;
            
        }

        return strs[0].substr(0,Index2);
        
        
    }
};