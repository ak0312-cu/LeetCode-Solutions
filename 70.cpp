class Solution {
public:

    int helper(int n, vector<int>& dp){
        if(dp[n] != -1) return dp[n];
        if(n <= 2) return dp[n] = n;

        return dp[n] = helper(n-1, dp) + helper(n-2, dp);

    }


    int climbStairs(int n) {
        if (n <= 2) return n;
        vector<int> dp(n+1, -1);

        return helper(n, dp);
    }
};