class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i = 0 , j = 0 ;
        int n1 = word1.length()  , n2 = word2.length() ;
        string result = "";
         
        while(i<n1 && j<n2)
        {
            result.push_back(word1[i++]);
            result.push_back(word2[j++]);
            
        }

        while(i<n1) result.push_back(word1[i++]);
        while(j<n2) result.push_back(word2[j++]);
        // if(n1==i)
        // {
        //     int x = n2 - n1;
        //     while(x--){
        //         result.push_back(word2[j]);
        //         j++;
        //         if(j==n2) continue;

        //     }
        // }
        // else if(n2==j)
        // {
        //     int x = n1-n2;
        //     while(x--){
        //         result.push_back(word1[i]);
        //         i++;
        //         if(i==n1) continue;

        //     }
        // }

        return result;

        
    }
};