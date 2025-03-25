class Solution {
public:
    void dfs_push(vector<bool>&visited,int node,vector<vector<int>>&adj,vector<int>&component){
        visited[node]=true;
        component.push_back(node);
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs_push(visited,it,adj,component);
            }
        }
    }
    bool completecomponent(vector<int>&component, vector<vector<int>>&adj){
        for(auto node:component){
            if(adj[node].size()!=component.size()-1){
                return false;
            }
        }
        return true;
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool>visited(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                vector<int>component;
                dfs_push(visited,i,adj,component);
                if(completecomponent(component,adj)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};