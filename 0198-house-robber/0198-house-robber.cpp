class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solmem(nums,0,dp);
    }
    int solmem(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1)return dp[i];
        int include=nums[i]+solmem(nums,i+2,dp);
        int exclude=0+solmem(nums,i+1,dp);
        dp[i]=max(include,exclude);
        return dp[i];
    }
};