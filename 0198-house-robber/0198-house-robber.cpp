class Solution {
public:
    int fun(vector<int>&nums,vector<int>&dp,int ind){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int taken=nums[ind]+fun(nums,dp,ind-2);
        int nt=fun(nums,dp,ind-1);
        return dp[ind]=max(taken,nt);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(nums,dp,n-1);
    }
};