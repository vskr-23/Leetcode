class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool inc=nums[0]<nums[n-1]?true:false;
        if(inc){
            for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1]){
                    return false;
                }
            }
        }else{
            for(int i=1;i<n;i++){
                if(nums[i]>nums[i-1]){
                    return false;
                }
            }
        }
        return true;
    }
};