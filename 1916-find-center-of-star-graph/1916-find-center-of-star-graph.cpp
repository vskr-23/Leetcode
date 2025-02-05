class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mpp;
        for(auto it:edges){
            mpp[it[0]]++;
            mpp[it[1]]++;
        }
        int maximum=INT_MIN;
        int center;
        for(auto it:mpp){
            if(it.second>maximum){
                maximum=it.second;
                center=it.first;
            }
        }
        return center;
    }
};