class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string str="";
        for(int i=0; i<words.size();i++){
            string s = words[i];
            reverse(s.begin(), s.end());
            if(words[i] == s){
                str = words[i];
                break;
            }
        }
        return str;
    }
};