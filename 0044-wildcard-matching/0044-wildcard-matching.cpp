class Solution {
public:
    bool isMatch(string s, string p) {
        int sIndex = 0, pIndex = 0;
        int starIndex = -1, matchIndex = 0;

        while (sIndex < s.length()) {
            if (pIndex < p.length() && (s[sIndex] == p[pIndex] || p[pIndex] == '?')) {
                sIndex++;
                pIndex++;
            } else if (pIndex < p.length() && p[pIndex] == '*') {
                starIndex = pIndex;
                matchIndex = sIndex;
                pIndex++;
            } else if (starIndex != -1) {
                pIndex = starIndex + 1;
                matchIndex++;
                sIndex = matchIndex;
            } else {
                return false;
            }
        }

        while (pIndex < p.length() && p[pIndex] == '*') {
            pIndex++;
        }
        
        return pIndex == p.length();
    }
};
