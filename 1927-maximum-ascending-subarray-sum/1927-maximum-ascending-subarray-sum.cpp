class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int maxsum=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                maxsum=max(maxsum,sum);
                sum=nums[i];
            }else{
                sum+=nums[i];
            }
        }
        maxsum=max(maxsum,sum);
        return maxsum;
    }
};