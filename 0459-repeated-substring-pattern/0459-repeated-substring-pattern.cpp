class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string merged=s+s;
        string sub=merged.substr(1,merged.size()-2);
        return sub.find(s)!=string::npos;
    }
};