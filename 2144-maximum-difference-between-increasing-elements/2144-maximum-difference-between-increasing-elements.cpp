class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result=-1;
        int n=nums.size();
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]){
                result=max(result,nums[j]-nums[i]);
            }
        }
       }
       return result;
    }
};