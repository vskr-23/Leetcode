class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inccnt=1,deccnt=1;
        int maxinccnt=1,maxdeccnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                inccnt++;
                deccnt=1;
            }else if(nums[i]<nums[i-1]){
                deccnt++;
                inccnt=1;
            }else{
                inccnt=1;
                deccnt=1;
            }
            maxinccnt=max(maxinccnt,inccnt);
            maxdeccnt=max(maxdeccnt,deccnt);
        }
        return max(maxinccnt,maxdeccnt);
    }
};