class Solution {
public:
    bool issafe(vector<vector<char>>&board,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void helper(vector<vector<char>>&board,int row,int n,int &ans){
        if(row==n){
            ans++;
            return;
        }
        for(int col=0;col<n;col++){
            if(issafe(board,row,col,n)){
                board[row][col]='Q';
                helper(board,row+1,n,ans);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        int ans=0;
        vector<vector<char>>board(n,vector<char>(n,'.'));
        helper(board,0,n,ans);
        return ans;
    }
};