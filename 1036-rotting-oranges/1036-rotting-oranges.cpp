class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }else if(grid[i][j]==1){
                    ++fresh;
                }
            }
        }
        if(fresh ==0 )return 0;
        int time=0;
        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int size=q.size();
            bool any_rotted =false;
            for(int i=0;i<size;i++){
                auto [x,y]=q.front();q.pop();
                for(auto &dir:dirs){
                    int nx=x+dir[0];
                    int ny=y+dir[1];

                    if(nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        q.push({nx,ny});
                        --fresh;
                        any_rotted=true;
                    }
                }
            }
            if(any_rotted)++time;
        }
        return fresh==0?time:-1;
    }
};