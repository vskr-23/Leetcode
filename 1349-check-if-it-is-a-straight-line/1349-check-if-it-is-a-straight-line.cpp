class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dy1=coordinates[1][1]-coordinates[0][1];
        int dx1=coordinates[1][0]-coordinates[0][0];
        int n=coordinates.size();
        for(int i=2;i<n;i++){
            int dy2=coordinates[i][1]-coordinates[i-1][1];
            int dx2=coordinates[i][0]-coordinates[i-1][0];
            if(dy1*dx2!=dy2*dx1){
                return false;
            }
        }
        return true;
    }
};