class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.length();
        if(n==k){
            return true;
        }
        if(n<k){
            return false;
        }
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        int cnt=0;
        for(auto it:mpp){
            if(it.second%2){
                cnt++;
            }
        }
        if(cnt>k){
            return false;
        }
        return true;
    }
};