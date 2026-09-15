class Solution {
public:
    int change(int sum, vector<int>& coins) {
    
      vector<vector<int>>dp(coins.size()+1,vector<int>(sum+1,-1));  
        return solmem(coins,coins.size(),sum,dp);
    }
    int solmem(vector<int>&coins,int n,int sum,vector<vector<int>>&dp){
        if(sum == 0) return 1; 

        if(sum < 0) return 0; 

        if(n == 0) return 0;
        if(dp[n][sum]!=-1) return dp[n][sum]; 

        int exclude = solmem(coins, n-1, sum,dp); 

        int include = solmem(coins, n, sum - coins[n-1],dp); 
        dp[n][sum]=exclude+include;

        return dp[n][sum]; 
    }
};