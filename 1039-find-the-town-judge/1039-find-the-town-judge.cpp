class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>adj(n+1);
        for(auto edge:trust){
            adj[edge[0]].push_back(edge[1]);
        }
        vector<int>indegrees(n+1,0);
        vector<int>outdegrees(n+1,0);
        for(int i=1;i<=n;i++){
            for(auto it:adj[i]){
                outdegrees[i]++;
                indegrees[it]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(indegrees[i]==n-1 && outdegrees[i]==0){
                return i;
            }
        }
        return -1;
    }
};