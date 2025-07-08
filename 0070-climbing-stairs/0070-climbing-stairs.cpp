class Solution {
public:
    int f(vector<int>&dp,int ind){
        if(ind==1 || ind==2){
            return ind;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        return dp[ind]=f(dp,ind-1)+f(dp,ind-2);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return f(dp,n);
    }
};