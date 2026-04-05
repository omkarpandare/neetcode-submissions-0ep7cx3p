class Solution {
    public String longestCommonPrefix(String[] strs) {
         //String lol = "lol";//im so dumb
        for(int i = 0 ; i<strs[0].length();i++){
            char ch = strs[0].charAt(i);
            for(int j = 0 ; j<strs.length ; j++){
                // if(strs[j].charAt(i)!=ch || i>=strs[j].length() ){
                if(i>=strs[j].length() ||strs[j].charAt(i)!=ch  ){
                    return strs[j].substring(0,i);
                }

            }

        }
        // return lol.substring(0,0);
        return strs[0];
    }
}