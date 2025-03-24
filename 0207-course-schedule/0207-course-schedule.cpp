class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto course:prerequisites){
            adj[course[1]].push_back(course[0]);
        }
        vector<int>indegrees(numCourses,0);
        for(auto courses:adj){
            for(auto it:courses){
                indegrees[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegrees[i]==0){
                q.push(i);
            }
        }
        vector<int>toposort;
        while(!q.empty()){
            int elem=q.front();
            toposort.push_back(elem);
            q.pop();
            for(auto it:adj[elem]){
                indegrees[it]--;
                if(indegrees[it]==0){
                    q.push(it);
                }
            }
        }
        return toposort.size()==numCourses;
    }
};