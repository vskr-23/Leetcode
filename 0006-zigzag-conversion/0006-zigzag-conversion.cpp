class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || s.length()<=numRows) return s;
        vector<string>substrings(numRows,"");
        int index=0;
        int step=1;
        for(char c:s){
            substrings[index]+=c; 
            if(index==0) step=1;
            else if(index==numRows-1) step=-1;
            index+=step;
        }
        string ans="";
        for(auto str:substrings){
            ans+=str;
        }
        return ans;
    }
};