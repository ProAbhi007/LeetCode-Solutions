class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+2,-1);
        int prev1=0;
        int prev2=0;
        for(int i=0;i<n;i++){
        int curr=max(prev2,nums[i]+prev1);
        prev1=prev2;
        prev2=curr;
        }
      
        return prev2;
    }
};