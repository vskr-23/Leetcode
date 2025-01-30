class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int left=0;
        while(left<n){
            ans.push_back(nums[left]);
            ans.push_back(nums[left+n]);
            left++;
        }
        return ans;
    }
};