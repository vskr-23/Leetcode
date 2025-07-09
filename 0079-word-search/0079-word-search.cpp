class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j,int index,string & word,bool & flag){
        int m=board.size();
        int n=board[0].size();
        if(flag) return;
        if(index==word.size()){
            flag=true;
            return;
        }
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[index]){
            return;
        }
        char temp=board[i][j];
        board[i][j]='\#';
        dfs(board,i+1,j,index+1,word,flag);
        dfs(board,i-1,j,index+1,word,flag);
        dfs(board,i,j+1,index+1,word,flag);
        dfs(board,i,j-1,index+1,word,flag);
        board[i][j]=temp;
    }
    bool exist(vector<vector<char>>& board, string word) {
        char start=word[0];
        int m=board.size();
        int n=board[0].size();
        bool flag=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && !flag){
                    vector<vector<char>>temp=board;
                    dfs(temp,i,j,0,word,flag);
                }
            }
        }
        return flag;
    }
};