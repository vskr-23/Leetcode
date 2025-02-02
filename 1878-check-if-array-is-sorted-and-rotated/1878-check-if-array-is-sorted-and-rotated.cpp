class Solution {
public:
    bool check_sorted(vector<int>&nums){
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
    void rotate(vector<int>&nums,int k){
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
    }
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while(i<n && nums[i]>=nums[i-1]){
            i++;
        }
        rotate(nums,i);
        return check_sorted(nums);
    }
};