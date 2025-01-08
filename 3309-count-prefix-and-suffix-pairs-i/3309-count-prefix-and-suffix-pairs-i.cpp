class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;
        for(int i=0;i<n-1;i++){
                string str=words[i];
                int len=str.length();
            for(int j=i+1;j<n;j++){
                if(len<=words[j].length()){
                    string prefix=words[j].substr(0,len);
                    string suffix=words[j].substr(words[j].length()-len,len);
                    if(prefix==str && str==suffix){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};