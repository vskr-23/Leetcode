class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        if(n&1) res.push_back(0);
        n/=2;
        for(int i=1;i<=n;i++){
            res.push_back(i);
            res.push_back(-i);
        }
        return res;
    }
};