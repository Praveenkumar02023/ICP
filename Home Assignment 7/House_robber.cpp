class Solution {
public:
    // int solve(int i , int n, vector<int>& nums, vector<int> &dp){

    //     if(i >= n){

    //         return 0;

    //     }

    //     if(dp[i] != -1) return dp[i];

    //     int pick = nums[i] + solve(i+2,n,nums,dp);
    //     int notPick = solve(i+1,n,nums,dp);

    //     return dp[i] = max(pick,notPick);
    // }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,0);
      
        //dp[i] = max money from i to n;

        //dp[i] = max(dp[i+1] , dp[i+2]);

        // 1 2 3 1
        // n = 4
        // 4 3 3 0 0
        dp[n-1] = nums[n-1];
        for(int i = n-2 ; i >= 0 ; i--){


            dp[i] = max( dp[i+1],nums[i] + dp[i+2]);

        }

        return max(dp[0],dp[1]);
    }
};