class Solution {
public:
    string RLE(string s){
        int n=s.length();
        string ans="";
        int cnt=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                cnt++;
            }else{
                ans+=to_string(cnt)+s[i-1];
                cnt=1;
            }
        }
        ans+=to_string(cnt)+s[n-1];
        return ans;
    }
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        return RLE(countAndSay(n-1));
    }
};