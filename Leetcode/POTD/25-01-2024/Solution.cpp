class Solution {
public:
    int LCS(string &text1, string &text2, int n1, int n2, vector<vector<int>> &dp){
        if(n1 == 0 || n2 == 0) return 0;

        if(dp[n1-1][n2-1] != -1) return dp[n1-1][n2-1];

        else if(text1[n1-1] == text2[n2-1]){
            return dp[n1-1][n2-1] = 1+LCS(text1, text2, n1-1, n2-1, dp);
        }
            return dp[n1-1][n2-1] = max(LCS(text1, text2, n1, n2-1, dp), LCS(text1, text2, n1-1, n2, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.length();
        int n2 = text2.length();

        vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));

        return LCS(text1, text2, n1, n2, dp);
    }
};