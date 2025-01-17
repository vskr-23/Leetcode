class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=0;
        for(auto it:derived){
            n=n^it;
        }
        return n==0;
    }
};