class Solution {
public:
    int helper(vector<int>&vec){
        int cnt=0;
        int height=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==0){
                height=0;
                continue;
            }
            height++;
            cnt+=height;
        }
        return cnt;
    }
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int result=0;
        for(int i=0;i<m;i++){
            vector<int>vec(n,1);
            for(int j=i;j<m;j++){
                for(int k=0;k<n;k++){
                    vec[k]=vec[k]&mat[j][k];
                }
                result+=helper(vec);
            }
        }
        return result;
    }
};