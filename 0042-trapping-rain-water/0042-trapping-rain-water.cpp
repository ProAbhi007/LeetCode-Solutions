class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,n=height.size(),ans=0;
        int leftmax[n],rightmax[n];
         leftmax[0]=height[0];
         rightmax[n-1]=height[n-1];
        for(i=1;i<n;i++){
           leftmax[i]=max(height[i-1],leftmax[i-1]); 
        }
        for(i=n-2;i>=0;i--){
            rightmax[i]=max(height[i+1],rightmax[i+1]);
        }
        for(i=0;i<n;i++){
            int curr=min(leftmax[i],rightmax[i])-height[i];
            if(curr>0){
                ans+=curr;
            }
        }
        return ans;

    }
};