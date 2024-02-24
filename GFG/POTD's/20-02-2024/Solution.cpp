
class Solution
{
public:
    
    bool f(int ind, string s, unordered_map<string, int> &mp){
        if(ind >= s.length())  return true;
        
        for(int i=ind; i<s.length(); i++){
            string sub = s.substr(ind, i-ind+1);
            
            if(mp.find(sub) != mp.end()){
                if(f(i+1, s, mp)){
                    return true;
                }
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        unordered_map<string, int> mp;
        
        for(int i=0; i<n; i++){
            mp[dictionary[i]]++;
        }
        
        return f(0, s, mp);
    }
};