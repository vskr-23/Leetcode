class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length();
        int cnt=0;
        vector<int>first(26,-1),last(26,-1);
        for(int i=0;i<n;i++){
            if(first[s[i]-'a']==-1){
                first[s[i]-'a']=i;
            }
            last[s[i]-'a']=i;
        }
        for(char c='a';c<='z';c++){
            int start=first[c-'a'],end=last[c-'a'];
            if(start!=-1 && end-start>1){
                unordered_set<char>unique_chars;
                for(int i=start+1;i<end;i++){
                    unique_chars.insert(s[i]);
                }
                cnt+=unique_chars.size();
            }
        }
        return cnt;
    }
};