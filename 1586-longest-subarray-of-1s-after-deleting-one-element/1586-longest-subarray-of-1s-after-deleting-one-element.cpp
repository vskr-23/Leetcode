class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int maximum=0;
        int n=nums.size();
        int cnt=0;
        int i=0;
        while(i<n){
            if(nums[i]==0){
                cnt++;
            }
            while(cnt>1){
                if(nums[left]==0){
                    cnt--;
                }
                left++;
            }
            maximum=max(maximum,i-left);
            i++;
        }
        return maximum;
    }
};