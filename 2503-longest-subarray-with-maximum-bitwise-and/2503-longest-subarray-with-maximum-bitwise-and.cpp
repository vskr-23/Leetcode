class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maximum=*max_element(nums.begin(),nums.end());
        int cnt=0;
        int maxcnt=0;
        for(auto num:nums){
            if(num==maximum){
                cnt++;
                maxcnt=max(maxcnt,cnt);
            }else{
                cnt=0;
            }
        }
        return maxcnt;
    }
};