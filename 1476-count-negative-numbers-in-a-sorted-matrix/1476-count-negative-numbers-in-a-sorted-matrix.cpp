class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int lowr=0;
        int highr=m-1;
        while(lowr<=highr){
            int mid=lowr+(highr-lowr)/2;
            if(grid[mid][0]>=0){
                lowr=mid+1;
            }else{
                highr=mid-1;
            }
        }
        int cnt=(m-lowr)*n;
        for(int i=0;i<lowr;i++){
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[i][mid]>=0){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
            cnt+=(n-low);
        }
        return cnt;
    }
};