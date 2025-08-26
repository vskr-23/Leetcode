class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        priority_queue<pair<double,int>>pq;
        for(auto it:dimensions){
            int l=it[0];
            int b=it[1];
            double dia=sqrt(l*l+b*b);
            int a=l*b;
            pq.push({dia,a});
        }
        int ans=pq.top().second;
        return ans;
    }
};