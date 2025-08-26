class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>diagonals(m+n-1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diagonals[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        for(int k=0;k<diagonals.size();k++){
            if( k%2 ==0 && diagonals[k].size()>1){
                reverse(diagonals[k].begin(),diagonals[k].end());
            }
            for(auto it:diagonals[k]){
                    ans.push_back(it);
            }
        }
        return ans;
    }
};