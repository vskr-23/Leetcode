class Solution {
public:
    string interpret(string command) {
        string ans="";
        int i=0;
        while(i<command.length()){
            if(command[i]=='G'){
                ans+='G';
                i++;
            }else if(command[i]=='(' && command[i+1]==')'){
                ans+='o';
                i=i+2;
            }else{
                ans+='a';
                ans+='l';
                i=i+4;
            }
        }
        return ans;

    }
};