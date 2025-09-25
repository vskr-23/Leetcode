class Solution {
public:
    int fun(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>& dp){
        if(i==0 && j==0){
            return triangle[0][0];
        }
        if(i<0 || j<0 ||j>i){
            return 1e9;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int prev=fun(triangle,i-1,j-1,dp);
        int same=fun(triangle,i-1,j,dp);
        return dp[i][j]=triangle[i][j]+min(prev,same);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int minimum=1e9;
        int n=triangle[m-1].size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            int temp=fun(triangle,m-1,i,dp);
            minimum=min(temp,minimum);
        }
        return minimum;
    }
};