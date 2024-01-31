class Solution
{
  public:
    //Function to check if a string is Pangram or not.
     bool checkPangram (string s) {
        vector<int> res(26,0);
        
        for(int i=0; i < s.length(); i++){
            if(s[i]-'A' < 26 && s[i]-'A' >= 0) res[s[i]-'A']++;
            else if(s[i]-'a' < 26 && s[i]-'a' >= 0) res[s[i]-'a']++;
        }
        
        for(auto i: res){
            if(i == 0) return false;
        }
        return true;
    }

};