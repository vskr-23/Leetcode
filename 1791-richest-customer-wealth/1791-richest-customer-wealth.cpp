class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=INT_MIN;
        for(auto it:accounts){
            int sum=0;
            for(auto x:it){
                sum+=x;
            }
            maximum=max(maximum,sum);
        }
        return maximum;
    }
};