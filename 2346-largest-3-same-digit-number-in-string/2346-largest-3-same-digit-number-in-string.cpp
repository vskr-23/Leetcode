class Solution {
public:
    string largestGoodInteger(string num) {
        int maximum=-1;
        for(int i=0;i<num.length()-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string temp=num.substr(i,3);
                maximum=max(maximum,stoi(temp));
            }
        }
        string ans="";
        if(maximum==0){
            ans="000";
            return ans;
        }
        if(maximum==-1){
            return ans;
        }
        return to_string(maximum);

    }
};