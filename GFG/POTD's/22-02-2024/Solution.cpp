class Solution
{
    public:
    int mod = 1e9+7;
    int f(string s, string t, int i, int j, vector<vector<int>> &dp){
        
        if(j == t.length() ) return 1;
        
        if(i == s.length() ) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int a = 0, b = 0;
        
        if(s[i] == t[j]){
            a = f(s,t,i+1, j+1, dp);
        }
        
        b = f(s, t, i+1, j, dp);
        
        return dp[i][j] = (a+b)%mod;
        
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      int n = s.length(), m = t.length();
      
      vector<vector<int>> dp(n, vector<int>(m, -1));
      
      return f(s,t,0,0, dp);
    }
};