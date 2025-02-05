class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int cnt=0;
        int k=-1,j=-1;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if (cnt==1) j=i;
                else if(cnt==2) k=i;
                else return false;
            }
        }
        if( cnt==2 && s1[j]==s2[k] && s1[k]==s2[j]){
            return true;
        }
        return false;
    }
};