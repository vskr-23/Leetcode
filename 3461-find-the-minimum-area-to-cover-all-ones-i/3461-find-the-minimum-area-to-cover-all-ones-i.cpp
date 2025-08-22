class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int max_length=0;
        int min_length=n;
        int min_width=m;
        int max_width=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    max_length=max(max_length,j);
                    max_width=max(max_width,i);
                    min_length=min(min_length,j);
                    min_width=min(min_width,i);
                }
            }
        }
        int length=max_length-min_length+1;
        int width=max_width-min_width+1;
        return (int)length*width;
    }
};