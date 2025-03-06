class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>numbers(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                numbers[grid[i][j]]++;
            }
        }
        vector<int>ans;
        int missing=0;
        int extra=0;
        for(int i=1;i<n*n+1;i++){
            if(numbers[i]==2){
                extra=i;
            }else if(numbers[i]==0){
                missing=i;
            }
        }
        ans.push_back(extra);
        ans.push_back(missing);
        return ans;
    }
};