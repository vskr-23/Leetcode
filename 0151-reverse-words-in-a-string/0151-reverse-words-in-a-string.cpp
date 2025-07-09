class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        int len=s.length();
        int i=0;
        while(i<len){
            string sub="";
            while(s[i]==' '){
                i++;
            }
            int j=i;
            while(s[j]!=' ' && j<len){
                sub+=s[j];
                j++;
            }
            while(s[j]==' '){
                j++;
            }
            st.push(sub);
            i=j;
        }

        string ans="";
        if(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        while(!st.empty()){
            ans+=' ';
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};