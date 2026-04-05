class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded_string ="";
        for(string s : strs)
        {
            encoded_string += to_string(s.length())+"#"+s;  

        }
        return encoded_string;
        cout<<encoded_string;


    }

    vector<string> decode(string s) {
        cout<<s;

        vector<string> decodedstring;
        
        int i = 0;
        while(i<s.length())
        {
           int j = i;
           while(s[j]!='#') j++;

           int len =   stoi(s.substr(i,j-i));

           string temp = s.substr(j+1,len);

           decodedstring.push_back(temp);

           i = j + len +1;
        }

        return decodedstring;
        
        
    }
};
