class Solution {
public:
    int f(int ind, vector<int>& nums, int n, vector<int>& dp){
        if(ind >= n) return 0;

        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = max(nums[ind] + f(ind+2, nums, n, dp), f(ind+1, nums, n, dp));

    }
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n+1, -1);
        return f(0,nums,n, dp);
    }
};