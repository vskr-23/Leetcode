class Solution {
public:
    void dfs(vector<vector<int>> &adj,vector<bool>&visited,int node){
        visited[node]=true;
        for(auto neighbour:adj[node]){
            if(!visited[neighbour]){
                dfs(adj,visited,neighbour);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool>visited(n,false);
        dfs(adj,visited,source);
        return visited[destination];
    }
};