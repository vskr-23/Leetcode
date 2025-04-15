class Solution {
public:
    int f(vector<int>&nums,int ind,vector<int>&dp){
        if(ind==0){
            return nums[0];
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }

        int taken=nums[ind]+f(nums,ind-2,dp);
        int not_taken=0+f(nums,ind-1,dp);

        return dp[ind]=max(taken,not_taken);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp1(n-1,-1);
        vector<int>dp2(n-1,-1);
        vector<int>first(nums.begin(),nums.end()-1);
        vector<int>second(nums.begin()+1,nums.end());
        return max(f(first,n-2,dp1),f(second,n-2,dp2));
    }
};