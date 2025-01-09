class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len=pref.length();
        int cnt=0;
        for(auto it:words){
            if(it.length()>=len){
                string sub=it.substr(0,len);
                if(sub==pref){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};