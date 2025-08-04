class Solution {
public:
    bool issafe(vector<vector<string>>&board,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(board[i][col]=="Q"){
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]=="Q"){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(board[i][j]=="Q"){
                return false;
            }
        }
        return true;
    }
    void printans(vector<vector<string>>&board,int n,vector<vector<string>>&ans){
        vector<string>result;
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<n;j++){
                temp+=board[i][j];
            }
            result.push_back(temp);
        }
        ans.push_back(result);
    }
    void helper(vector<vector<string>>&board,int row,int n,vector<vector<string>>&ans){
        if(row==n){
            printans(board,n,ans);
            return;
        }
        for(int col=0;col<n;col++){
            if(issafe(board,row,col,n)){
                board[row][col]="Q";
                helper(board,row+1,n,ans);
                board[row][col]=".";
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>board(n,vector<string>(n,"."));
        vector<vector<string>>ans;
        helper(board,0,n,ans);
        return ans;
    }
};