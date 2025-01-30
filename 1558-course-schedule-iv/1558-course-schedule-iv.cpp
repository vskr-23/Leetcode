class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<bool>ans(queries.size(),false);
        vector<vector<bool>>reachable(numCourses,vector<bool>(numCourses,false));
        for(auto it:prerequisites){
            reachable[it[0]][it[1]]=true;
        }
        for(int k=0;k<numCourses;k++){
            for(int i=0;i<numCourses;i++){
                for(int j=0;j<numCourses;j++){
                    if(reachable[i][k] && reachable[k][j]){
                        reachable[i][j]=true;
                    }
                }
            }
        }
        for(int i=0;i<queries.size();i++){
            if(reachable[queries[i][0]][queries[i][1]]){
                ans[i]=true;
            }
        }
        return ans;
    }
};