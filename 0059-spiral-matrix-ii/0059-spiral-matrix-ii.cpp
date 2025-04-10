class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int it=1;
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                matrix[top][i]=it;
                it++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=it;
                it++;
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=it;
                    it++;
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=it;
                    it++;
                }
                left++;
            }
        }
        return matrix;
    }
};