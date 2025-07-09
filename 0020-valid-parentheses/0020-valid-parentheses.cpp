class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n&1) return false;
        unordered_map<char,char>mpp={{')','('},{'}','{'},{']','['}};
        stack<char>st;
        for(auto it:s){
            if(it=='{' || it=='(' || it=='['){
                st.push(it);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(st.top()!=mpp[it]){
                    return false;
                }else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};