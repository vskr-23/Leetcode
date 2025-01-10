class Solution {
public:
    char findTheDifference(string s, string t) {
        int Ssum=0,Tsum=0;
        for(auto it:s){
            Ssum+=it;
        }
        for(auto it:t){
            Tsum+=it;
        }
        return Tsum-Ssum;
    }
};