class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right =n-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]<=nums[right]){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return nums[left];
    }
};