class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        while(i+1<nums.size() && nums[i]<=nums[i+1]){
            i++;
        }
        // reverse(nums.begin(),nums.begin()+i+1);
        // reverse(nums.begin()+i+1,nums.end());
        // reverse(nums.begin(),nums.end());
        // return nums[0];
        if(i==nums.size()-1){
            return nums[0];
        }
        return (int)nums[i+1];
    }
};