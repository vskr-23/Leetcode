class Solution {
public:
    void dfs(vector<vector<int>>& graph,int source,int destination,vector<int>&path,vector<vector<int>>&allpaths){
        path.push_back(source);
        if(source==destination){
            allpaths.push_back(path);
        }else{
            for(auto it:graph[source]){
                dfs(graph,it,destination,path,allpaths);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
        vector<vector<int>>allpaths;
        dfs(graph,0,graph.size()-1,path,allpaths);
        return allpaths;
    }
};