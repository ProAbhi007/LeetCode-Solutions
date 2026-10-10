class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>freq(nums.size()+1,-1);
        for(int x:nums){
            freq[x]++;
        }
        int dublicate=0,missing=0;
        for(int i=1;i<freq.size();i++){
            if(freq[i]>=1){
                dublicate=i;
            }
            else if(freq[i]==-1){
                missing=i;
            }
          
        }
       return {dublicate,missing};
    }
};