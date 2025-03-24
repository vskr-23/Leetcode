class Solution {
public:
    void dfs(vector<bool>&visited,int node,vector<vector<int>>&isConnected){
        visited[node]=true;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i]==1 || isConnected[i][node]==1){
                if(!visited[i]){
                    dfs(visited,i,isConnected);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>visited(isConnected.size(),false);
        int cnt=0;
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                dfs(visited,i,isConnected);
                cnt++;
            }
        }
        return cnt;
    }
};