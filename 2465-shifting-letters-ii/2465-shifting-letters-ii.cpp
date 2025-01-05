class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);  
        for (const auto& shift : shifts) {
            int first = shift[0];
            int last = shift[1];
            int direction = shift[2];
            int delta = (direction == 1) ? 1 : -1;
            diff[first] += delta;
            diff[last + 1] -= delta;  
        }
        int shift = 0;
        for (int i = 0; i < n; i++) {
            shift += diff[i];
            shift = (shift % 26 + 26) % 26; 
            s[i] = (s[i] - 'a' + shift) % 26 + 'a';  
        }
        return s;
    }
};
