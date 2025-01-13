class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        int len=s.length();
        for(auto it:mpp){
            int n=it.second;
            if(n>=3){
                if(n%2==0){
                    len-=n-2;
                }
                else{
                    len-=n-1;
                }
            }
        }
        return len;
    }
};