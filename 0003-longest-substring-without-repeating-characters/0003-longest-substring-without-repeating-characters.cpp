class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0){
            return 0;
        }
        unordered_set<char>seen;
        int left=0;
        int right=0;
        int maximum=1;
        while(right<n){
            if(seen.find(s[right])==seen.end()){
                seen.insert(s[right]);
                maximum=max(maximum,right-left+1);
                right++;
            }else{
                seen.erase(s[left]);
                left++;
            }
        }
        return maximum;
    }
};