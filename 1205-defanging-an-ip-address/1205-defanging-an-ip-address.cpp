class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        int i=0;
        while(i<address.length()-1){
            if(address[i+1]=='.'){
                ans+=address[i];
                ans+="[.]";
                i+=2;
            }else{
                ans+=address[i];
                i++;
            }
        }
        ans+=address[address.length()-1];
        return ans;
    }
};