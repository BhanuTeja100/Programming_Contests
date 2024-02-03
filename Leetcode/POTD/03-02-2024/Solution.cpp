class Solution {
public:

    int f(int ind, vector<int>& arr, int k, int n, vector<int> &dp){
        if(ind == arr.size()) return 0;

        int len = 0, maxi = INT_MIN, maxAns = INT_MIN;

        if(dp[ind] != -1) return dp[ind];

        for(int j=ind; j < min((ind+k), n); j++){
            len++;
            maxi = max(maxi, arr[j]);
            int sum = (maxi * len) + f(j+1, arr, k, n, dp);
            maxAns = max(maxAns, sum);
        }

        return dp[ind] = maxAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n, -1);
        return f(0, arr, k, n, dp);
    }
};