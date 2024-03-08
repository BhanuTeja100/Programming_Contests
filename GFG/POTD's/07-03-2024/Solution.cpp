class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
        
        // result variable
        string res;
        
        // loop 
        for(int i = 0, j = 0; j < n; j++) {
            // substring
            string str = s.substr(i, j - i + 1);
            
            // to find the string
            if(s.find(str, j + 1) !=  -1) 
                res = str;
            else
                i++;
        }
        
        return res == "" ? "-1" : res;
    }
};