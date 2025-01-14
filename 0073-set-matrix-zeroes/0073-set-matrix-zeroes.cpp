class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool firstrow=false;
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                firstrow=true;
                break;
            }
        }
        bool firstcol=false;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                firstcol=true;
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstrow){
           for(int j=0;j<n;j++){
            matrix[0][j]=0;
           } 
        }
        if(firstcol){
           for(int i=0;i<m;i++){
            matrix[i][0]=0;
           } 
        }
    }
};