class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegrees(numCourses,0);
        queue<int>q;
        vector<vector<int>>adj(numCourses);
        for(auto course:prerequisites){
            adj[course[1]].push_back(course[0]);
        }
        for(auto courses:adj){
            for(auto it:courses){
                indegrees[it]++;
            }
        }
        for(int i=0;i<numCourses;i++){
            if(indegrees[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int elem=q.front();
            ans.push_back(elem);
            q.pop();
            for(auto it:adj[elem]){
                indegrees[it]--;
                if(indegrees[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==numCourses){
            return ans;
        }
        vector<int>temp;
        return temp;

    }
};