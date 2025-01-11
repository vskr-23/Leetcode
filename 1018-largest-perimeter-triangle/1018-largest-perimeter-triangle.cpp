class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>=2;i--){
            if(nums[i-1]+nums[i-2]>nums[i]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;
    }
};