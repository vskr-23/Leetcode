class Solution {
public:
    long long f(int i,int n,vector<vector<int>>&questions,vector<long long>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        long long take=questions[i][0] + f(questions[i][1]+i+1,n,questions,dp);
        long long notake=f(i+1,n,questions,dp);
        return dp[i]=max(take,notake); 
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        if(n==1){
            return questions[0][0];
        }
        vector<long long>dp(n,-1);
        return f(0,n,questions,dp);
    }
};