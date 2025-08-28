class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=n-2;i>0;i--){
            for(int start=i;start<n-1;start+=1){
                int j=0,k=i;
                while(j<n-1 && k<n-1){
                    if(grid[j][k]>grid[j+1][k+1]){
                        swap(grid[j][k],grid[j+1][k+1]);
                    }
                    j++;
                    k++;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            for(int start=i;start<n-1;start++){
                int j=i,k=0;
                while(j<n-1 && k<n-1){
                    if(grid[j][k]<grid[j+1][k+1]){
                        swap(grid[j][k],grid[j+1][k+1]);
                    }
                    j++;
                    k++;
                }  
            }
        }
        return grid;
    }
};