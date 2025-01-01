class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int ans=0;
        int zeros=0;
        int ones=count(s.begin(),s.end(),'1');
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                ones--;
            }else{
                zeros++;
            }
            ans=max(ans,ones+zeros);
        }
        
        return ans;
    }
};